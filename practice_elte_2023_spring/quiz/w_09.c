#include <stdio.h>
#include <string.h>

// // First way of delaring a struct
// struct car
// {
//     char name[100];
//     int model;
//     float price;
// };

// // Second way of declaring a struct
// typedef struct
// {
//     char name[100];
//     int model;
//     float price;
// } car_t;

// // Third way of declaring a struct
typedef struct car
{
    char name[100];
    int model;
    float price;
} car_t;

void print_name(car_t *car);
void print_model(car_t *car);
void print_price(car_t *car);
int cmp_price(car_t car1, car_t car2);
int cmp_price_ptr(const car_t const *car1, const car_t const *car2);

int main()
{
    car_t a = {"BMW", 2020, 1000000.0};
    car_t b = {
        .name = "Audi",
        .model = 2019,
        .price = 900000.0,
    };
    car_t c;
    c.model = 2018;
    c.price = 800000.0;
    strcpy(c.name, "Mercedes");

    return 0;
}

void print_name(car_t *car)
{
    printf("%s\n", car->name);
}

void print_model(car_t *car)
{
    printf("%d\n", car->model);
}

void print_price(car_t *car)
{
    printf("%f\n", car->name);
}

int cmp_price(car_t car1, car_t car2)
{
    if (car1.price > car2.price)
    {
        return 1;
    }
    if (car1.price < car2.price)
    {
        return -1;
    }
    return 0;
}

int cmp_price_ptr(const car_t const *car1, const car_t const *car2)
{
    if (car1->price > car2->price)
    {
        return 1;
    }
    if (car1->price < car2->price)
    {
        return -1;
    }
    return 0;
}
