#include<stdio.h>
int arr[100];
int inputArr(int a);
int maxValu(int a);

int main(){
    int n;
    printf("nhap so phan tu trong mang: ");
    scanf("%d",&n);
    inputArr(n);
    int max= maxValu(n);
    printf("gia tri lon nhat trong mang: %d",max);
    return 0;
}

int inputArr(int a){
    for(int i = 0; i < a; i++){
    printf("nhap vao phan tu index[%d]: ",i);
    scanf("%d",&arr[i]);
    }
}

int maxValu(int a){
    int max=arr[0];
    for(int i = 1; i <= a; i++){
        if(arr[i] > max){
            max=arr[i];
        }
    }
    return max;
}