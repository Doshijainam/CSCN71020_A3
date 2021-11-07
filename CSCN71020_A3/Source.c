#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Rock_Paper_Scissor_Definition.h"
#define LENGTH 10

char* Rock_Paper_Scissor(char p1[LENGTH], char p2[LENGTH]);

char* Rock_Paper_Scissor(char p1[LENGTH], char p2[LENGTH])
{
    char* result;
    result = (char*)malloc(10 * sizeof(char));
    
    if (strcmp(p1, "Rock") == 0 && strcmp(p2, "Rock") == 0 || strcmp(p1, "Paper") == 0 && strcmp(p2, "Paper") == 0 || strcmp(p1, "Scissor") == 0 && strcmp(p2, "Scissor") == 0)
    {
        strcpy_s(result, 10, "Draw");
    }
    

    else if (strcmp(p1, "Rock") == 0 && strcmp(p2, "Scissor") == 0 || strcmp(p1, "Paper") == 0 && strcmp(p2, "Rock") == 0 || strcmp(p1, "Scissor") == 0 && strcmp(p2, "Paper") == 0)
    {
        strcpy_s(result, 10, "Player1");
    }
    

    else if (strcmp(p1, "Rock") == 0 && strcmp(p2, "Paper") == 0 || strcmp(p1, "Paper") == 0 && strcmp(p2, "Scissor") == 0 || strcmp(p1, "Scissor") == 0 && strcmp(p2, "Rock") == 0)
    {
        strcpy_s(result, 10, "Player2");
    }
   
    else
    {
        strcpy_s(result, 10, "Invalid!");
    }
   
    return (char*)result;
}

int main()
{
    char p1[10], p2[10];
    char* answer;
    printf("Rock Paper Scissor Simulator\n\nPlease choose from the following\n\nRock\nPaper\nScissor\n\n");
    printf("Player 1:");
    scanf_s("%s", p1, 10);
    printf("\nPayer 2:");
    scanf_s("%s", p2, 10);
    answer = Rock_Paper_Scissor(p1, p2);
    printf("\n%s", answer);
   
}