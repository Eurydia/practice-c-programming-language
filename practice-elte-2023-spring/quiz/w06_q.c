#include <stdio.h>

float *min_avg(float *f_arr, float avg, int len);

int main()
{
    float x[] = {2.0, 2.0, 3.0, 2.0};
    printf("%f", *min_avg(x, 9 / 4, 4));

    int *x = &min_avg;
}

float *min_avg(float *f_arr, float avg, int len)
{
    int i;
    int res_index = 0;
    float res_val = avg + f_arr[0];

    for (i = 0; i < len; i++)
    {
        if (f_arr[i] > avg && f_arr[i] < res_val)
        {
            res_index = i;
            res_val = f_arr[i];
        }
    }

    return f_arr + res_index;
}