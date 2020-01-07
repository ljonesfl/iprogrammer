#include <stdio.h>

void info();
void help();
void greet( char *name );

int main( int argc, char *argv[] )
{
	for( int c = 0; c < 10; c++ )
	{
		printf( "Hello, world! %d\r\n", c );
	}
}

