#include<stdio.h>
#include<math.h>

void main()
{
    double num1, num2, result;
    char operation;

    printf("enter a number:");  //input for the frist number
    scanf("%lf",&num1);

    printf("enter an operation: +,-,*,/,s for sin, c fir cos, t for tan, e for exponential\n(sine,cos and tan are calculated in radians)\n(for exponential,
    second number is taken as the power)\n+>");    // operation input by user
    scanf("%c",&operation);

    if(operation== '+'||operation== '-'||operation== '/'||operation== '*'||operation== 'e')   //operation that require a second number

    {
        printf("enter oprend number:");
        scanf("%if",&num2);
    }
    
    switch(operation)         //switch case used for each operation as input by user
    {
        case '+':
        {
            result=num1+num2;
            printf("%lf+%lf=%lf\n",num1,num2,result);
            break;
        }
        
        case '-':
        {
            result=num1-num2;
            printf("%lf-%lf=%lf\n",num1, num2, result);
            break;
        }
        case '*':
        {
            result=num1*num2;
            printf("%lf*%lf=%lf\n",num1, num2, result);
            break;
        }
        case '/':
        {
            if(num==0)
            {
                printf("error:cannot divide by zero\n");
            }
            else
            {
                result=num1 / num2;
                printf("%lf / lf=%lf\n",num1,num2, result);
            }
            break;
        }
        
        case 's':
        {
            result=sin(num1);
            pritnf("sin(%lf)=%lf\n",num1,result)
            break;
        }
        case 'c':
        {
            result=cos(num1);
            printf("cos(%lf)=%lf\n",num1,result)
            break;
        }
        case 't':
        {
            result=tan(num1);
            printf("tan(%lf)=%lf\n",num1, result);
            break;
        }
        case 'e':
        {
            result=pow(num1 ,num2);
            printf("%lf ^ %lf =%lf\n"num 1,num2,result);
            break;
        }
        default;
        {
            printf("error:invaid operator\n");
        }
    }
}