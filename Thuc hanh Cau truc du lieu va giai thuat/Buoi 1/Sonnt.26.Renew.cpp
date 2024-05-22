
#include <iostream>
#include <algorithm>
using namespace std;

long long a, k, b, m, n;

// Hàm kiểm tra xem sau day ngay do co the chặt hết cây khong
bool check(long long day) {
    long long numTrees = 0; // số cây còn lại sau day ngày
    // tính số cây còn lại sau khi đội I đã chặt hạ trong day ngày
    if (day >= k) {
        numTrees += (day / k) * (a * k - k * (k - 1) / 2);
        // a*k là số cây chặt hạ mỗi ngày, k*(k-1)/2 là số cây đội I bỏ qua do nghỉ bảo dưỡng
        numTrees += max(0LL, n - (day / k) * k) * a; // xác định số cây đội I bắt buộc phải chặt hạ sau cùng
    }
    else {
        numTrees += a * n; // đội I chỉ làm việc trong ít hơn k ngày, nên sẽ chặt hết tất cả cây trong thành phố
    }
    // tính số cây còn lại sau khi đội II đã chặt hạ trong day ngày
    if (day >= m) {
        numTrees += (day / m) * (b * m - m * (m - 1) / 2);
        numTrees += max(0LL, n - (day / m) * m) * b;
    }
    else {
        numTrees += b * n;
    }
    return numTrees <= 0; // nếu số cây còn lại là 0 thì trả về true, ngược lại trả về false
}

int main() {
    cin >> a >> k >> b >> m >> n;
    long long left = 0, right = 1e18; // khởi tạo khoảng giá trị cho binary search
    while (left < right) { // binary search
        long long mid = (left + right) / 2;
        if (check(mid)) {
            right = mid;
        }
        else {
            left = mid + 1;
        }
    }
    cout << left << endl; // kết quả
    return 0;
}

int main() {
    cin >> a >> k >> b >> m >> n;
    long long left = 0, right = 1e18; // khởi tạo khoảng giá trị cho binary search
    while (left < right) { // binary search
        long long mid = (left + right) / 2;
        if (check(mid)) {
            right = mid;
        }
        else {
            left = mid + 1;
        }
    }
    cout << left << endl; // kết quả
    return 0;
}