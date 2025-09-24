#include <stdio.h>
int main() {
float T;


printf("Digite a temperatura em graus Celsius: ");
scanf("%f", &T);


if (T < 10) {
printf("Muito frio\n");
} 
else if (T >= 10 && T <= 20) {
printf("Frio");
} 
else if (T >= 21 && T <= 30) {
printf("Agradável");
} 
else if (T >= 31 && T <= 40) {
printf("Quente");
} 
else {
printf("Muito quente");
}
}