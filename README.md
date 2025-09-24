PT-BR

calculadora: 
O programa foi estruturado com as seguintes construções da linguagem C:
Loop do-while: Utilizado para que a calculadora opere de forma contínua, executando o cálculo ao menos uma vez antes de perguntar ao usuário se deseja parar.
Estrutura switch: Seleciona a operação matemática correta (+, -, *, /) com base no caractere (char) que o usuário digita. Inclui um caso default para lidar com operadores inválidos.
Funções printf e scanf: Responsáveis por toda a interação com o usuário, desde exibir as instruções e resultados (printf) até ler os números e o operador inseridos (scanf).

contador regressivo: 
Este programa cria um contador que imprime os números de 100 até 1 na tela, com uma pausa de 1 segundo entre cada número.
#include <windows.h>: Inclui uma biblioteca específica do Windows para usar a função Sleep.
for (i = 100; i >= 1; i--): Inicia um loop for que começa com a variável i valendo 100 e continua enquanto i for maior ou igual a 1. A cada volta, i diminui em 1.
printf("%d\n", i);: Dentro do loop, este comando imprime o valor atual de i na tela.
fflush(stdout);: Garante que o número seja exibido na tela imediatamente, antes da pausa.
Sleep(1000);: Esta função faz o programa esperar por 1000 milissegundos (ou seja, 1 segundo) antes de continuar para a próxima volta do loop.

temperatura: 
Este programa pede para o usuário digitar uma temperatura em graus Celsius e, em seguida, classifica e exibe uma mensagem dizendo se está muito frio, frio, agradável, quente ou muito quente.
float T;: Declara uma variável T do tipo float para armazenar a temperatura, permitindo números com casas decimais.
printf(...) e scanf("%f", &T);: O programa primeiro exibe uma mensagem pedindo a temperatura e depois usa o scanf para ler o número digitado pelo usuário e guardá-lo na variável T.
Estrutura if / else if / else: Esta é a parte principal do código, que toma as decisões:
Se a temperatura (T) for menor que 10, ele imprime "Muito frio".
Se estiver entre 10 e 20, imprime "Frio".
Se estiver entre 21 e 30, imprime "Agradável".
Se estiver entre 31 e 40, imprime "Quente".
Se for maior que 40, imprime "Muito quente".

English:

Calculator
The program was structured with the following C language constructs:
do-while Loop: Used for the calculator to operate continuously, executing the calculation at least once before asking the user if they wish to stop.
switch Structure: Selects the correct mathematical operation (+, -, *, /) based on the character (char) the user enters. It includes a default case to handle invalid operators.
printf and scanf Functions: Responsible for all user interaction, from displaying instructions and results (printf) to reading the numbers and the operator entered by the user (scanf).

Countdown Counter:
This program creates a counter that prints the numbers from 100 down to 1 on the screen, with a 1-second pause between each number.
#include <windows.h>: Includes a Windows-specific library to use the Sleep function.
for (i = 100; i >= 1; i--): Starts a for loop that begins with the variable i at 100 and continues as long as i is greater than or equal to 1. In each iteration, i is decremented by 1.
printf("%d\n", i);: Inside the loop, this command prints the current value of i to the screen.
fflush(stdout);: Ensures the number is displayed on the screen immediately, before the pause.
Sleep(1000);: This function makes the program wait for 1000 milliseconds (i.e., 1 second) before continuing to the next loop iteration.

Temperature: 
This program asks the user to enter a temperature in degrees Celsius and then classifies and displays a message stating whether it is very cold, cold, pleasant, hot, or very hot.
float T;: Declares a variable T of type float to store the temperature, allowing for numbers with decimal places.
printf(...) and scanf("%f", &T);: The program first displays a message asking for the temperature and then uses scanf to read the number entered by the user and store it in the variable T.
if / else if / else Structure: This is the main part of the code, which makes the decisions:
If the temperature (T) is less than 10, it prints "Muito frio" (Very cold).
If it is between 10 and 20, it prints "Frio" (Cold).
If it is between 21 and 30, it prints "Agradável" (Pleasant).
If it is between 31 and 40, it prints "Quente" (Hot).
If it is greater than 40, it prints "Muito quente" (Very hot).
