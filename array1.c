//a c program to find the frequency of entered element
#include<stdio.h>
void main()
{   int size=0;
    int check;
    int flag=0;
    int arr[100];
    printf("enter the size of array\n");
    scanf("%d",&size);
    for(int counter=0;counter<size;counter++){
        printf("enter the %d element\t",counter);
        scanf("%d",&arr[counter]);

    }
    printf("enter the element to check\t");
    scanf("%d",&check);
    for(int counter=0;counter<size;counter++){
        if(arr[counter]==check){
            flag=flag+1;
        }
       
    
}
printf("the frequency of the entered digit is %d",flag);
}
