#include<stdio.h>
#include<string.h>

// Function to count capital letters
int countCapitalLetters(char str[], int len){
        // Count to store number of capital letters
        int count = 0;
        // Iterating through the entire character array
        for(int i=0;i<len;i++){
                // Checking for capital letter
                if(str[i] >= 65 && str[i] <= 90){ //capital letters ascii values [65,90]
                        // If yes, increase count by 1
                        count = count + 1;
                }
        }
        // Return the value of count
        return count;
}
// Function to check if the numbers differ by a single bit
int difference(int num1, int num2){
        // Caclulate xor
        // if xor (represented in binary) contains only one bit
        // Then they differ by single bit
        int xorOfNumbers = num1 ^ num2;
        // Which means it should be a power of 2
        // Checking for power of 2
        while(xorOfNumbers > 1){
                if(xorOfNumbers % 2 != 0){
                        return 0;
                }else{
                        xorOfNumbers = xorOfNumbers / 2;
                }
        }
        // It is a power of 2
        if(xorOfNumbers == 1)
                return 1;
        else
                return 0;
}
int main(){
        // Taking string input
        char str[100];
        int num1, num2;
        printf("Enter the string: ");
        gets(str);
        //      Calling function
        printf("The number of capital letters in the string are %d\n", countCapitalLetters(str, strlen(str)));
        printf("\n\nEnter two numbers: ");
        // Taking integers input
        scanf("%d %d", &num1, &num2);
        // Calling function
        printf("Do they differ by a single bit? %d\n", difference(num1, num2));
        return 0;
}