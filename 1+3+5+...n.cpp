 #include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
      int i,n,s=0;
      printf("enter the value of n");
      scanf("%d",&n);
      for(i=1;i<=n;i+=2)
      {
      	s=s+i;
	  }
	  printf("Sum=%d",s);
	
getch();
return 0;

}
