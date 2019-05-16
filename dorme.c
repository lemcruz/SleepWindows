#include<stdio.h>
#include<stdlib.h>

void main(void){

    FILE *fp;
    int currentCounter;

    system ("mkdir C:\\SleepWithTheFishes");
    fp = fopen("C:\\SleepWithTheFishes\\baitCounter.txt","a+");
    fseek(fp,0,SEEK_SET);
    fscanf(fp,"%d",&currentCounter);
    fclose(fp);

    fp = fopen("C:\\SleepWithTheFishes\\baitCounter.txt","w");
    fprintf (fp,"%d",++currentCounter);
    fclose(fp);

    system("shutdown /h");

    return;
}