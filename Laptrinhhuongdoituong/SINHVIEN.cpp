#include <iostream>
using namespace std;

class SinhVien {
    private:
        int maSV;
        string tenSV;
        float diemToan;
        float diemVan;
        float diemTB;
    
    public:
        void NhapThongTin() {
            cout<<"Nhap ma so sinh vien: "; cin>>maSV;
            cout<<"Nhap ten sinh vien: "; cin>>tenSV;
            cout<<"Nhap diem toan: "; cin>>diemToan;
            cout<<"Nhap diem van: "; cin>>diemVan;
            diemTB = (diemToan + diemVan) / 2;
        }

        void XuatThongTin() {
            cout<<maSV<<"\t"<<tenSV<<"\t"<<diemToan<<"\t"<<diemVan<<"\t"<<diemTB<<endl;
        }

        float LayDiemTB() {
            return diemTB;
        }
};

class Lop {
    private:
        int maLop;
        string tenLop;
        SinhVien *dsSV;
        int soSV;

    public:
        void NhapThongTin() {
            cout<<"Nhap ma so lop: "; cin>>maLop;
            cout<<"Nhap ten lop: "; cin>>tenLop;
            cout<<"Nhap so luong sinh vien: "; cin>>soSV;

            dsSV = new SinhVien[soSV];
            
            for(int i=0; i<soSV; i++) {
                dsSV[i].NhapThongTin();
            }
        }

        void XuatThongTin() {
            cout<<"Ma lop: "<<maLop<<"\tTen lop: "<<tenLop<<endl;
            cout<<"Ma SV\tTen SV\tDiem Toan\tDiem Van\tDiem TB"<<endl;
            for(int i=0; i<soSV; i++) {
                dsSV[i].XuatThongTin();
            }
        }

        int LaySoSV() {
            return soSV;
        }

        SinhVien* LayDSSV() {
            return dsSV;
        }
};

class Truong {
    private:
        int maTruong;
        string tenTruong;
        Lop *dsLop;
        int soLop;

    public:
        void NhapThongTin() {
            cout<<"Nhap ma truong: "; cin>>maTruong;
            cout<<"Nhap ten truong: "; cin>>tenTruong;
            cout<<"Nhap so lop: "; cin>>soLop;

            dsLop = new Lop[soLop];
            for(int i=0; i<soLop; i++) {
                dsLop[i].NhapThongTin();
            }
        }

        void XuatThongTin() {
            cout<<"Ma truong: "<<maTruong<<"\tTen truong: "<<tenTruong<<endl;
            for(int i=0; i<soLop; i++) {
                dsLop[i].XuatThongTin();
            }
        }

        void DanhSachDiemTBHon5() {
            cout<<"Danh sach sinh vien co diem trung binh > 5:"<<endl;
            cout<<"Ma SV\tTen SV\tDiem Toan\tDiem Van\tDiem TB"<<endl;

            for(int i=0; i<soLop; i++) {
                SinhVien* dsSV = dsLop[i].LayDSSV();
                int soSV = dsLop[i].LaySoSV();

                for(int j=0; j<soSV; j++) {
                    if(dsSV[j].LayDiemTB() > 5) {
                        dsSV[j].XuatThongTin();
                    }
                }
            }
        }

        void ThongKeDiemCaoNhat() {
            float maxDiemTB = 0;
            cout<<"Danh sach sinh vien co diem trung binh cao nhat:"<<endl;
            cout<<"Ma SV\tTen SV\tDiem Toan\tDiem Van\tDiem TB"<<endl;

            for(int i=0; i<soLop; i++) {
                SinhVien* dsSV = dsLop[i].LayDSSV();
                int soSV = dsLop[i].LaySoSV();

                for(int j=0; j<soSV; j++) {
                    if(dsSV[j].LayDiemTB() > maxDiemTB) {
                        maxDiemTB = dsSV[j].LayDiemTB();
                    }
                }
            }

            for(int i=0; i<soLop; i++) {
                SinhVien* dsSV = dsLop[i].LayDSSV();
                int soSV = dsLop[i].LaySoSV();

                for(int j=0; j<soSV; j++) {
                    if(dsSV[j].LayDiemTB() == maxDiemTB) {
                        dsSV[j].XuatThongTin();
                    }
                }
            }
        }
};

int main() {
    Truong truong;
    truong.NhapThongTin();
    truong.XuatThongTin();
    truong.DanhSachDiemTBHon5();
    truong.ThongKeDiemCaoNhat();
    return 0;
}