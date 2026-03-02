//library
#include <iostream>
using namespace std;

//deklarasi variable global 30.
int r;

//implementasi fungsi dan prosedur
void input(){
    cout << "masukan jari jari = ";
    cin >> r;
}
float luaslingkaran(float a){
    return 3.14159 * a * a;
}

void output(){
    cout << "hasilnya :" << luaslingkaran(r);
}

int main(){
    input();
    output();
    
}
//selesai