#include "Sanpham.h"

Sanpham::Sanpham()
{
    
}

void Sanpham::Nhap()
{
    cin.ignore();
    cout << "\n\t Nhap vao ma: ";
    getline(cin, Masanpham);
    cout << "\n\t Nhap vao gioi tinh(1- Nam, 2- Nu): ";
    cin >> Gioitinh;
    if (Gioitinh == 1) {
        gt = "Nam";
    }
    else {
        gt = "Nu";
    }
    cout << "\n\t Nhap vao size(1- Size S, 2- Size M, 3- Size L): ";
    cin >> Size;
    if (Size == 1) {
        size = "Size S";
    }
    else if (Size == 2) {
        size = "Size M";
    }
    else {
        size = "Size L";
    }
    cin.ignore();
    cout << "\n\t Nhap vao ten san pham: ";
    getline(cin, Tensanpham);
    cout << "\n\t Nhap vao mau(LUU Y: NHAP VAO TRANG,DEN,XANH,VANG,DO,.....): ";
    getline(cin, Mau);
    cout << "\n\t Nhap vao gia san pham(LUU Y:NHAP VAO 1 CON SO): ";
    cin >> Dongia;
}

void Sanpham::Xuat(ostream& os) const
{
    os << Masanpham <<" "<< Tensanpham << " "<<Loai<<" "<<gt<<" "<<size<<" "<<Mau<<" " <<Dongia<< " " << TC << " ";

}
