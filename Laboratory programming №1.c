#include <stdio.h>
#include <math.h>


double Perimeter(int N, double Radius);
double Area(int N, double Radius);

int main() {
    
    double Radius, PerimeterValue, AreaValue;
    int N, Action;
    
    printf("Вітаю! Ця програма обчислює периметр і площу правильного n-кутника, вписаного в коло. Щоб продовжити, вкажіть значення: \n");
    printf("Радіус кола: ");
    scanf("%lf", &Radius);
    printf("\nКількість кутів у правильного n-кутника: ");
    scanf("%i", &N);
    printf("\nВпишіть дію яку ви хочете виконати:\nПериметер - 1; \nПлоща - 2; \nДві дії - 3;\nДія:");
    scanf("%i", &Action);
    
   if (Action == 1)
   {
       PerimeterValue = Perimeter(N, Radius);
       printf("Периметр правильного %d-кутника: %lf\n", N, PerimeterValue);
       
   } 
   else if (Action == 2) 
   {
       AreaValue = Area(N, Radius);
       printf("Площа правильного %d-кутника: %lf\n", N, AreaValue);
   }
   else if (Action == 3)
   {
        PerimeterValue = Perimeter(N, Radius);
        AreaValue = Area(N, Radius);
        printf("Периметр правильного %d-кутника: %lf\n", N, PerimeterValue);
        printf("Площа правильного %d-кутника: %lf\n", N, AreaValue);
   }

    return 0;
}


double Perimeter(int N, double Radius) {
    return 2 * N * Radius * sin(M_PI / N);
}

double Area(int N, double Radius) {
    return (N * Radius * Radius / 2) * sin(2 * M_PI / N);
}
