#include <iostream>
using namespace std;

//rekursif
int fibonacci(int n) {
  if (n == 0 || n ==1){
    return n;
  } else {
    return (fibonacci(n-1) + fibonacci(n-2));
  }
}
int main() {
  //inisialisasi variabel
  int n, i, j = 0;
  //mendeklarasikan variable
  //input variable
  cout << "Masukkan batas jumlah bilangan fibonacci: ";
  cin >> n;
  //hasil
  cout << "Hasil bilangan fibonacci: \n";
  //melakukan perulangan sebanyak n dan menginputkan j kedalam fibonacci
  for (i = 1; i <= n; i++){
    cout << "fibonacci ke-"<< i <<": " << fibonacci(j) << endl;
    j++;
  }
  return 0;
}
