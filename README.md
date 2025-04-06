## Banknotes
### Problem Statement
<p>In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. Print the read value and the list of banknotes.<br>

<li>Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.</li>

</p>

### Input
```c
int N, quotient, reminder;
// bankNotes array defination
int bankNotes[] = {100, 50, 20, 10, 5, 2, 1};
// take input
scanf("%d", &N);
```
### Print the  Number:
```c
printf("%d\n", N);
```
### Calculate the Banknotes: 
```c
 for (int i = 0; i < sizeof(bankNotes) / sizeof(bankNotes[0]); i++)
    {   // Calculate banknotes
        quotient = N / bankNotes[i];
        reminder = N % bankNotes[i];
        N = reminder;
        // print the possible bankNotes
        printf("%d nota(s) de R$ %d,00\n", quotient, bankNotes[i]);
    }
```