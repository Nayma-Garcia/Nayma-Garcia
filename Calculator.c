//
//  main.c
//  Calculator App
//
//  Created by Nayma Garcia on 9/16/21.
//

#include <stdio.h>

int main() {
    
    double num1;
    double num2;
    char oP = '\0';
    
    printf("Enter a number: ");
    scanf("%lf", &num1);
    
    printf("Enter a 2nd number: ");
    scanf("%lf", &num2);
    
    printf("Enter an operation to perform (+, -, *, /): ");
    scanf("%s", &oP);
    
    if(oP == '+'){
        printf("Result: %0.2lf\n", num1+num2);
    }
    if(oP == '-'){
        printf("Result: %0.2lf\n", num1-num2);
    }
    if(oP == '*'){
        printf("Result: %0.2lf\n", num1*num2);
    }
    if(oP == '/'){
        printf("Result: %0.2lf\n", num1/num2);
    }
    return 0;
}
