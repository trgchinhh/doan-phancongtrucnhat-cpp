// file header định nghĩa struct chứa thông tin của công nhân 

#ifndef CONGNHAN_H
#define CONGNHAN_H

#include "hamphu.h"
#include "thuvienchung.h"

struct CongNhan {
    int sothutu;              // số thứ tự công nhân 
    string hoten;             // họ và tên 
    int namsinh;              // năm sinh 
    string tenphanxuong;      // phân xưởng làm việc

    CongNhan(){
        this->sothutu = 0;
        this->hoten = "Chưa có";
        this->namsinh = 2000;
        this->tenphanxuong = "A";
    }

    CongNhan(int sothutu, string hoten, int namsinh, string tenphanxuong){
        this->sothutu = sothutu;
        this->hoten = hoten;
        this->namsinh = namsinh;
        this->tenphanxuong = tenphanxuong;
    }
};

bool NhapThongTinCongNhan(CongNhan& congnhan);
void XuatThongTinCongNhan(CongNhan congnhan);

#endif