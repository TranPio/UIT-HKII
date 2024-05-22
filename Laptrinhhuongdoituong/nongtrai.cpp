#include<iostream>
#include<vector>
#include<string>
#include<random>
using namespace std;
class giasuc {
public:
    giasuc();
    ~giasuc();
    virtual string tiengkeu();
    virtual int chosua();
    virtual int sinhsan()const;
};
giasuc::giasuc(){}
giasuc::~giasuc(){}
string giasuc::tiengkeu(){
    return 0;
}
int giasuc::chosua(){
    return 0;
}
int giasuc::sinhsan()const{
    return 0;
}
class bo : public giasuc{
public:
    bo();
    ~bo();
    virtual string tiengkeu();
    virtual int chosua();
    virtual int sinhsan()const override;

};
bo::bo(){
}
bo::~bo(){

}
string bo::tiengkeu(){
    return "bo ";
}
int bo::chosua(){
    return rand()%21;
}
int bo::sinhsan()const{
        int dem=0;
        int sldv = rand()%5 +1;
        for (int i = 0; i<sldv;i++){
            dem++;
        }
        return dem;
}
class cuu:public giasuc{
public:
    cuu();
    ~cuu();
    virtual string tiengkeu();
    virtual int chosua()const;
    virtual int sinhsan()const override;
};
cuu::cuu(){}
cuu::~cuu(){}
string cuu::tiengkeu(){
    return "cuu ";
}
int cuu::chosua()const{
    return rand()%6;
}
int cuu::sinhsan()const{
      int dem=0;
        int sldv = rand()%6+1;
        for (int i = 0; i<sldv;i++){
           dem++;
        }
        return dem;
}
class de:public giasuc{
public:
    de();
    ~de();
    virtual string tiengkeu();
    virtual int chosua()const;
    virtual int sinhsan()const override;
};
de::de(){}
de::~de(){}
string de::tiengkeu(){
    return "de ";
}
int de::chosua()const{
    return rand()%11;
}
int de::sinhsan()const{
       int dem=0;
        int sldv = rand()%8+1;
        for (int i = 0; i<sldv;i++){
            dem++;
        }
        return dem;
}

class nongtrai{
protected:
    vector<giasuc*>dscv;
    int tongls;
public:
    nongtrai();
    ~nongtrai();
    void channuoi();
    void nhapgiasuc();
    void xuattiengkeu();
    void farming();
    void thongke();

};
nongtrai::nongtrai():tongls(0){}

nongtrai::~nongtrai() {
    for (int i = 0; i < dscv.size(); i++) {
        delete dscv[i];
    }
}
void nongtrai::nhapgiasuc()
{
    int slb = 0, slc = 0, sld = 0;
    cout<<"Nhap so luong bo: ";cin>>slb;
    cout<<"Nhap so luong cuu: ";cin>>slc;
    cout<<"Nhap so luong de: ";cin>>sld;
    for(int i = 0; i<slb;i++){
        dscv.push_back(new bo());
    }
    for(int i = 0; i<slc;i++){
        dscv.push_back(new cuu());
    }
    for(int i = 0;i<sld;i++){
        dscv.push_back(new de());
    }
}
void nongtrai::channuoi(){
    int ls = 0;
    int slgiasuc = dscv.size();
    for (int i = 0; i < slgiasuc; i++) {
        ls += dscv[i]->chosua();
                cout <<bo::sinhsan() <<endl;
                cout << cuu::sinhsan()<<endl;
            cout<<de::sinhsan()<<endl;
            }
        }
    }

    this->tongls += ls;
    int slbo = 0;
    int slcuu = 0;
    int slde = 0;

    for (int i = 0; i < dscv.size(); i++) {
        if (dynamic_cast<bo*>(dscv[i])) {
            slbo++;
        } else if (dynamic_cast<cuu*>(dscv[i])) {
            slcuu++;
        } else if (dynamic_cast<de*>(dscv[i])){
            slde++;
        }
    }

    cout << "So luong bo sau khi sinh san: " << slbo << endl;
    cout << "So luong cuu sau khi sinh san: " << slcuu << endl;
    cout << "So luong de sau khi sinh san: "<< slde <<endl;
}
void nongtrai::farming(){
    int N = 10;
    for(int i = 0;i<N;i++){
        channuoi();
    }
}
void nongtrai::xuattiengkeu() {
    int boCount = 0;
    int cuuCount = 0;
    int deCount = 0;

    for (int i = 0; i < dscv.size(); i++) {
        cout << dscv[i]->tiengkeu() << "\n";
        if (dynamic_cast<bo*>(dscv[i])) {
            boCount++;
        } else if (dynamic_cast<cuu*>(dscv[i])) {
            cuuCount++;
        } else if (dynamic_cast<de*>(dscv[i])){
            deCount++;
        }
    }

    cout << "So luong bo ban dau: " << boCount << endl;
    cout << "So luong cuu ban dau: " << cuuCount << endl;
    cout << "So luong de ban dau: " << deCount <<endl;
}
void nongtrai::thongke() {
    int tongbo = 0;
    int tongcuu = 0;
    int tongde = 0;

    for (int i = 0; i < dscv.size(); i++) {
        if (dynamic_cast<bo*>(dscv[i])) {
            tongbo++;
        } else if (dynamic_cast<cuu*>(dscv[i])) {
            tongcuu++;
        } else if (dynamic_cast<de*>(dscv[i])){
            tongde++;
        }
    }

    cout << "Tong so luong bo: " << tongbo << endl;
    cout << "Tong so luong cuu: " << tongcuu << endl;
    cout << "Tong so luong de: " << tongde << endl;
    cout << "Tong so lit sua: " << tongls << endl;
}
int main(){
    int tongls;
    nongtrai a;
    a.nhapgiasuc();
    cout<<"Tieng keu trong trang trai la: "<<endl;
    a.xuattiengkeu();
    a.channuoi();
    a.thongke();
    return 0;
}
