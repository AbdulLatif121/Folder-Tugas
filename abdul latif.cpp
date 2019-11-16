#include<iostream>
using namespace std;
int main (){
int menu;
cout<<"pilih menu"<<endl;
cout<<"1 tarik dana"<<endl;
cout<<"2 transfer dana"<<endl;
cout<<"3 lihat saldo"<<endl;
cout<<"masukan pilihan anda:";
cin>>menu;
if(menu==1){
cout<<"anda memeilih tarik dana";
}
else if (menu==2){
cout<<"anda memilih transfer dana";
}
else if(menu==3){
	cout<<"lihat saldo";
}
else{
cout<<"pilihat tidak ada";
} 
return 0;}

