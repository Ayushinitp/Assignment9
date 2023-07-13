//1
// #include <stdio.h>
// int main(){
//  int i,n,sum=0;
//   printf("Enter any number : ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("Sum is %d",sum);
//     return 0;
// }




//2
// #include <stdio.h>
//   int main(){
//      int i ,n , sum=0;
//       printf("Enter any number : ");
//     scanf("%d",&n);
//     for(i=2;i<=2*n;i++){
//         if(i%2==0)
//             sum=sum+i;
//     }
//     printf("Sum is %d",sum);
//     return 0;

//   }




//3
// #include <stdio.h>
//  int main(){
//     int i,n,sum=0;
//      printf("Enter any number : ");
//     scanf("%d",&n);
//     for(i=1;i<=2*n;i++){
//         if(i%2)
//         sum=sum+i;
//     }
//     printf("Sum is %d",sum);
//     return 0;
//  }




//4 ,5 sum of squares and cubes  of 1st n natural nos;
// #include <stdio.h>
//  int main(){
//      int i , n, sum =0,cube=0;
//       printf("Enter any number : ");
//     scanf("%d",&n);
//     printf("Sum of squares of n natural numbers are : ");
//     for(i=1;i<=n;i++){
//         sum=sum+i*i;
//     }
//     printf("%d\n",sum);
//     printf("Sum of Cubes of 1st n natural numbaers are : ");
//     for(i=1;i<=n;i++){
//         cube=cube+i*i*i;
//     }
//     printf("%d",cube);
//     return 0;
//  }




//6 factorial;
// #include <stdio.h>
//  int main(){
//      int i,n,fact=1;
//       printf("Enter any number : ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf("Factorial of %d is %d",n,fact);
//     return 0;
//  }




//7
// #include <stdio.h>
//  int main(){
//      int n,i,count=0;
//      printf("Enter any number : ");
//     scanf("%d",&n);
//     i=n;
//     while(n>0){
//         count++;
//         n=n/10;
//     }
//     printf("%d has %d digits",i,count);
//     return 0;
//  }




//8 prime
// #include <stdio.h>
//  int main(){
//      int i,n;
//       printf("Enter any number : ");
//     scanf("%d",&n);
//     for(i=2;i<n;i++){
//         if(n%i==0)
//         break;
//     }
//     if(i==n)
//     printf("Prime");
//     else
//     printf("Not prime");
//     return 0;
//     }



//9
// #include <stdio.h>
//  int main(){
//     int i, a,b;
//     printf("Enter two numbers : ");
//      scanf("%d%d",&a,&b);
//      for(i=a>b?a:b;i<=a*b;i++){
//         if(i%a==0 && i%b==0){
//             printf("Lcm is %d",i);
//             break;
//         }
//      }
//      return 0;
//  }




//10
#include <stdio.h>
#include <math.h>
 int main(){
    int a,b,t=0,digit=0;
    printf("Enter a number : ");
    scanf("%d",&a);
    b=a;
    while(b>0){
        digit++;
        b=b/10;
    }
    while(a>0){
        t=t+a%10*pow(10,digit-1);
        digit--;
        a=a/10;
    }
    printf("Reverse number is %d",t);
    return 0;
 }