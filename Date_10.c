/*10.	WAP to take date as an input in below given format and convert the date format and     display the result as given below. 
User Input date format – “DD/MM/YYYY”  (27/11/2022) 
Output format –  
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022) 
*/
#include<stdio.h>
int main()
{
    int day,mon,year;
    printf("Enter Date in \"DD/MM/YYYY\" format:");
    scanf("%d/%d/%d",&day,&mon,&year);
    printf("Day - %d , Month - %d , Year - %d",day,mon,year);
    return 0;
}