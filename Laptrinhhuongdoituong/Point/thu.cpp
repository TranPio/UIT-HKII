#include <bits/sdtc++.h>
using namespce std;
struct Con_nguoi{
    Con_nguoi(int t,float v_,float cc){
        tuoi=t;
        vong_mot=v1;
        chieu_cao=cc;
    }
int tuoi;
float vong_mot;
float chieu_cao;
};
int main(){
Con_nguoi thao(22,80,1.67);
cout<< &thao;
return 0;
}
