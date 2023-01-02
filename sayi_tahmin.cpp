#include <iostream>

using namespace std; 

int main()
/*
{
	// Bir kullanýc bir kez sayý giriyor, diðer kullanýcý o sayýyý bulmaya çalýþýyor. Ýpuçlarý verilerek yönlendirme yapýlýyor.
	
	
	int hedef_say, tahmin_say;
	
	
	cout<<"bir hedef sayi belirleyin:"<<'\t';
	cin>>hedef_say;
	
	git:
	cout<<"sayiyi tahmin edin: "<<'\t';
	cin>>tahmin_say;
	
	if(tahmin_say < hedef_say){
	
	
		cout<<"Daha buyuk bir sayi girin.."<<'\n';
		
	}
	
	if(tahmin_say > hedef_say){
		
		cout<<"Daha kucuk bir sayi giriniz... "<<'\n';
		
		
	}
	
	if(tahmin_say != hedef_say){
	
		goto git;
		}
	else;{
		
		cout<<"Tebrikler! Sayiyi dogru tahmin ettiniz."<<endl;
	}
	 
	
}

*/


// Þimdi ise programýmýza sayaç ekleyeceðiz ve kullanýcýya tahmin etme hakký tanýmýþ olacaðýz, tahmin hakký bittiðinde program sonlandýrýlacak.

	
{

	int sayac = 0, H, T;

	cout<<"Tahmin edilecek hedef sayiyi girin: "<<'\t';
	cin>>H;

	while(sayac < 10){
		
		git:
		cout<<"Sayiyi tahmin edin: "<<'\t';
		cin>>T;
		sayac++;
	
	if(T > H){
		cout<<"Daha kucuk bir sayi giriniz.."<<'\n';
		
	}
	
	if(T < H){
		cout<<"Daha buyuk bir sayi giriniz.."<<'\n';
	}
	
	
	if(T == H){
	cout<<"Tebrikler sayiyi dogru tahmin ettiniz."<<endl;
	return 0;

}
	if(sayac > 10){
	cout<<"tahmin hakkiniz sona ermistir, program sonlandiriliyor...."<<endl;
	return 0;
	}		
		
	if(T != H){
	goto git;
	}
	

	
	

		
}	

		
	
	
}



