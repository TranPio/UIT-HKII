#pragma once
class Sophuc
{
private:
    int thuc, ao;

public:
    Sophuc() {};
  Sophuc(int thuc = 0, int ao = 0);
  int getThuc() const;
  int getAo() const;
  void setThuc(int thuc);
  void setAo(int ao);
  void nhap();
  void xuat() const;
  Sophuc operator+(const Sophuc& sp) const;
  Sophuc operator-(const Sophuc& sp) const;
  Sophuc operator*(const Sophuc& sp) const;
  Sophuc operator/(const Sophuc& sp) const;
};


