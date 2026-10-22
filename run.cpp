#include <iostream>
#include <filesystem>

using namespace std;
using namespace filesystem;

const string thumuc_filethucthi = "bin";
const string ten_filethucthi = "main.exe";
const string duongdan_filethucthi = thumuc_filethucthi + "\\" + ten_filethucthi;

int main(){
    if(!exists(thumuc_filethucthi)){
        cout << "Chưa có thư mục " << thumuc_filethucthi << " đang tạo... ";
        create_directories(thumuc_filethucthi);
    } else {
        cout << "Đã tồn tại thư mục " << thumuc_filethucthi << endl;
    }

    string lenhbiendich = "g++ src\\main.cpp "  
                          "src\\cautrucdulieu.cpp "
                          "src\\congnhan.cpp "
                          "src\\hamphu.cpp "
                          "src\\phancong.cpp "
                          "src\\banner.cpp "
                          "src\\taongaunhien.cpp "
                          "src\\mau.cpp "
                          "-o " +
                          duongdan_filethucthi;
    system(lenhbiendich.c_str());
    system((duongdan_filethucthi).c_str());
    return 0;
}