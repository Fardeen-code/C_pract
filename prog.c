#include<stdio.h>
int main(){
    FILE *fp;
    int ch;
    fp=fopen("file.txt","w");
    if(fp==NULL)
    {
        printf("failed to open");
    }
    char str[100];
    printf("enter the string data:");
    fgets(str,100,stdin);
    fputs(str,fp);
    printf("\nthe string is:");
    fputs(str,stdout);
    fclose(fp);
    return 0;
}