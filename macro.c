#include<stdio.h>
#define PI 3.142
#define AREA_OF_CIRCLE(r)(PI*r*r)
#define SURFACE_AREA_OF_CYLINDER(r,h)(2*PI*r*(r+h))
int main(){
float r,h,area,surface_area;
printf("Enter the radius:");
scanf("%f",&r);
printf("Enter the height of cylinder:");
scanf("%f",&h);
area=AREA_OF_CIRCLE(r);
surface_area=SURFACE_AREA_OF_CYLINDER(r,h);
printf("The area of circle is %2f\n",area);
printf("The surface area is %2f\n",surface_area);
return 0;
}
