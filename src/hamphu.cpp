#include "lib/hamphu.h"
#include <cctype>

int LayNamHienTai(){
    time_t thoigian = time(NULL);
    tm* hientai = localtime(&thoigian);
    return hientai->tm_year + 1900;
}

bool XuLySoNguyen(int &n) {
    string s;
    getline(cin, s);
    try {
        size_t pos;
        n = stoi(s, &pos);
        return pos == s.size();
    } catch (...) {
        return false;
    }
    return false;
}

void InDuongNgang(int soluong, string kytu){
    for(int i = 0; i < soluong; i++){
        cout << kytu;
    }
    cout << endl;
}

void InTieuDe(string tieude){
    cout << tieude << endl << endl;
}

void XoaManHinh(){
    system("cls");
}

// void DungChuongTrinh(){
//     cout << "Nhấn phím bất kỳ để tiếp tục ...";
//     getch();
// }

void DungChuongTrinh() {
    cout << "Nhấn phím bất kỳ để tiếp tục ...";
    getch();
    cout << "\r\033[2K";
}