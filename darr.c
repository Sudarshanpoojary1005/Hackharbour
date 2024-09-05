#include<stdio.h>


void main(){
    
int arr[4][3];
printf("enter a arrays in the rows of 4 and 3 column\n");
for(int i=0;i<4;i++){
     for(int j=0;j<3;j++){
        for(int i=0;i<4;i++){

           scanf("%d",&arr[i][j]);
       }  
     }
     
   for(int i=0;i<4;i++){
     for(int j=0;j<3;j++){
           printf("arr[%d][%d]=%d \n",i,j,arr[i][j]);
       } }
    }

}