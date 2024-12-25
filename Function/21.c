#include <stdio.h>
#include <math.h>




void TakeInput(int array[100], int num_of_elem)
{

    for(int i=0; i<num_of_elem; i++)
    {
        scanf("%d", &array[i]);
    }
}


double CalcMean(int array[100], int num_of_elem)
{
    int sum = 0;
    for(int i=0; i<num_of_elem; i++)
    {
        sum += array[i];
    }
    double mean = (double)sum / num_of_elem;
    return mean;
}


double Calc_Std_deviation(int array[100], int num_of_elem)
{
    double mean = CalcMean(array, num_of_elem);
    double sum = 0;
    for(int i=0; i<num_of_elem; i++)
    {
        sum += pow(array[i] - mean, 2);
    }
    double std_deviation = sqrt(sum / num_of_elem);
    return std_deviation;
}

int main()
{
    int array[100];
    int num_of_elem;

    scanf("%d", &num_of_elem);
    TakeInput(array, num_of_elem);
    double std_deviation = Calc_Std_deviation(array, num_of_elem);
    printf("%.2lf\n", std_deviation);
    return 0;
}
