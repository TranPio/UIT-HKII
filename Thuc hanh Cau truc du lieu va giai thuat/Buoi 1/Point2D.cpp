#include <bits/stdc++.h>
using namespace std;
struct Point {
	int x;
	int y;
};
bool SSPoint(Point a, Point b) {
	if (a.x < b.x) {
		return true;
	}
	else if (a.x == b.x) {
		return a.y > b.y;
	}
	else return false;
}
int main() {
	int n;
	cin >> n;
	Point a[100000];
	for (int i = 0; i < n; i++) {
		cin >> a[i].x >> a[i].y;
	}
 for(int i=0;i<n-1;i++) {
     for(int j=0;j<n-i-1;j++) {
         if(SSPoint(a[j+1],a[j])) {
             swap(a[j],a[j+1]);
         }
     }
 }
	for (int i = 0; i < n; i++) {
		cout << a[i].x << " " << a[i].y << endl;
	} return 0;
}
/*#include <iostream>
#include <algorithm>
using namespace std;
struct Point {
    int x, y;
};
    if(a.x != b.x)
        return a.x < b.x;
    else
        return a.y > b.y;
}

int main() {
    int n;
    cin >> n;

    Point arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i].x >> arr[i].y;
    }

    sort(arr, arr+n, comparePoints);


    for(int i=0; i<n; i++) {
        cout << arr[i].x << " " << arr[i].y << endl;
    }

    return 0;
}*/
/*
#include<bits/stdc+++.h>

using namespace std;

struct Point { int x; int y; };

bool compare(Point a, Point b) { if (a.x < b.x) { return true; } else if (a.x == b.x) { return a.y > b.y; } else { return false; } }

int main() { int n; cin >> n; Point p[n]; 
for (int i = 0; i < n; i++) {
 cin >> p[i].x >> p[i].y; } 
 sort(p, p + n, compare); 
for (int i = 0; i < n; i++) { 
cout << p[i].x << " " << p[i].y << endl; } return 0; }


#include<bits/stdc++.h>

using namespace std;

struct Point { int x; int y; };

bool compare(Point a, Point b) { if (a.x < b.x) { return true; } else if (a.x == b.x) { return a.y > b.y; } else { return false; } }

int main() { int n; cin >> n; Point p[n]; 
for (int i = 0; i < n; i++) {
 cin >> p[i].x >> p[i].y; } 
 for(int i=0;i<n-1;i++) {
     for(int j=0;j<n-i-1;j++) {
         if(compare(p[j+1],p[j])) {
             swap(p[j],p[j+1]);
         }
     }
 }
for (int i = 0; i < n; i++) { 
cout << p[i].x << " " << p[i].y << endl; } return 0; } 

Ch�ng ta ch? c?n thay �o?n sort trong �o?n code ban �?u th�nh bubble sort, b?ng c�ch s? d?ng 2 v?ng l?p for �? th?c hi?n vi?c swap c�c ph?n t? c?n s?p x?p.
*/