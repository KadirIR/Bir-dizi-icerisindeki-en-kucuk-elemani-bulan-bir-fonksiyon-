#include <stdio.h>
#include <stdlib.h>

int main()
{
	int d; // 1 saniye sürer
    int dizi[10]; // 1 saniye sürer
    int ks; //1 saniye sürer
    int es; //1 saniye sürer
    printf("Kac elemanli bir dizi olusmak istiyorsunuz?\n"); //1 saniye sürer
	scanf("%d",&es); //1 saniye
	
    for( d=0; d<es; d++) // n+1 saniye sürer
    {
        printf("Lutfen %d'inci elemani giriniz: ",d+1); // n saniye sürer
        scanf("%d",&dizi[d]); // n saniye sürer
        printf("\n"); // n saniye sürer
    }

    ks=dizi[0]; //1 saniye sürer

    for( d=1; d<es; d++) // n+1 saniye sürer
    {
        if(ks>dizi[d]) // n saniye sürer
        {
            ks=dizi[d]; // n saniye sürer
        }
    }
    printf("Dizinin En Kucuk Elemani %d 'dir.\n\n",ks); //1 saniye sürer

	return 0; //1 saniye sürer

}
//T(n)= 1+1+1+1+1+1+(n+1)+n+n+n+1+(n+1)+n+n+1+1=7n+11
