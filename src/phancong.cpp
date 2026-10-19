#include "lib/phancong.h"
#include "lib/cautrucdulieu.h"
#include "lib/congnhan.h"

int TinhUCLN(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int TinhBCNN(int a, int b){
    return a / TinhUCLN(a, b) * b;
}

/*
// Nếu A và B có UCLN là 1 
// A: 1 2 3 4 
// B: 1 2 3 4 5
ngày 1:  1:1 -
ngày 2:  2:2
ngày 3:  3:3
ngày 4:  4:4
ngày 5:  1:5 -
ngày 6:  2:1
ngày 7:  3:2
ngày 8:  4:3
ngày 9:  1:4 -
ngày 10: 2:5
ngày 11: 3:1
ngày 12: 4:2
ngày 13: 1:3 - 
ngày 14: 2:4
ngày 15: 3:5
ngày 16: 4:1
ngày 17: 1:2 -
ngày 18: 2:3
ngày 19: 3:4
ngày 20: 4:5
ngày 21: 1:1 -> quay về ban đầu 
Vậy chu kỳ là 21 - 1 = 20 ngày (4 x 5 = 20 hợp lý)

// Nếu A và B có UCLN là 2
// A: 1 2 
// B: 1 2 3 4 
ngày 1:  1:1 -
ngày 2:  2:2
ngày 3:  1:3 -
ngày 4:  2:4 
ngày 5:  1:1 -> quay về ban đầu 
Vậy chu kỳ là 5 - 1 = 4 ngày (2 x 4 = 8 không hợp lý)

Từ đó ta suy ra
-> Nếu có UCLN là 1 thì sẽ phân công được theo yều của đề bài
    -> Vì thế số người A x số người B sẽ ra số ngày chu kỳ là BCNN   
-> Nếu có UCLN lớn hơn 1 thì sẽ không phân công được 

=> UCLN dùng để xác định phân công được hay không
=> BCNN dùng để tìm ra số ngày chu kỳ 
*/

void PhanCong(DanhSachVong& danhsachvongA, DanhSachVong& danhsachvongB){
    int ucln = TinhUCLN(danhsachvongA.soluong, danhsachvongB.soluong);
    int chuky = TinhBCNN(danhsachvongA.soluong, danhsachvongB.soluong);
    cout << "(*) UCLN là " << ucln;
    if(ucln > 1){
        cout << " > 1" << endl;
        cout << "(!) Không thể lập bảng phân công !" << endl;
        return;
    } 

    cout << " = 1" << endl;
    cout << "(*) Có thể lập bảng phân công theo chu kỳ " << chuky << " ngày !\n" << endl;

    NodeVongPtr congnhanA = danhsachvongA.first;
    NodeVongPtr congnhanB = danhsachvongB.first;
    cout << left << setw(15) << "Ngày"
                 << setw(25) << "Công nhân PX-A"
                 << setw(10) << "Công nhân PX-B"
                 << endl;
    cout << string(60, '-') << endl;
    for (int ngay = 1; ngay <= chuky; ngay++) {
        XuatThongTinPhanCong(ngay, congnhanA, congnhanB);
        congnhanA = congnhanA->link;  
        congnhanB = congnhanB->link;
    }
    cout << string(60, '-') << endl;
    XuatThongTinPhanCong(chuky+1, congnhanA, congnhanB);
    cout << "\nChu kỳ " << chuky << " ngày vì sang ngày " << chuky+1 << " đã quay lại ban đầu" << endl;
}

void XuatThongTinPhanCong(int ngay, NodeVongPtr congnhanA, NodeVongPtr congnhanB){
    cout << left << setw(15) << "Ngày" + to_string(ngay)
                 << setw(25) << congnhanA->data.hoten
                 << setw(10) << congnhanB->data.hoten
                 << endl;
}