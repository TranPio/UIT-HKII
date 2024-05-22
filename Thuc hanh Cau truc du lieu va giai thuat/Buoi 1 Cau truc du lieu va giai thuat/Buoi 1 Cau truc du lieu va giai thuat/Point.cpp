#include <iostream>
#include <vector>
using namespace std;

struct Point {
    int x;
    int y;
};

bool cmp(Point a, Point b) {
    if (a.x != b.x) {
        return a.x < b.x;
    }
    return a.y > b.y;
}

int main() {
    int n;
    cin >> n;

    vector<Point> points(n);

    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    qsort(points.begin(), points.end(), cmp);

    for (int i = 0; i < n; i++) {
        cout << points[i].x << " " << points[i].y << endl;
    }

    return 0;
}
