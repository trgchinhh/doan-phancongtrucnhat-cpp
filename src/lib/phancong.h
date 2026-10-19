// File header của tính năng phân công 

#ifndef PHANCONG_H
#define PHANCONG_H

#include "cautrucdulieu.h"
#include "thuvienchung.h"

int TinhUCLN(int a, int b);
int TinhBCNN(int a, int b);
void PhanCong(DanhSachVong& danhsachvongA, DanhSachVong& danhsachvongB);
void XuatThongTinPhanCong(int ngay, NodeVongPtr congnhanA, NodeVongPtr congnhanB);

#endif