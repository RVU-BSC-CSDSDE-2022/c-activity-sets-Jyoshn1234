#include<stdio.h>
struct camel{
float radius;
float height;
float length;
float weight;
};

typedef struct camel Camel();

float main(){
  Camel c;
  c=input_camel();
  find_weight(&c);
  output(c);
  return 0;
}

Camel input_camel();
void find_weight(Camel *c);
void output(Camel c);

Camel input_camel(){
  Camel c 
  printf("Enter the radius of the camel");
  scanf("%f",&c.radius);
   printf("Enter the height of the camel");
  scanf("%f",&c.height);
   printf("Enter the length of the camel");
  scanf("%f",&c.length);
  return c;
}

void output(Camel c)
{
  printf("The weight of the camel is %f",t.weight)
}