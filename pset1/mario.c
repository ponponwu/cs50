
#include <cs50.h>
#include <stdio.h>

void PrintPyramid(int);
int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        height = get_int();
    } 
    while(height < 0  || height > 23);
    PrintPyramid(height);
}
void PrintPyramid(int height)
{
    int first = 2;
    for(int s = 0; s < height; s++)
    {
        int total = height + 1;
        for(int r = 0; r < total; r++)
        {
            if((total-first) > r)
            {
                printf(" ");    
            } else {
                printf("#");
            }
        }
        first += 1;
        printf("\n");
    }
}
