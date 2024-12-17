
// Pointer

// Swipe value using two variable    

// #include <stdio.h>

// int main()

// {
//     int a=10;
//     int b = 20;
    
//     int *pa = &a;
//     int *pb = &b;
    
//     *pa = *pa + *pb;
//     *pb = *pa - *pb;
//     *pa = *pa - *pb;

//     printf("%d\n",*pa);
//     printf("%d",*pb);
  
//     return 0;
// }


#include <stdio.h>

void add(float a, float b) {
    printf("Result: %.2f\n", a + b);
}

void subtract(float a, float b) {
    printf("Result: %.2f\n", a - b);
}

void multiply(float a, float b) {
    printf("Result: %.2f\n", a * b);
}

void divide(float a, float b) {
    if (b != 0) {
        printf("Result: %.2f\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    float num1, num2;
    char operator;
    
    printf("Simple Calculator\n");
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Space before %c to consume any whitespace
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    switch (operator) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide(num1, num2);
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}


// C Star Pattern. 

//    ....
//    ....
//    ....


// #include <stdio.h>

// int main() {
    
//     int n,i,j;
    
//     for(int i=0;i<=5;i++)
//     {
//          printf("\n");
        
//         for(int j=0;j<=;j++)
//         {
//            printf("*");
//         }
//     }
// }


// .
// ..
// ...
// ....
// .....
// ......

// #include <stdio.h>

// int main() {
    
//     int n,i,j;
    
//     for(int i=0;i<=5;i++)
//     {
//          printf("\n");
        
//         for(int j=0;j<=i;j++)
//         {
//            printf("*");
//         }
//     }
// }

