#include "lib/banner.h"

const string bannerphancong = R"( _____  _    _          _   _    _____ ____  _   _  _____ 
|  __ \| |  | |   /\   | \ | |  / ____/ __ \| \ | |/ ____|
| |__) | |__| |  /  \  |  \| | | |   | |  | |  \| | |  __ 
|  ___/|  __  | / /\ \ | . ` | | |   | |  | | . ` | | |_ |
| |    | |  | |/ ____ \| |\  | | |___| |__| | |\  | |__| |
|_|    |_|  |_/_/    \_\_| \_|  \_____\____/|_| \_|\_____|

                                        - GVHD: NGÔ XUÂN BÁCH
                                        - SVTH: NGUYỄN TRƯỜNG CHINH
                                        - ĐỀ TÀI: XÂY DỰNG CHƯƠNG TRÌNH PHÂN CÔNG TRỰC NHẬT
)";

const string bannerchinh = R"(┌───────────────────────────────┐
│       ĐỒ ÁN TIN HỌC HK1       │
│ GVHD: Ngô Xuân Bách           │
│ SVTH: Nguyễn Trường Chinh     │
│ Đề tài: Xây dựng chương trình │ 
│ phân công trực nhật           │
└───────────────────────────────┘
)";

const string bannertambiet = R"( _______       __  __   ____ _____ ______ _______ 
|__   __|/\   |  \/  | |  _ \_   _|  ____|__   __|
   | |  /  \  | \  / | | |_) || | | |__     | |   
   | | / /\ \ | |\/| | |  _ < | | |  __|    | |   
   | |/ ____ \| |  | | | |_) || |_| |____   | |   
   |_/_/    \_\_|  |_| |____/_____|______|  |_|   

                                        - GVHD: NGÔ XUÂN BÁCH
                                        - SVTH: NGUYỄN TRƯỜNG CHINH
                                        - ĐỀ TÀI: XÂY DỰNG CHƯƠNG TRÌNH PHÂN CÔNG TRỰC NHẬT
)";

const string menuchinh = R"([01] Nhập công nhân PX-A
[02] Nhập công nhân PX-B
[03] Tạo ngẫu nhiên công nhân cho PX-A và PX-B
[04] Xuất danh sách công nhân
[05] Tạo bảng phân công trực nhật 
[00] Thoát 
)";

const string menuphu5 = R"([01] In nhanh 
[02] Đếm từng ngày 
[00] Quay lại
)";

void InBannerHoacMenu(const string bannerhoacmenu){
    cout << bannerhoacmenu << endl;
}