#include<stdio.h>
int main(){
    int row=5;
    int column=5;
    int i,j;
    for(i=0;i<row;i++){
        for(j=row-1;j>=i;j--){
            printf("* ");
        }
        printf(" \n");

    }
}