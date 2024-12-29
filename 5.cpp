#include<stdio.h>

int checknumber(int a);

int main(){
    int n;
    printf("nhap 1 so nguyen bat ky: ");
    scanf("%d",&n);
    int flag = checknumber(n);
    if (flag){
    	printf("la so nguyen to");
	}else printf("khong phai so nguyen to");
    return 0;
}

int checknumber(int a){
	if (a<2) return 0;
	for (int i = 2; i*i < a; i++){
		if(a%i==0){
			return 0;
		}else return 1;
	}
}
