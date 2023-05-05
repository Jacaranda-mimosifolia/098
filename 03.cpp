#include<stdio.h>
#include<string.h>
int array[10]={1};
int main()
{ 
	printf("%d，%d\n",array,&array[0]);//array数组名也是数组第一个元素的首地址 
	printf("%d\n",array==&array[0]);//True 1,
	array[0]=100;
	printf("%d,%d",array[0],array);//array数组名为指针常量，相当于const，不改变存储地址 
	return 0;
}
