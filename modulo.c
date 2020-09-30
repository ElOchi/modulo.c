 #include<stdio.h>
//Efficient way of calculating remainder and quotient.//
void function(int *a,int *b)
{
    int c=*a,d=*b;
    *a=c/d;
    *b=c%d;
}

   int main()
   {
     int a;
     int b;
     printf("Number:");
     scanf("%d", &a);
     printf("Number: ");
     scanf("%d", &b);
     function(&a,&b);
     printf("Quotient %d Remainder %d\n",a,b);
  }

