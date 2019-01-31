#include <iostream>

using namespace std;

int main()
{
   int a=0;
   int max=0;

  do{
    cout<<"Masukan Bilangan:";
    cin>> a;
      if (a>max)
        max=a;

    }
    while (a!=0);


    cout<<"Nilai Terbesar :"<< max;
}
