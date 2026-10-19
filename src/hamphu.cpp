#include "lib/hamphu.h"

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