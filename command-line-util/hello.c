#include <stdio.h>
#include <string.h>

void info();
void help();
void greet( char *name );

int main( int argc, char *argv[] )
{
	if( argc == 1 )
	{
		info();
	}

	if( argc == 2 )
	{
		if( strcmp( argv[ 1 ], "-h" ) == 0 )
		{
			help();
		}
		else
		{
			greet( argv[ 1 ] );
		}
	}
}

void info()
{
	printf( "Hello util. Type hello -h for more information.\r\n" );
}

void help()
{
	printf( "Type: hello {name} for a proper greeting.\r\n" );
}

void greet( char *name )
{
	printf( "Why hello there %s\r\n", name );
}
