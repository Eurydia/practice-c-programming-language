// 1. Define a data type for complex numbers and create functions that allows to determine the multiplication, addition, subtration and division of two complex numbers.
// Use as reference [https://www.mathsisfun.com/numbers/complex-numbers.html]
struct complex
{
    float re;
    float im;
};
typedef struct complex complex_t;

complex_t complex_add(complex_t a, complex_t b)
{
    complex_t r = {
        .re = a.re + b.re,
        .im = a.im + b.im,
    };
    return r;
}

complex_t complex_sub(complex_t a, complex_t b)
{
    complex_t r = {
        .re = a.re - b.re,
        .im = a.im - b.im,
    };
    return r;
}

complex_t complex_mul(complex_t a, complex_t b)
{
    complex_t r = {
        .re = a.re * b.re - a.im * b.im,
        .im = a.re * b.im + a.im * b.re,
    };
    return r;
}

complex_t copmlex_div(complex_t a, complex_t b)
{
    complex_t r = {
        .re = (a.re * b.re + a.im * b.im) / (b.re * b.re + b.im * b.im),
        .im = (a.im * b.re - a.re * b.im) / (b.re * b.re + b.im * b.im),
    };
    return r;
}

int main()
{
    return 0;
}