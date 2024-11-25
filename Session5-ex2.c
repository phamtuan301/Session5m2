#include <stdio.h>
int main(){
	int x;
	int correct = 30;
    while(1){
    printf("moi ban nhap so nguyen bat ki: ");
	scanf("%d", &x);
	if (x == correct){
		printf("ban da tra loi dung");
		break;
	}
	else{
	printf("moi ban nhap so nguyen bat ki: ");
	scanf("%d", &x);
	}
	}
	return 0;
}