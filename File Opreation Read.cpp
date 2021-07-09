# include <stdio.h>
# include <string.h>

int main( )
{
    //File pointer variable
	FILE *file ;

	//char array line for read one line in text line
	char line[50];

	//file = fopen ("location","mode") r mode for read
    file= fopen("D:\\C&CPP\\Test for c\\file handling(writing mode)\\storeData.txt","r") ;

     //while loop for EOF(fgets method return a false after the text is empty)
     while( fgets ( line, 50, file ))
		{
            printf( "%s" , line ) ;
		}
		fclose(file) ;

	return 0;
}
