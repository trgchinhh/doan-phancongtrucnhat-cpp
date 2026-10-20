#include "lib/taongaunhien.h"
#include "lib/cautrucdulieu.h"
#include "lib/congnhan.h"
#include "lib/hamphu.h"
#include <random>

string RandomTen(mt19937& gen){
    return danhsachho[gen() % danhsachho.size()] + " "
         + danhsachtendem[gen() % danhsachtendem.size()] + " "
         + danhsachten[gen() % danhsachten.size()];
}

string RandomTenPhanXuong(mt19937& gen){
    return tenphanxuonglamviecchophep[gen() % tenphanxuonglamviecchophep.size()];
}

int RandomNamSinh(mt19937& gen){
    return gen() % (55 - 18 + 1) + (LayNamHienTai() - 55);
}

void TaoDanhSachNgauNhien(DanhSachVong& danhsachvong, int soluongcongnhan, string tenphanxuong){
    // khởi tạo random
    random_device rd;
    mt19937 gen(rd());

    for(int i = 0; i < soluongcongnhan; i++){
        int sothutu_congnhan = LaySoThuTuCongNhan(danhsachvong) + 1;
        string ten_congnhan = RandomTen(gen);
        int namsinh_congnhan = RandomNamSinh(gen);
        string phanxuong_congnhan = tenphanxuong;
        CongNhan congnhanmoi = CongNhan(sothutu_congnhan, ten_congnhan, namsinh_congnhan, phanxuong_congnhan);
        NodeVongPtr nodemoi = KhoiTaoNode(congnhanmoi);
        ThemNodeVaoCuoiVong(danhsachvong, nodemoi);
    }
    //danhsachvong.soluong = LaySoThuTuCongNhan(danhsachvong) + soluongcongnhan;
    cout << "(!) Đã khởi tạo danh sách ngẫu nhân phân xưởng " << tenphanxuong << endl;
}