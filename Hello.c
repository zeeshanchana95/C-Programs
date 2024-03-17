
//CHAPTER 05: Function
  // Practice Qs 31
  // Write functions to calculate area of a square, a circle & a rectangle.

#include<stdio.h>
#include<math.h>

int main() {

  float areaOfSquare = 0, areaOfCircle = 0, areaOfRectangle = 0;
  float radius;
  float length;
  float width;
  float sideLength;

  printf("Enter the radius of a circle: ");
  scanf("%f", &radius);
  area = M_PI * radius * radius;  
  printf("The area of a circle with radius %f is %f\n", radius, area);


  printf("Enter the length and width of a rectangle: ");
  scanf("%f %f", &length, &width);
  area = length * width;
  printf("The area of a rectangle with length %f and width %f is %f\n", length, width, area);
  
  printf("Enter the length for square");
  scanf("%f", &sideLength);
  area = sideLength * sideLength;
  printf("The area of a square with length %f is %f\n", sideLength, area);


  return 0;
}
