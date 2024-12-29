#include<stdio.h>

int arr[5]={1,2,3,4,5};
int printarray(int a);

int main(){
    printarray(5);
    return 0;
}

int printarray(int a){
    for(int i = 0; i < a; i++){
       printf("%d ",arr[i]);
    }
}