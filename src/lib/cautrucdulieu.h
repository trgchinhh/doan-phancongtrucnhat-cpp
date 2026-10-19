// File header của cấu trúc dữ liệu cho chương trình 
// Ở đây mình dùng cấu trúc dslk vòng 

#ifndef CAUTRUCDULIEU_H
#define CAUTRUCDULIEU_H

#include "thuvienchung.h"
#include "congnhan.h"

struct NodeVong {
    CongNhan data;    
    NodeVong* link;
};

typedef NodeVong* NodeVongPtr;

struct DanhSachVong {
    int soluong = 0;
    NodeVongPtr first;
    NodeVongPtr last;
};

void KhoiTaoDanhSachVong(DanhSachVong& danhsachvong);
bool KiemTraDanhSachRong(DanhSachVong danhsachvong);
NodeVongPtr KhoiTaoNode(CongNhan dulieunhanvien);

void ThemNodeVaoDauVong(DanhSachVong& danhsachvong, NodeVongPtr nodemoi);
void ThemNodeVaoCuoiVong(DanhSachVong &danhsachvong, NodeVongPtr nodemoi);

int LaySoThuTuCongNhan(DanhSachVong danhsachvong);
void NhapDanhSach(DanhSachVong& danhsachvong, string tenphanxuong);
void XuatDanhSach(DanhSachVong danhsachvong, string tenphanxuong);

#endif
