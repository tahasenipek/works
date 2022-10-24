#include<stdio.h>

int bolme ( int bolunen, int bolen, int *kalan )
{
	*kalan = bolunen % bolen;
 		return bolunen / bolen;
}
int main( void ) {
	int bolunen, bolen;
	int bolum, kalan;
	bolunen = 13; bolen = 4;
	bolum = bolme( bolunen, bolen, &kalan);
	printf( "Bölüm: %d Kalan: %d\n", bolum, kalan); 
	return 0;
}