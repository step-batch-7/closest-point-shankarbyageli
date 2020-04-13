#include<math.h>
#include "point.h"

float distance_between(Point p1, Point p2) {
  return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location) {
  float distance, closest_distance = distance_between(food_points[0], current_location);;
  *closest_food_location = food_points[0];

  LOOP(1, points_length) {
    distance = distance_between(food_points[index], current_location);
    if(distance < closest_distance) {
      closest_distance = distance;
      *closest_food_location = food_points[index];
    }
  }
}
