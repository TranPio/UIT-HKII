#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SinhVien {
public:
    string maSV;
    string tenSV;
    float diemTB;

    void nhap() {
        cout << "Nhap ma sinh vien: "; getline(cin, maSV);
        cout << "Nhap ten sinh vien: "; getline(cin, tenSV);
        cout << "Nhap diem trung binh: "; cin >> diemTB;
        cin.ignore();
    }

    void xuat() {
        cout << maSV << " | " << tenSV << " | " << diemTB << endl;
    }
};

class Lop {
public:
    string maLop;
    string tenLop;
    vector<SinhVien> danhSachSV;

    void nhap() {
        cout << "Nhap ma lop: "; getline(cin, maLop);
        cout << "Nhap ten lop: "; getline(cin, tenLop);
        
        int n;
        cout << "Nhap so luong sinh vien: "; cin >> n;
        cin.ignore();
        for (int i = 0; i < n; i++) {
            SinhVien sv;
            sv.nhap();
            danhSachSV.push_back(sv);
        }
    }

    void xuat() {
        cout << "Danh sach sinh vien cua lop " << tenLop << ":" << endl;
        for (int i = 0; i < danhSachSV.size(); i++) {
            danhSachSV[i].xuat();
        }
    }

    float diemTB_Lop() {
        float diemTB = 0;
        for (int i = 0; i < danhSachSV.size(); i++) {
            diemTB += danhSachSV[i].diemTB;
        }
        diemTB /= danhSachSV.size();
        return diemTB;
    }
};

class Truong {
public:
    string maTruong;
    string tenTruong;
    vector<Lop> danhSachLop;

    void nhap() {
        cout << "Nhap ma truong: "; getline(cin, maTruong);
        cout << "Nhap ten truong: "; getline(cin, tenTruong);
        
        int n;
        cout << "Nhap so luong lop: "; cin >> n;
        cin.ignore();
        for (int i = 0; i < n; i++) {
            Lop lop;
            lop.nhap();
            danhSachLop.push_back(lop);
        }
    }

    void xuat() {
        cout << "Truong " << tenTruong << ":" << endl;
        for (int i = 0; i < danhSachLop.size(); i++) {
            danhSachLop[i].xuat();
        }
    }

    void thongKeSinhVienDiemTB_CaoHon_5() {
        cout << "Danh sach sinh vien co diem trung binh cao hon 5:" << endl;
        for (int i = 0; i < danhSachLop.size(); i++) {
            for (int j = 0; j < danhSachLop[i].danhSachSV.size(); j++) {
                if (danhSachLop[i].danhSachSV[j].diemTB > 5) {
                    danhSachLop[i].danhSachSV[j].xuat();
                }
            }
        }
    }

    void thongKeDiemCaoNhatTruong() {
        float diemCaoNhat = 0;
        cout << "Danh sach sinh vien co diem cao nhat truong:" << endl;
        for (int i = 0; i < danhSachLop.size(); i++) {
            for (int j = 0; j < danhSachLop[i].danhSachSV.size(); j++) {
                if (danhSachLop[i].danhSachSV[j].diemTB > diemCaoNhat) {
                    diemCaoNhat = danhSachLop[i].danhSachSV[j].diemTB;
                }
            }
        }
        for (int i = 0; i < danhSachLop.size(); i++) {
            for (int j = 0; j < danhSachLop[i].danhSachSV.size(); j++) {
                if (danhSachLop[i].danhSachSV[j].diemTB == diemCaoNhat) {
                    danhSachLop[i].danhSachSV[j].xuat();
                }
            }
        }
    }
};

int main() {
    Truong truong;
    truong.nhap();
    truong.xuat();

    truong.thongKeSinhVienDiemTB_CaoHon_5();
    truong.thongKeDiemCaoNhatTruong();

    return 0;
}


/* #include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Sinhvien {
private:
    string ten;
    double diem_toan;
    double diem_van;

public:
    Sinhvien(string ten, double diem_toan, double diem_van):
            ten(ten), diem_toan(diem_toan), diem_van(diem_van) {}

    double diem_trung_binh() const {
        return (diem_toan + diem_van) / 2.0;
    }

    bool operator > (const Sinhvien& other) const {
        return diem_trung_binh() > other.diem_trung_binh();
    }

    friend ostream& operator << (ostream& os, const Sinhvien& sv) {
        os << sv.ten << ": " << sv.diem_trung_binh();
        return os;
    }
};

class Truong {
private:
    string ten;
    vector<Sinhvien> danh_sach_sinh_vien;

public:
    Truong(string ten): ten(ten) {}

    void them_sinh_vien(const Sinhvien& sv) {
        danh_sach_sinh_vien.push_back(sv);
    }

    void thong_ke_sinh_vien_diem_tb_lon_hon_5() const {
        cout << "Danh sach sinh vien co diem TB > 5:" << endl;
        for (const auto& sv : danh_sach_sinh_vien) {
            if (sv.diem_trung_binh() > 5.0) {
                cout << sv << endl;
            }
        }
    }

    void thong_ke_danh_sach_diem_cao_nhat() const {
        vector<Sinhvien> tmp_list = danh_sach_sinh_vien;
        sort(tmp_list.rbegin(), tmp_list.rend());
        cout << "Danh sach sinh vien co diem cao nhat la:" << endl;
        int i = 1;
        for (const auto& sv : tmp_list) {
            if (i > 5 || sv.diem_trung_binh() < tmp_list[0].diem_trung_binh()) {
                break;
            }
            cout << sv << endl;
            i++;
        }
    }
};

int main() {
    Truong truong("Truong dai hoc XYZ");

    // Them sinh vien
    truong.them_sinh_vien(Sinhvien("Nguyen Van A", 8.0, 7.5));
    truong.them_sinh_vien(Sinhvien("Tran Thi B", 7.5, 8.0));
    truong.them_sinh_vien(Sinhvien("Le Minh C", 6.5, 7.0));
    truong.them_sinh_vien(Sinhvien("Pham Thu D", 5.0, 6.5));
    truong.them_sinh_vien(Sinhvien("Vu Hoang E", 4.5, 5.5));
    truong.them_sinh_vien(Sinhvien("Do Quoc F", 8.0, 7.5));
    truong.them_sinh_vien(Sinhvien("Dang Lam G", 9.0, 8.5));

    // Thong ke sinh vien co diem trung binh > 5
    truong.thong_ke_sinh_vien_diem_tb_lon_hon_5();

    // Thong ke danh sach diem cao nhat
    truong.thong_ke_danh_sach_diem_cao_nhat();

    return 0;
}