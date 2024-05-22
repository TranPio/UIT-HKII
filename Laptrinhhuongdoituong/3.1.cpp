#include <iostream>

#include <bits/stdc++.h>

using namespace std;

class Point {
    private:
        int x, y;
    public:
        // hàm thiết lập
        Point() {
            x = 0;
            y = 0;
        }
        
        Point(int _x, int _y) {
            x = _x;
            y = _y;
        }
        
        // hàm thiết lập khác
        void setPoint(int _x, int _y) {
            x = _x;
            y = _y;
        }  
        
        // hàm lấy hoành độ
        int getX() {
            return x;
        }
        
        // hàm lấy tung độ
        int getY() {
            return y;
        }
        
        // hàm thay đổi hoành độ
        void setX(int _x) {
            x = _x;
        }
        
        // hàm thay đổi tung độ
        void setY(int _y) {
            y = _y;
        }
        
        // hàm tịnh tiến
        void move(int dx, int dy) {
            x += dx;
            y += dy;
        }
        
        // hàm nhập
        void input() {
            cout << "Nhap hoanh do: ";
            cin >> x;
            cout << "Nhap tung do: ";
            cin >> y;
        }
        
        // hàm xuất
        void output() {
            cout << "(" << x << ", " << y << ")" << endl;
        }
        
};

int main() {
    Point A(100, 200); // tạo một điểm A với hoành độ 100 và tung độ 200
    
    A.move(50, -50); // tịnh tiến điểm A sang phải 50 đơn vị và lên trên 50 đơn vị
    A.output(); // hiển thị tọa độ của điểm A
    return 0;
}