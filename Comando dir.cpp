#include <stdio.h>
#include <stdlib.h>

/* Sólo funcionará si "dir" es aceptable por el sistema: MS-DOS, por ejemplo */

int main( void )
{
   puts( "La lista de ficheros en el directorio actual, segun el comando \"dir\":" );

   system( "dir" );

   return 0;
}
