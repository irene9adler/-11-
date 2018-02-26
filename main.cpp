//北航11年第一题
/*孪生数定义： 如果 A 的约数（因数，包含1，但不包含A本身）之和等于 B ， B 的约数（因数）之和等于 A ， A 和 B 称为孪生数
（A和B不相等）。试找出正整数 M 和 N 之间的孪生数。
输入：
从控制台输入两个正整数M和N（1<=M<N<=20000），中间用一个空格分隔。
输出：
在标准输出上输出符合题目描述的M和N之间的全部孪生数对（包括M和N）。每行输出一对孪生数，用一个空格隔开，小的先输出；各行
孪生数按照第一个数从小到大的顺序输出，一对孪生数只输出一次。 如果没有符合要求的孪生数对，则输出字符串“NONE”。
输入样例
20 300
200 250
输出样例
220 284
NONE
*/

#include <stdio.h>

int sum_yueshu(int n)
{
    int i;
    int sum = 0;
    if(n==1) return 0;
    else
   {
       for(i=1;i<n;i++)
    {
        if(n%i==0) sum+=i;
    }
    return sum;

   }
}

int main()
{
    int M,N;
    int i,j;
    int flag;
    while(scanf("%d %d",&M,&N)!=EOF)
    {
       flag = 0;
       for(i=M;i<=N;i++)
       {
           for(j=i+1;j<=N;j++)
          {
           if((sum_yueshu(i)==j)&&(sum_yueshu(j)==i))
           {
               printf("%d %d\n",i,j);
               flag = 1;
           }
          }
       }
       //if(flag==1) continue;
       if(flag==0) printf("NONE!\n");


    }
    return 0;
}
