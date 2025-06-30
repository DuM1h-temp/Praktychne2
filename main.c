#include <stdio.h>
#include <Windows.h>

int nsd(int a, int b){
    if (b==0)
        return a;
    else
        return nsd(b, a % b);
}

int nsk(int a, int b){
	return a*b/nsd(a,b);
}
        
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int p, i, result;
	printf("Введіть кількість чисел: ");
	scanf("%d", &p);
	
	if (p<2||p>20){
		printf("Кількість чисел маає бути в проміжку з 2 до 20");
		return 1;
	}
	
	printf("Введіть числа: ");
	int numbers[p];
	for (i=0;i<p;i++){
		scanf("%d", &numbers[i]);
	}
	
	result = numbers[0];
	for (i=1;i<p;i++){
		result = nsk(result,numbers[i]);
	}
	printf("Найменше спільне кратне заданих чисел: %d", result);
	
	return 0;
}
