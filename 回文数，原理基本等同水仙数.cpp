#include<stdio.h>
int is(int x )
{
	if (x<0 || (x % 10 == 0 && x!=0))
	{
		return 0;
	}
	int half = 0;
	while (x > half )
	{
		half = (half *10 )+ (x %10);
		x /= 10 ; 
	}
	return (x==half)||(x == half /10) ? 1 : 0;
} 

int main()
{
	int T;
	scanf("%d",&T);
    int result[100][1]={0}; 
	int result_len[100]={0};
    for (int count =0 ;count < T;count++)
	{   
	    int num;
	    scanf("%d",&num);
		    if (is(num))
		  {
			result[count][result_len[count]++]= num ;
		  }
	        else 
		{
			result[count][result_len[count]++]=-1;
		}
   }
   for(int i=0;i <T;i++)
   {			
       for(int j =0;j< result_len[i];j++)
      {
        if (result[i][j] != - 1)
		{
            printf("Yes\n");
			}
        else{
            printf("No\n");
			}
	  }
   }
	return 0; 
} 
 
