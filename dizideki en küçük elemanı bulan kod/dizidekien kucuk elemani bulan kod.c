#include <stdio.h>
#include <stdlib.h>

int main()
{
	int d; // 1 saniye s�rer
    int dizi[10]; // 1 saniye s�rer
    int ks; //1 saniye s�rer
    int es; //1 saniye s�rer
    printf("Kac elemanli bir dizi olusmak istiyorsunuz?\n"); //1 saniye s�rer
	scanf("%d",&es); //1 saniye
	
    for( d=0; d<es; d++) // n+1 saniye s�rer
    {
        printf("Lutfen %d'inci elemani giriniz: ",d+1); // n saniye s�rer
        scanf("%d",&dizi[d]); // n saniye s�rer
        printf("\n"); // n saniye s�rer
    }

    ks=dizi[0]; //1 saniye s�rer

    for( d=1; d<es; d++) // n+1 saniye s�rer
    {
        if(ks>dizi[d]) // n saniye s�rer
        {
            ks=dizi[d]; // n saniye s�rer
        }
    }
    printf("Dizinin En Kucuk Elemani %d 'dir.\n\n",ks); //1 saniye s�rer

	return 0; //1 saniye s�rer

}
//T(n)= 1+1+1+1+1+1+(n+1)+n+n+n+1+(n+1)+n+n+1+1=7n+11
