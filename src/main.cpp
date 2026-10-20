#include "include.h"
#include "lib/banner.h"
#include "lib/cautrucdulieu.h"
#include "lib/hamphu.h"
#include "lib/phancong.h"
#include "lib/taongaunhien.h"

int main(){
    system("cls");

    DanhSachVong danhsachvong_phanxuongA;
    DanhSachVong danhsachvong_phanxuongB;
    KhoiTaoDanhSachVong(danhsachvong_phanxuongA);
    KhoiTaoDanhSachVong(danhsachvong_phanxuongB);

    InBannerHoacMenu(bannerphancong);
    DungChuongTrinh();

    // ThemNodeVaoCuoiVong(danhsachvong_phanxuongA, KhoiTaoNode({1, "Truong Chinh", 2006, "A"}));
    // ThemNodeVaoCuoiVong(danhsachvong_phanxuongA, KhoiTaoNode({2, "Gia Bao",      2006, "A"}));
    // ThemNodeVaoCuoiVong(danhsachvong_phanxuongA, KhoiTaoNode({3, "Minh Tuan",    2005, "A"}));
    // ThemNodeVaoCuoiVong(danhsachvong_phanxuongA, KhoiTaoNode({4, "Hoang Long",   2004, "A"}));
    // ThemNodeVaoCuoiVong(danhsachvong_phanxuongB, KhoiTaoNode({5, "Manh Cuong",   2006, "B"}));
    // ThemNodeVaoCuoiVong(danhsachvong_phanxuongB, KhoiTaoNode({6, "Khanh Duy",    2006, "B"}));
    // ThemNodeVaoCuoiVong(danhsachvong_phanxuongB, KhoiTaoNode({7, "Thai Bao",     2006, "B"}));
    // ThemNodeVaoCuoiVong(danhsachvong_phanxuongB, KhoiTaoNode({8, "Quoc Anh",     2005, "B"}));
    // ThemNodeVaoCuoiVong(danhsachvong_phanxuongB, KhoiTaoNode({9, "Phuc Thinh",   2003, "B"}));
    //PhanCong(danhsachvong_phanxuongA, danhsachvong_phanxuongB);

    int luachon;
    while(true){
        XoaManHinh();
        InBannerHoacMenu(bannerchinh);
        InBannerHoacMenu(menuchinh);
        cout << "[-] Lựa chọn: "; XuLySoNguyen(luachon);
        if(luachon == 1){
            XoaManHinh();
            InTieuDe("NHẬP CÔNG NHÂN PHÂN XƯỞNG A");
            NhapDanhSach(danhsachvong_phanxuongA, "A");
        } 
        else if(luachon == 2){
            XoaManHinh();
            InTieuDe("NHẬP CÔNG NHÂN PHÂN XƯỞNG B");
            NhapDanhSach(danhsachvong_phanxuongB, "B");
        }
        else if(luachon == 3){
            XoaManHinh();
            InTieuDe("TẠO NGẪU NHIÊN DANH SÁCH CÔNG NHÂN");
            int soluongcongnhan_phanxuongA = 0;
            int soluongcongnhan_phanxuongB = 0;
            cout << "Nhập số lượng danh sách công nhân phân xưởng A: "; 
            if(!XuLySoNguyen(soluongcongnhan_phanxuongA)){
                cout << "(!) Vui lòng nhập đúng số lượng !" << endl;
                DungChuongTrinh();
                continue;
            }
            cout << "Nhập số lượng danh sách công nhân phân xưởng B: ";
            if(!XuLySoNguyen(soluongcongnhan_phanxuongB)){
                cout << "(!) Vui lòng nhập đúng số lượng !" << endl;
                DungChuongTrinh();
                continue;
            }
            if(!soluongcongnhan_phanxuongA || !soluongcongnhan_phanxuongB){
                cout << "(!) Vui lòng nhập số lượng công nhân lớn hơn 0 !" << endl;
                DungChuongTrinh();
                continue;
            }
            TaoDanhSachNgauNhien(
                danhsachvong_phanxuongA, soluongcongnhan_phanxuongA, "A"
            );
            TaoDanhSachNgauNhien(
                danhsachvong_phanxuongB, soluongcongnhan_phanxuongB, "B"
            );
            XuatDanhSach(danhsachvong_phanxuongA, "A");
            XuatDanhSach(danhsachvong_phanxuongB, "B");
        }
        else if(luachon == 4){
            XoaManHinh();
            InTieuDe("IN DANH SÁCH");
            XuatDanhSach(danhsachvong_phanxuongA, "A");
            XuatDanhSach(danhsachvong_phanxuongB, "B");
        } 
        else if(luachon == 5){
            XoaManHinh();
            InTieuDe("BẢNG PHÂN CÔNG");
            TaoBangPhanCong(
                danhsachvong_phanxuongA, danhsachvong_phanxuongB
            );
        }
        else if(luachon == 0){
            XoaManHinh();
            InBannerHoacMenu(bannertambiet);
            break;
        }
        else {
            cout << "(!) Vui lòng nhập lựa chọn hợp lệ !" << endl;
        }
        DungChuongTrinh();
    }

    return 0;
}