#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class sks {
  
  public:
  char nama[50], nim[20];
  int bayar, disc, disc2, totalsks;
void input_data_mahasiswa();
void input_sks();
void total_bayar();
void diskon_bayar();
};

  void sks::input_data_mahasiswa()
  {
    cout<< "Nama Mahasiswa : ";cin>>nama;
    cout<< " Nim Mahasiswa : ";cin>>nim;
  }
  void sks::input_sks()
  {
    cout<<" Jumlah SKS : ";cin>>totalsks;
    }
  void sks::total_bayar(){
    bayar=totalsks*120000;
  }
  void sks::diskon_bayar()
  {
    if(totalsks==8){
    disc=0.1*bayar;
    cout<<"Total bayar : "<<disc<<endl;
      }
    else if(totalsks==10){
  disc2=0.05*disc;
  cout<<" Total bayar setelah diskon 10% + 5% : "<<disc2<<endl;
  }
  
};
int main(){
  sks kucing;
  kucing.input_data_mahasiswa();
  kucing.input_sks();
  kucing.total_bayar();
  kucing.diskon_bayar();

}


