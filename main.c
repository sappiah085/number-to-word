#include <stdio.h>
#include <string.h>
char* returnName(int number){
    switch (number) {
        case 1:
            return "One";
        case 2:
            return "Two";
        case 3:
            return "Three";
        case 4:
            return "Four";
        case 5:
            return "Five";
        case 6:
            return "Six";
        case 7:
            return "Seven";
        case 8:
            return "Eight";
        case 9:
            return "Nine";
        case 10:
            return "Ten";
        case 11 :
            return "Eleven";
        case 12:
            return "Twelve";
        case 13:
            return "Thirteen";
        case 20:
            return "Twenty";
        case 30:
            return "Thirty";
        case 40:
            return "Forty";
        case 50:
            return "Fifty";
        case 60:
            return "Sixty";
        case 70:
            return "Seventy";
        case 80:
            return "Eighty";
        case 90:
            return "Ninety";
        default:
            return "";
    }
}
int main() {
    int number;
    char* string = "";
    printf("Enter number from 1 to 999: ");
    scanf("%i", &number);
    if(number < 14){
        printf("Number is : %s", returnName(number));
    }else if(number < 20 && number > 13){
        number = number%10;
        if(number != 5){
            printf("Number is : %steen", returnName(number));
        }else {
            printf("Number is : fifteen");
        }

    }else if(number > 19 && number < 100){
        int valueOne = (number/10)*10;
        int front = number%valueOne;
        printf("Number is : %s-%s", returnName(valueOne) , returnName(front));
    }else if(number < 1000 && number > 99){
        int front, valueTwo;
        int valueOne = (number/100);
         valueTwo = (number-(number/100)*100);
    if(valueTwo < 20){
        front = 0;
        if(valueTwo%10 != 5 && valueTwo > 13){
          printf("Number is : %s Hundred  %s %steen %s ", returnName(valueOne) , (valueTwo || front) ? "and" : ""  ,returnName(valueTwo%10), returnName(front));
        return 0;
        }else if(valueTwo <=13){
            printf("Number is : %s Hundred  %s %s ", returnName(valueOne) , (valueTwo || front) ? "and" : ""  , returnName(valueTwo));
            return 0;
        }else {
             printf("Number is : %s Hundred  %s Fifteen %s ", returnName(valueOne) , (valueTwo || front) ? "and" : ""  , returnName(front));
        return 0;
        }
    }else{
        valueTwo = (valueTwo/10)*10;
        if(valueTwo != 0) {
        front = (number - (number / 100) * 100) % valueTwo;
    }else {
        front = number % ((number/100)*100);
    }
    }

        printf("Number is : %s Hundred  %s %s %s ", returnName(valueOne) , (valueTwo || front) ? "and" : ""  ,returnName(valueTwo), returnName(front));
    }
}
