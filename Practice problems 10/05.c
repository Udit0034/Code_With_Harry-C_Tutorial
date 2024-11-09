#include <stdio.h>

int main() {
    int num[20];
    FILE *ptr =  fopen("number.txt","r+");
    for (int i = 0; i < 20; i++)
    {
    (fscanf(ptr,"%d",&num[i]));
    }
    fseek(ptr,0,SEEK_SET);
     for (int i = 0; i < sizeof(num)/4; i++)
    {
    (fprintf(ptr,"%d\n",2*num[i]));
    }
    
    fclose(ptr);    
    return 0;
}