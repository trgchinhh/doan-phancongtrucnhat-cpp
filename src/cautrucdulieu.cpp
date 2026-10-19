#include "lib/cautrucdulieu.h"

void KhoiTaoDanhSachVong(DanhSachVong& danhsachvong){
    danhsachvong.first = NULL;
    danhsachvong.last = NULL;
}

bool KiemTraDanhSachRong(DanhSachVong danhsachvong){
    return danhsachvong.first == NULL 
         && danhsachvong.last == NULL;
}

NodeVongPtr KhoiTaoNode(CongNhan dulieunhanvien){
    NodeVongPtr Nodemoi = new NodeVong();
    Nodemoi->data = dulieunhanvien;
    Nodemoi->link = NULL;
    return Nodemoi;
}

void ThemNodeVaoDauVong(DanhSachVong &danhsachvong, NodeVongPtr nodemoi){
    if(KiemTraDanhSachRong(danhsachvong)){
        danhsachvong.first = nodemoi;
        danhsachvong.last = nodemoi;
    } else {
        nodemoi->link = danhsachvong.first;
        danhsachvong.last->link = nodemoi;
        danhsachvong.first = nodemoi;
    }
    cout << "Đã thêm node mới vào đầu danh sách" << endl;
}

void ThemNodeVaoCuoiVong(DanhSachVong& danhsachvong, NodeVongPtr nodemoi){
    if(KiemTraDanhSachRong(danhsachvong)){
        danhsachvong.first = nodemoi;
        danhsachvong.last = nodemoi;
        nodemoi->link = nodemoi;
    } else {
        nodemoi->link = danhsachvong.first;
        danhsachvong.last->link = nodemoi;
        danhsachvong.last = nodemoi;
    }
}

// lấy số thứ tự công nhân cuối cùng [dùng cho hàm nhập]
int LaySoThuTuCongNhan(DanhSachVong danhsachvong){
    if(!KiemTraDanhSachRong(danhsachvong)){
        return danhsachvong.last->data.sothutu; 
    }
    return 0;
}

void NhapDanhSach(DanhSachVong& danhsachvong, string tenphanxuong){
    cout << "Nhập công nhân phân xưởng " << tenphanxuong << endl;
    cout << "(?) Nhập số lượng công nhân muốn thêm: ";
    int soluongmuonthem; 
    XuLySoNguyen(soluongmuonthem);
    if(soluongmuonthem <= 0){
        cout << "(!) Số lượng nhân viên phải lớn hơn 0 !" << endl;
        return;
    }
    int sothutucuoicung = LaySoThuTuCongNhan(danhsachvong);
    for(int i = 0; i < soluongmuonthem; i++){
        cout << "Nhập thông tin công nhân thứ " << sothutucuoicung + i + 1 << endl;
        CongNhan congnhanmoi;
        NhapThongTinCongNhan(congnhanmoi);
        NodeVongPtr nodemoi = KhoiTaoNode(congnhanmoi);
        ThemNodeVaoCuoiVong(danhsachvong, nodemoi);
    }
}

void XuatDanhSach(DanhSachVong danhsachvong, string tenphanxuong){
    if(KiemTraDanhSachRong(danhsachvong)){
        cout << "(!) Danh sách rỗng !" << endl;
        return;
    }
    cout << "Danh sách" << endl;
    cout << left << setw(20) << "Tên"
                 << setw(20) << "Năm sinh"
                 << setw(20) << "Phân xưởng"
                 << endl;
    NodeVongPtr nodemoi = danhsachvong.first;
    do {
        XuatThongTinCongNhan(nodemoi->data);
        nodemoi = nodemoi->link;
    } while(nodemoi != danhsachvong.first);
    cout << endl;
}