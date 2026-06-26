#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("Quiz Application\n\n");

    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\n2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    printf("\n3. How many continents are there?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    printf("\nYour Score: %d/3\n", score);

    return 0;
}
