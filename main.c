# include <stdio.h>
# include <string.h>

int main( )
{
	FILE *file ;

	char line[50];

    file= fopen("D:\\C&CPP\\Test for c\\file handling(writing mode)\\storeData.txt","r") ;

     while( fgets ( line, 50, file ))
		{
		printf( "%s" , line ) ;
		}
		fclose(file) ;

	return 0;
}
