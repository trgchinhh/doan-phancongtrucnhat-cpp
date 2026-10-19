#include "include.h"
#include "lib/cautrucdulieu.h"
#include "lib/phancong.h"

int main(){
    system("cls");


    DanhSachVong danhsachvong_phanxuongA;
    DanhSachVong danhsachvong_phanxuongB;

    KhoiTaoDanhSachVong(danhsachvong_phanxuongA);
    KhoiTaoDanhSachVong(danhsachvong_phanxuongB);

    ThemNodeVaoCuoiVong(danhsachvong_phanxuongA, KhoiTaoNode({1, "Truong Chinh", 2006, "A"}));
    ThemNodeVaoCuoiVong(danhsachvong_phanxuongA, KhoiTaoNode({2, "Gia Bao",      2006, "A"}));
    ThemNodeVaoCuoiVong(danhsachvong_phanxuongA, KhoiTaoNode({3, "Minh Tuan",    2005, "A"}));
    ThemNodeVaoCuoiVong(danhsachvong_phanxuongA, KhoiTaoNode({4, "Hoang Long",   2004, "A"}));

    // Phân xưởng B: 5 người
    ThemNodeVaoCuoiVong(danhsachvong_phanxuongB, KhoiTaoNode({5, "Manh Cuong",   2006, "B"}));
    ThemNodeVaoCuoiVong(danhsachvong_phanxuongB, KhoiTaoNode({6, "Khanh Duy",    2006, "B"}));
    ThemNodeVaoCuoiVong(danhsachvong_phanxuongB, KhoiTaoNode({7, "Thai Bao",     2006, "B"}));
    ThemNodeVaoCuoiVong(danhsachvong_phanxuongB, KhoiTaoNode({8, "Quoc Anh",     2005, "B"}));
    ThemNodeVaoCuoiVong(danhsachvong_phanxuongB, KhoiTaoNode({9, "Phuc Thinh",   2003, "B"}));

    danhsachvong_phanxuongA.soluong = 4;
    danhsachvong_phanxuongB.soluong = 5;

    // XuatDanhSach(danhsachvong_phanxuongA, "A");
    // XuatDanhSach(danhsachvong_phanxuongB, "B");

    PhanCong(danhsachvong_phanxuongA, danhsachvong_phanxuongB);

    return 0;
}