#include <stdio.h>
#include <string.h>

void info();
void help();
void greet( char *name );

int main( int argc, char *argv[] )
{
//	printf( "Argc = %d\r\n", argc );
//	printf( "Argv0 = %s\r\n", argv[ 0 ] );

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
	printf( "Test utility. Type util -h for help.\r\n" );
}

void help()
{
	printf( "Type hello {name} to be greeted accordingly.\r\n" );
}

void greet( char *name )
{
	printf( "Hello %s!!!\r\n", name );
}
