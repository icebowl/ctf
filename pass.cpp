// https://captureamerica.github.io/writeups/post/picoctf_2019_reverse/

#include <stdio.h>

char cipher[] = "jU5t_a_sna_3lpm13gf49_u_4_mar24c";
char buff[32];
	
int main( void )
{
	int i;

	for ( i = 0 ; i < 32 ; i++ ) {
		buff[i] = 'F';
	}
		
	for ( i = 0 ; i < 8 ; i++ ) {
		buff[i] = cipher[i];
	}

	for ( i = 8 ; i < 16 ; i++ ) {
		buff[i] = cipher[23 - i];
	}

	for ( i = 16 ; i < 32 ; i+=2 ) {
		buff[i] = cipher[46 - i];
	}

        for ( i = 31 ; i >= 17 ; i -=2 ) {
		buff[i] = cipher[i];
        }
	printf( "%s\n", buff );

	return 0;
}
