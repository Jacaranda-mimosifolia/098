#include<stdio.h>
#include<string.h>
int array[10]={1};
int main()
{ 
	printf("%d��%d\n",array,&array[0]);//array������Ҳ�������һ��Ԫ�ص��׵�ַ 
	printf("%d\n",array==&array[0]);//True 1,
	array[0]=100;
	printf("%d,%d",array[0],array);//array������Ϊָ�볣�����൱��const�����ı�洢��ַ 
	return 0;
}
