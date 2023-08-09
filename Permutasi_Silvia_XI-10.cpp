#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int permutasi(int x,int y){
	int Nilai_permut,selisih;
	int faktorial =1;
	selisih = x-y;
	
	while (x>0){
		faktorial = faktorial * x;
		x=x-1;
	}
 Nilai_permut = faktorial/selisih;
 return(Nilai_permut);
}
int main(){
	int n,r;
	cout<< "Masukkan Nilai n: ";
	cin >> n;
	while (n<0){
		cout<< "Masukkan Nilai N kembali: ";
		cin >> n;
	}
	cout << "Masukkan nilai r: ";
	cin >> r;


cout<< "Nilai Permutasi " << r << " dari " << n << " adalah " <<permutasi(n,r) << endl;

system ("PAUSE");
return (0);
}
