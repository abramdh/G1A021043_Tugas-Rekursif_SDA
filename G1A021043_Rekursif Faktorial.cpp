#include <iostream>

using namespace std;

int Faktorial(int input) {
  if(input > 1)
    return input * Faktorial(input - 1);
  else
    return 1;
}

int main()
{  int angka;
  cout<<"+++++++++++++++++++++++++++"<<endl;
  cout << "Masukkan angka: ";
  
  cin >> angka;

  cout << angka << "! = " << Faktorial(angka);
  cout << endl;

  return 0;
}
