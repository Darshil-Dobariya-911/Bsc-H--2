#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex add(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiply(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

// Function to display complex number
void display(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    struct Complex c1, c2, sum, product;

    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum = add(c1, c2);
    product = multiply(c1, c2);

    printf("Addition: ");
    display(sum);

    printf("Multiplication: ");
    display(product);

    return 0;
}