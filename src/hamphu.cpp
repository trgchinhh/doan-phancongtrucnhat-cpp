#include "lib/hamphu.h"
#include <cctype>

int LayNamHienTai(){
    time_t thoigian = time(NULL);
    tm* hientai = localtime(&thoigian);
    return hientai->tm_year + 1900;
}

bool XuLySoNguyen(int &n){
    cin >> n;
    if (cin.fail()) {
        cin.clear();                                         
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        return false;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');     
    return true;
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

void DungChuongTrinh(){
    cout << "Nhấn phím bất kỳ để tiếp tục ...";
    getch();
}