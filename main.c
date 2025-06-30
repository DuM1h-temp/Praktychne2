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
	printf("������ ������� �����: ");
	scanf("%d", &p);
	
	if (p<2||p>20){
		printf("ʳ������ ����� ��� ���� � ������� � 2 �� 20");
		return 1;
	}
	
	printf("������ �����: ");
	int numbers[p];
	for (i=0;i<p;i++){
		scanf("%d", &numbers[i]);
	}
	
	result = numbers[0];
	for (i=1;i<p;i++){
		result = nsk(result,numbers[i]);
	}
	printf("�������� ������ ������ ������� �����: %d", result);
	
	return 0;
}
