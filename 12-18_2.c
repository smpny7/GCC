#include <stdio.h>

int main( void ){
	char ss[80], *p;
	int i,j;
	scanf( "%s", ss );
	p = ss;
	for( i=0; ss[i]!='\0'; i++ );
	p = p + i - 1;
	for( j=0; j<i; j++ ) {
		printf( "%c", *p--);
	}
	return 0;
}