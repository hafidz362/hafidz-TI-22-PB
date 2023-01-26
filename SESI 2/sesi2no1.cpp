#include <iostream>
using namespace std;

int main (){
  int a, b;
  char ulang;

  awal :
  cout << "Masukan Bilangan = ";
  cin >> a;
  b = a % 2;

  cout << "Nilai " << a << " % 2 adalah = " << b;
  cout << "\n\nIngin hitung lagi [Y/T] : ";
  cin >> ulang;
  cout << endl;

  if (ulang == 'Y' || ulang == 'y'){
    goto awal;
  }
   if (ulang == 'T' || ulang == 't'){
    goto akhir;
  }
  akhir :
  return 0;
}
 21  
no2v2.cpp
@@ -0,0 +1,21 @@
#include <iostream>
using namespace std;

int main ()
{
  int a, n;

  for (a=1; a<=19; a+=2){
    cout << a;
    if (a<19){
      cout << " + ";
    }
  }
    cout << " = ";
    n=(19+1)/2;
    n=n*n;
    cout<<n;

   getchar();

}