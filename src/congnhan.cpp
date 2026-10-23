#include "lib/congnhan.h"
#include "lib/cautrucdulieu.h"
#include "lib/hamphu.h"
#include "lib/thuvienchung.h"
#include <iomanip>

bool NhapThongTinCongNhan(CongNhan& congnhan){
    string tencongnhan_tam;
    int namsinhcongnhan_tam;
    string tenphanxuong_tam;

    // khai báo số lần nhập sai tối đa cho các thành phần
    int solansaitentoida = SOLANNHAPSAITOIDA;
    int solansainamsinhtoida = SOLANNHAPSAITOIDA;
    int solansaitenphanxuongtoida = SOLANNHAPSAITOIDA;

    // nhập tên
    do {
        cout << "  - (?) Nhập tên công nhân: ";
        getline(cin, tencongnhan_tam);
        if(tencongnhan_tam.empty()){
            solansaitentoida--;   
            if(solansaitentoida){                
                cout << "  (!) Không được để rỗng vui lòng nhập lại (" 
                     << solansaitentoida << "/" << SOLANNHAPSAITOIDA << ")" << endl;
            }     
        } else break;
    } while(solansaitentoida > 0);
    if(solansaitentoida == 0){
        return false;
    }

    // nhập năm sinh 
    do {
        cout << "  - (?) Nhập năm sinh công nhân: ";
        if(!XuLySoNguyen(namsinhcongnhan_tam)){
            cout << "  (!) Vui lòng nhập năm sinh bằng số !" << endl;
            solansainamsinhtoida--;
        }
        // quy định năm sinh công nhân ko bé hơn 1965 và lớn hơn (2026-18=2008)
        else if(namsinhcongnhan_tam < (LayNamHienTai() - 55)  || namsinhcongnhan_tam > (LayNamHienTai() - 18)){
            cout << "  (!) Năm sinh quy định nằm trong khoảng "
                 << LayNamHienTai() - 55 << " -> " 
                 << LayNamHienTai() - 18 << endl;
            solansainamsinhtoida--; 
        } else break;
        if(solansainamsinhtoida){
            cout << "  (!) Không được để rỗng vui lòng nhập lại ("
                 << solansainamsinhtoida << "/" << SOLANNHAPSAITOIDA << ")" << endl;
        }
    } while(solansainamsinhtoida > 0);
    if(solansainamsinhtoida == 0){
        return false;
    }

    // nhập tên phân xưởng
    do {
        cout << "  - (?) Nhập tên phân xưởng (A/B): ";
        cin >> tenphanxuong_tam;
        if(tenphanxuong_tam != "A" && tenphanxuong_tam != "B"){
            cout << "  (!) Tên phân xưởng là 'A' hoặc 'B'" << endl;
            solansaitenphanxuongtoida--;
            if(solansaitenphanxuongtoida){
                cout << "  (!) Không được để rỗng vui lòng nhập lại ("
                     << solansaitenphanxuongtoida << "/" << SOLANNHAPSAITOIDA << ")" << endl;
            }
        } else break;
    } while(solansaitenphanxuongtoida > 0);
    if(solansaitenphanxuongtoida == 0){
        return false;
    }

    congnhan.hoten = tencongnhan_tam;
    congnhan.namsinh = namsinhcongnhan_tam;
    congnhan.tenphanxuong = tenphanxuong_tam;
    return true;
}

void XuatThongTinCongNhan(CongNhan congnhan){
    cout << left << setw(10) << congnhan.sothutu
                 << setw(20) << congnhan.hoten
                 << setw(20) << congnhan.namsinh 
                 << setw(20) << congnhan.tenphanxuong 
                 << endl;
}