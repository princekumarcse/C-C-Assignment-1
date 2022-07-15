/*4.	WAP to find the area of the circle. 
Take radius of circle from user as input and print the result in below given format. 
Expected output format – “Area of circle is A having the radius R”.
 Replace A with area & R with radius. 
*/
#include<stdio.h>
int main()
{
    int radious;//we can take radious as float also
    float area;
    printf("Enter Radious:");
    scanf("%d",&radious);
    area= 3.14*radious*radious;
    printf("Area of cirlce is %.2f having the radious %d",area,radious);
    return 0;

}