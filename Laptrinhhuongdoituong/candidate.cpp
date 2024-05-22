#include <iostream>
#include <string>
using namespace std;

class Candidate {
    private:
        string id;
        string name;
        string dob;
        float math;
        float literature;
        float english;
    public:
        void input(){
            cout << "Nhap vao ma thi sinh: ";
            getline(cin, id);
            cout << "Nhap vao ten thi sinh: ";
            getline(cin, name);
            cout << "Nhap vao ngay thang nam sinh: ";
            getline(cin, dob);
            cout << "Nhap vao diem Toan: ";
            cin >> math;
            cout << "Nhap vao diem Van: ";
            cin >> literature;
            cout << "Nhap vao diem Anh: ";
            cin >> english;
        }
        float getTotalScore(){
            return math + literature + english;
        }
        void display(){
            cout << "Thong tin thi sinh: " << endl;
            cout << "Ma: " << id << endl;
            cout << "Ten: " << name << endl;
            cout << "Ngay thang nam sinh: " << dob << endl;
            cout << "Diem Toan: " << math << endl;
            cout << "Diem Van: " << literature << endl;
            cout << "Diem Anh: " << english << endl;
        }
};

class TestCandidate {
    private:
        int n;
        Candidate *candidates;
    public:
        void input(){
            cout << "Nhap so thi sinh: ";
            cin >> n;
            cin.ignore();
            candidates = new Candidate[n];
            for(int i=0; i<n; i++){
                cout << "Nhap thong tin thi sinh thu " << i+1 << endl;
                candidates[i].input();
            }
        }
        void display(){
            cout << "Danh sach thi sinh co tong diem >= 15: " << endl;
            for(int i=0; i<n; i++){
                if(candidates[i].getTotalScore() >= 15){
                    cout << "Thi sinh thu " << i+1 << endl;
                    candidates[i].display();
                }
            }
        }
};

int main(){
    TestCandidate test;
    test.input();
    test.display();
    return 0;
}