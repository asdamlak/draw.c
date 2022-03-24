#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	char isim[5],soyisim[5];
	int secim;
	int sayi;
		printf("sansli cekilis uygulamasina hosgeldiniz!\nlutfen isminizi giriniz:");
		scanf("%s",&isim);
		
		printf("\nlutfen soyisminizi giriniz:");
		scanf("%s",&soyisim);
		
		printf("\nasagidaki islemler icin secim yapiniz\n[1]Sansli cekilis uygulamasi dene.\n[2]kullanici bilgilerini kontrol et.");
		scanf("%d", &secim);
		
	if(secim==1){
		printf("sansli cekilis uygulamasini sectiniz.bir ile bes arasinda bir sayi giriniz");
		scanf("%d",&sayi);
		srand(time(NULL));
	
	int randomsayi=1+rand()%5;
	
		if(sayi==randomsayi){
			printf("girdiginiz sayi:%d\ncekiliste cikan sayi:%d",sayi,randomsayi);
			printf("\nkazandiniz!!");
		}
		else{
				printf("girdiginiz sayi:%d\ncekiliste cikan sayi:%d",sayi,randomsayi);
			printf("\nah be... bir dahaki sefere:(");
		}
	 
} // secim==1i kapýyo

	 else if(secim==2){
	 	
		printf("isminiz: %s \nsoyisminiz :%s", isim, soyisim);
	}
	return 0;
}
