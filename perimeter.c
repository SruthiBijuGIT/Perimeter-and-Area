#include<stdio.h>
#include<math.h>
int rect_area(int l,int w)
{
     int area;
     area=l*w;
     return area;
}
int rect_perimeter(int l,int w)
{
     int p;
     p=2*(l+w);
     return p;
}
float circle_area(int r)
{
     float area;
     area=3.14*r*r;
     return area;}
float circle_perimeter(int r)
{
     float p;
     p=2*3.14*r;
     return p;
}     
int triangle_area(int a,int b,int c)     
{
     float area,s;
      s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
     return area;}    
int triangle_perimeter(int a,int b,int c)
{
     int p;
     p=a+b+c;
     return p;
}      
int main()
{
     int a,b,x,y,r,e,f,g,j,h;
     float p,q,i;
     //rectangle
     printf("Enter Length and breadth of Rectangle : ");
     scanf("%d%d",&a,&b);
     x=rect_area(a,b); 
     y=rect_perimeter(a,b);
     printf("\nArea of Rectangle = %d\n\nPerimeter of Rectangle = %d",x,y);
    //circle
      printf("\nEnter radius of the circle : ");
     scanf("%d",&r);
     p=circle_area(r);
     q=circle_perimeter(r); 
     printf("\nArea of circle= %.2f\n\nPerimeter of circle = %.2f",p,q);
     //triangle
      printf("\nEnter the 3 sides of the triangle: ");
       scanf("%d%d%d",&e,&f,&g);
       
     i=triangle_area(e,f,g); 
     j=triangle_perimeter(e,f,g); 
     printf("\nArea of triangle = %.2f\n\nPerimeter of triangle = %d",i,j);
     return 0;
}
