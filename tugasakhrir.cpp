#include<iostream>
using namespace std;

int main(){
    
    int baris, kolom, pilih, ganjil, genap, invalid;
    string lanjut;
    do{
    cout<<endl;
    cout<<endl;
    system("cls");
    cout<<"masukan baris: ";
    cin>>baris;
    cout<<"masukan kolom: ";
    cin>>kolom;

    int aray[baris][kolom];
    int larik[baris][kolom];

    //code ini untukk memasukan nilai ke variabel aray
    for(int d = 0; d < baris; d++){
        for(int c = 0; c < kolom; c++){
            cout<<"masukan nilai aray: ";
            cin>>aray[d][c];
        }
    }
    //========================================================

    cout<<"==============================="<<endl;

    //code ini untuk memasukan nilai ke variabel larik
    for(int i = 0; i < baris; i++){
        for(int r = 0; r < kolom; r++){
            cout<<"masukan nilai larik: ";
            cin>>larik[i][r];
        }
    }
   //==========================================================
   cout<<endl;

   //untuk menanpilkan nilai yang sebelumnya di input di variabel aray
    cout<<"==========|array|=========="<<endl;
    for(int a=0; a < baris; a++){
        for(int b = 0; b < kolom; b++){
            cout<<"| "<<aray[a][b]<<" |";
        }cout<<endl;
    }
   //==========================================================
    cout<<endl;

    //untuk menampilkan nilai yang sebelumnya di input dari variabel larik
    cout<<"==========|larik|=========="<<endl;
    for(int f = 0; f < baris; f++){
        for(int g =0; g < kolom; g++){
            cout<<"| "<<larik[f][g]<<" |";
        }cout<<endl;
    }
    //==========================================================
  
    do{//= mengulang syntax yang kita buat
    cout<<endl;

    cout<<"pilih operator: "<<endl;
    cout<<"(1) penjumlahan"<<endl<<"(2) pengurangan"<<endl<<"(3) perkalian"<<endl<<"(4) pembagian"<<endl<<"(5) modulus"<<endl;
    cout<<"pilihan anda: ";
    cin>>pilih;
    cout<<endl;
    if(pilih == 1){
    cout<<"============|penjumlahan|============"<<endl;
    for(int j = 0; j< baris; j++){
        for(int k = 0; k< kolom; k++){
        cout<<" | "<<aray[j][k] + larik[j][k]<<" | ";
            
        }cout<<endl;
    }
    }

    else if(pilih == 2){
         cout<<"============|pengurangan|============"<<endl;
         for(int j = 0; j< baris; j++){
        for(int k = 0; k< kolom; k++){
        cout<<" | "<<aray[j][k] - larik[j][k]<<" | ";
            
        }cout<<endl;
    }
}

    else if(pilih == 3){
         cout<<"============|perkalian|============"<<endl;
         for(int j = 0; j< baris; j++){
        for(int k = 0; k< kolom; k++){
        cout<<" | "<<aray[j][k] * larik[j][k]<<" | ";
            
        }cout<<endl;
    }
}

    else if(pilih == 4){
         cout<<"============|pembagian|============"<<endl;
         for(int j = 0; j< baris; j++){
        for(int k = 0; k< kolom; k++){
        cout<<" | "<<aray[j][k] / larik[j][k]<<" | ";
            
        }cout<<endl;
    }

    }

    else if(pilih == 5){
        cout<<"============|modulus|============"<<endl;
        for(int j = 0; j< baris; j++){
        for(int k = 0; k< kolom; k++){
        if(larik[j][k] !=2){
           cout<< "| "<<"eror"<<" |";
        }
        else if(aray[j][k] % larik[j][k] == 1){
           cout<<"| "<<"ganjil"<<" |";
        }
        else if(aray[j][k] % larik[j][k] == 0){
            cout<<"| "<<"genap"<<" |";
         }
        
        }cout<<endl;
    }
    }
    else{
        cout<<"data tidak tersedia!"<<endl;
    }
    cout<<endl;
    cout<<"ulang pemilihan opertor? <y/n>: ";
    cin>>lanjut;

    }//akhir dari code: do
    while(lanjut == "y");
    if(lanjut == "n"){
        cout<<"";
    }

    else if(lanjut !="y"){
        cout<<"inputan tidak tersedia";
    }

    else if(lanjut !="n"){
        cout<<"inputan tidak tersedia";
    }
  
    
    cout<<endl;
    cout<<"ingin input ulang dari awal? <y/n>: ";
    cin>>lanjut;
    } 
    
    while(lanjut == "y");
    if(lanjut == "n"){
        cout<<"program selesai!";
    }

    else if(lanjut !="y"){
        cout<<"inputan tidak tersedia";
    }

    else if(lanjut !="n"){
        cout<<"inputan tidak tersedia";
    }

   /* cout<<endl;
     cout<<"program selesai!!";*/
}
