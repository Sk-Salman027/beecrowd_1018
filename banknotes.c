#include <stdio.h>

int main()
{
    // variable declaration
    int N, quotient, reminder;
    // bankNotes array defination
    int bankNotes[] = {100, 50, 20, 10, 5, 2, 1};
    // take input
    scanf("%d", &N);
    printf("%d\n", N);
    for (int i = 0; i < sizeof(bankNotes) / sizeof(bankNotes[0]); i++)
    {   // Calculate banknotes
        quotient = N / bankNotes[i];
        reminder = N % bankNotes[i];
        N = reminder;
        // print the possible bankNotes
        printf("%d nota(s) de R$ %d,00\n", quotient, bankNotes[i]);
    }

    return 0;
}