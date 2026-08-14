#include <stdio.h>
int fn1(){
    // printf("Hey kunal one more time");
    return 3.14;
}
void fn2(){
    return;
}
float fn3(){
    return 3.14;
}
int totIntSum=0;
float totFSum=0.0;
struct Data_Structure{
    int x;
    float y;
}typedef ds;
int main(){
    printf("Hey kunal\n");
    // int x;
    // struct Data_Structure
    // ds 
    // int ans=fn1();
    // fn2();
    // float ans2=fn3();
    // /*
    //     %d-int
    //     %f-float
        
    // */
    // printf("%d,%.2f",ans,ans2);
    // int a=0,b=0;
    // printf("Enter your values:\n");
    // scanf("%d%d",&a,&b);
    // // printf("a:%d",a);
    // // scanf("%d\n",&b);
    // // printf("b:%d",b);
    // // int x=a+b;
    // printf("Sum of inputs:%d",(a+b+7));
    int sum=0,n=3;//-2^32 to 2^32-1
    // printf("How many numbers you want to add:");
    // scanf("%d",&n);
    // int i=0;
    ds A[n];//Array h yeh int matlb int type k variable bracket mn size h toh n size k array
    // while(i<n){
    //     // int x=0;
    //     // printf("Enter the %d number:",(i+1));
    //     scanf("%d",&A[i]);
    //     sum+=A[i];
    //     i++;
    // }
    for(int i=0;i<n;i++){
        int a=0;
        float b=0.0;
        scanf("%d%f",&a,&b);
        (A[i].x)=a;
        (A[i].y)=b;
        totIntSum+=A[i].x;
        totFSum+=A[i].y;
    }
    // printf("Thanks,your sum is:%d\n",sum);
    // printf("Your array was:");
    printf("Your ds array was:");
    for(int i=0;i<n;i++){
        printf("(%d,%.1f) ",A[i].x,A[i].y);
    }
    printf("\n");
    // int totIntSum=0;
    // float totFSum=0.0;
    // for(int i=0;i<n;i++){
    //   totIntSum+=(A[i].x);
    //   totFSum+=(A[i].y);
    // }
    printf("Total int sum:%d\n",totIntSum);
    printf("Total float sum:%f",totFSum);
    return 0;
}