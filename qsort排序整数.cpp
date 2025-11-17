#include<stdio.h>
#include<stdlib.h>//c++内容 
int compare_int(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    return num1 - num2;
}
int main()
{
	int T;
	scanf("%d",&T);//输入组数 
    int a , b ,c , d;
    int count=0;// 声明大循环的值count 
    int result[T][1000]={0};  
	while (count<T)
	{   
	    scanf("%d %d %d %d",&a,&b,&c,&d);
		int num[4]={a,b,c,d};
		qsort(num, 4, sizeof(int), compare_int);
		for(int k = 0; k < 4; k++){
		result[count][k]= num[k];}
	    count++;
   }   
   for(int i=0;i <T;i++)
   {			
       for(int j =0;j<4;j++)//提取数组中的数据 
      {
            printf("%d " ,result[i][j]);
	  }
	printf("\n"); 
   }
	return 0; 
}
