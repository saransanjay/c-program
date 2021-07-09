#include <stdio.h>
 int main()
 {

    //FILE Pointer Variable
    FILE *file;

    //char array line is a text that are store in a text file
    char line[]="welcome to c programming \n what's your name";

    //file = fopen("loaction","mode") w mode is used to write
    file=fopen("storeData.txt","w");

    //fputs is used for insert the text to text file
    fputs(line,file);

    fclose(file);

    return 0;
 }
