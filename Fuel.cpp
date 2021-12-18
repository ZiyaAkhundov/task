#include <iostream>
using namespace std;
int main(int argc, char*argv[]){
    int benzin,miqdar;
    float qiymet;
    cout<<"Benzinin markasini daxil edin:";
    cin>>benzin;
    switch(benzin){
        case 95:
        cout<<"95 markali benzini secdiniz"<<endl;
        cout<<"Benzinin miqdarini daxil edin";
        cin>>miqdar;
        qiymet=miqdar*1.60;
        cout<<"umumi qiymet:"<<qiymet;
        break;
    
    
    case 92:
        cout<<"92 markali benzini secdiniz"<<endl;
        cout<<"Benzinin miqdarini daxil edin";
        cin>>miqdar;
        qiymet=miqdar*1.00;
        cout<<"umumi qiymet:"<<qiymet;
        break;

        case 98:
        cout<<"98 markali benzini secdiniz"<<endl;
        cout<<"Benzinin miqdarini daxil edin";
        cin>>miqdar;
        qiymet=miqdar*1.80;
        cout<<"umumi qiymet:"<<qiymet;
        break;
    
    default:
    cout<<"Zehmet olmasa benzin secin";

     }
     return 0;
}
