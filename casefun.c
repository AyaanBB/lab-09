 #include <stdio.h>

// Function to perform arithmetic operations
float calculate(float num1, float num2, char operator) {
    switch (operator) {
        case '+': 
        return num1 + num2;
    
        case '-': 
        return num1 - num2;
        
        case '*': 
        return num1 * num2;
        
        case '/': 
        return num1 / num2;
 
        default:
            printf("Error: Invalid operator.\n");
            return 0; 
    }
}

int main() {
    float num1, num2, result;
    char operator;


    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 


    result = calculate(num1, num2, operator);

    
    printf("Result: %.2f\n", result);

    return 0;
}
