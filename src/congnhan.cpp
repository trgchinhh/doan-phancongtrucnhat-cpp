#include "lib/congnhan.h"
#include "lib/cautrucdulieu.h"
#include "lib/hamphu.h"
#include <iomanip>

void NhapThongTinCongNhan(CongNhan& congnhan){
    string tencongnhan_tam;
    int namsinhcongnhan_tam;
    string tenphanxuong_tam;

    // khai báo số lần nhập sai tối đa cho các thành phần
    int solansaitentoida = SOLANNHAPSAITOIDA;
    int solansainamsinhtoida = SOLANNHAPSAITOIDA;
    int solansaitenphanxuongtoida = SOLANNHAPSAITOIDA;

    // nhập tên
    do {
        cout << "(?) Nhập tên công nhân: ";
        getline(cin, tencongnhan_tam);
        if(tencongnhan_tam.empty()){
            cout << "(!) Không được để rỗng vui lòng nhập lại" << endl;
            solansaitentoida--;        
        } else break;
    } while(solansaitentoida > 0);
    if(solansaitentoida == 0){
        return;
    }

    // nhập năm sinh 
    do {
        cout << "(?) Nhập năm sinh công nhân: ";
        cin >> namsinhcongnhan_tam;
        // quy định năm sinh công nhân ko bé hơn 1965 và lớn hơn (2026-18=2008)
        if(namsinhcongnhan_tam < (LayNamHienTai() - 55)  || namsinhcongnhan_tam > (LayNamHienTai() - 18)){
            cout << "(!) Năm sinh quy định nằm trong khoảng 1965 -> " << LayNamHienTai() - 18 << endl;
            solansainamsinhtoida--; 
        } else break;
    } while(solansainamsinhtoida > 0);
    if(solansainamsinhtoida == 0){
        return;
    }

    // nhập tên phân xưởng
    do {
        cout << "(?) Nhập tên phân xưởng (A/B): ";
        cin >> tenphanxuong_tam;
        if(tenphanxuong_tam != "A" && tenphanxuong_tam != "B"){
            cout << "(!) Tên phân xưởng là 'A' hoặc 'B'" << endl;
            solansaitenphanxuongtoida--;
        } else break;
    } while(solansaitenphanxuongtoida > 0);
    if(solansaitenphanxuongtoida == 0){
        return;
    }

    congnhan.hoten = tencongnhan_tam;
    congnhan.namsinh = namsinhcongnhan_tam;
    congnhan.tenphanxuong = tenphanxuong_tam;
}

void XuatThongTinCongNhan(CongNhan congnhan){
    cout << left << setw(10) << congnhan.sothutu
                 << setw(20) << congnhan.hoten
                 << setw(20) << congnhan.namsinh 
                 << setw(20) << congnhan.tenphanxuong 
                 << endl;
}