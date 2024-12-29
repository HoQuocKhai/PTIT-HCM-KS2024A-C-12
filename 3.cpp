#include<stdio.h>

int giathua(int a);

int main(){
    int n;
    printf("nhap vao 1 so nguyen bat ky: ");
    scanf("%d",&n);
    printf("%d",giathua(n));
    return 0;
}
int giathua(int a){
    int sum=1;
    for (int i = 2; i <= a; i++){
        sum*=i;
    }
    return sum;
}