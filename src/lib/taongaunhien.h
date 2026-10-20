// File header tạo ngẫu nhiên danh sách công nhân 

#ifndef TAONGAUNHIEN_H
#define TAONGAUNHIEN_H

#include "cautrucdulieu.h"
#include "thuvienchung.h"
#include <random>

// danh sách tên để random nhiều tên khác nhau 
const vector<string> danhsachho = {
    "Nguyen", "Tran", "Le", "Pham", "Hoang", "Huynh", "Phan", "Vu", "Vo",
    "Dang", "Bui", "Do", "Ho", "Ngo", "Duong", "Ly", "Dinh", "Doan",
    "Trinh", "Luong", "Truong", "Lam", "Mai", "Ha", "Cao", "Ta", "Trieu",
    "Chau", "Quach", "Thai", "Tong", "Luu", "Lai", "Kieu", "To", "Dao",
    "Vuong", "Ung", "Van", "La", "Tieu", "Han", "Thach", "Diep", "Banh"
};

const vector<string> danhsachtendem = {
    "Van", "Minh", "Gia", "Quoc", "Hoang", "Thanh", "Duc", "Huu", "Cong",
    "Xuan", "Ngoc", "Tuan", "Anh", "Bao", "Dinh", "Trung", "Quang", "Khac",
    "Manh", "Phuc", "Thai", "Viet", "Hai", "Kim", "Nhat", "Tien", "Trong",
    "Thi", "Ngoc", "Thanh", "Kim", "Bao", "Minh", "Hong", "Thuy", "Mai",
    "Phuong", "Khanh", "Diem", "Gia", "Lan", "Tuyet", "Yen", "Hoai", "Quynh"
};

const vector<string> danhsachten = {
    "An", "Binh", "Cuong", "Duy", "Dung", "Hung", "Khanh", "Long", "Nam",
    "Phuc", "Quan", "Tuan", "Viet", "Bao", "Chinh", "Dat", "Hai", "Hieu",
    "Hoang", "Huy", "Khoa", "Kiet", "Lam", "Minh", "Nghia", "Phong",
    "Quang", "Son", "Tai", "Thang", "Thanh", "Thinh", "Trung", "Vinh",
    "Anh", "Chi", "Dung", "Giang", "Ha", "Hanh", "Hoa", "Huong", "Lan",
    "Linh", "Loan", "Mai", "My", "Ngan", "Nhi", "Nhung", "Oanh", "Phuong",
    "Quynh", "Thao", "Thu", "Trang", "Trinh", "Tuyet", "Uyen", "Van", "Yen"
};

// tên phân xưởng làm việc cho phép là A và B 
const vector<string> tenphanxuonglamviecchophep = {"A", "B"};

string RandomTen(mt19937& gen);
string RandomTenPhanXuong(mt19937& gen);
int RandomNamSinh(mt19937& gen);
void TaoDanhSachNgauNhien(DanhSachVong& danhsachvong, int soluongcongnhan, string tenphanxuong);

#endif