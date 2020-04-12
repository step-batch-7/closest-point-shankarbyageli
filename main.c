#include<stdio.h>
#include "point.h"

int main(void)
{
  Point organism = {97, 27};
  Point targets[] = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}};
  Point closest_food_location = {0, 0};
  get_closest_food(targets, sizeof(targets) / sizeof(Point), organism, &closest_food_location);
  printf("Closest Food: {%d, %d}\n", closest_food_location.x, closest_food_location.y);
  return 0;
}
