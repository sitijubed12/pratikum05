# pratikum05


# Latihan 1 (Mencari nilai terbesar dari  sejumlah bilangan yang diinputkan dengan fungsi loop Do While)

```
1.Alur algoritmanya
	-Mendeklarasikan int a sebagai nilai input.
	-mendeklrasikan int max sebagai nilai tertetinggi.
	-memasukan nilai a
	-membandingkan nilai a dengan max jika a < max max = a
```

#Contoh

```C++
	
-membandingkan inputan nilai a tidak sama dengan nilai 0 while(a!=0)
	
			if (a>max)
			max=a;
```

```C++
-mencetak nilai tertinggi cout<< max;

			do {
			cout<<"masukan angka:";
    			cin>> a;
      			if (a>max)
        		max=a;
			    }
    			while (a!=0);
```

-Di Bawah Ini Kode Lengkap Nya

```c++
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
```

#Di Bawah Ini Adalah Flowchart nya
![img](https://github.com/fahmieka21/pratikum05/blob/master/Flowchart1.png)

#Di Bawah Ini Adalah Hasil nya
![img](https://github.com/fahmieka21/pratikum05/blob/master/latihan1.png)

# Latihan 2 (Penggunaan Program OR Yang Menentukan Penjumlahan Bilangan Benar atau Salah)

```
1.Alur Algoritmanya
	-Mendeklarasikan int a,b, dan c
	-Mendeklarasikan variabel a,b, dan c sebagai nilai input
	-Memasukan nilai inputan a,b,c
	-Membandingkan penjumlahan nilai a + b =c dan a+c=b dan c+b=a
```

#Contoh

```c++
	if( (a+b==c) || (a+c==b) )
		{
    		cout<<"BENAR";
		}
		else if((b+c==a))
		{
    		cout<<"BENAR";
		}
		else
    	{
    	cout<< "SALAH";
```

-Di Bawah Ini Kode Lengkap Nya

```C++
int main()
{
    int a,b,c;

    cout<<"Nilai ke 1:";
    cin>>a;
    cout<<"Nilai ke 2:";
    cin>>b;
    cout<<"Nilai ke 3:";
    cin>>c;

    if( (a+b==c) || (a+c==b) )
    {
        cout<<"BENAR";
    }
    else if((b+c==a))
    {
        cout<<"BENAR";
    }
    else
        {
        cout<< "SALAH";
        }
}

```

#Di Bawah Ini Adalah Flowchart nya
![img](https://github.com/fahmieka21/pratikum05/blob/master/Flowchart2.png)

#Di Bawah Ini Adalah Hasil nya
![img](https://github.com/fahmieka21/pratikum05/blob/master/latihan2.1.png)
![img](https://github.com/fahmieka21/pratikum05/blob/master/latihan2.2.png)
![img](https://github.com/fahmieka21/pratikum05/blob/master/latihan2.3.png)
![img](https://github.com/fahmieka21/pratikum05/blob/master/latihan2.4.png)


Terimakasih Jangan Lupa Di Follow :D




	
	