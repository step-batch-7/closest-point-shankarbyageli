#include<math.h>
#include "point.h"

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location) {
  int closest_food_index = 0;
  float distance = DISTANCE_BETWEEN(food_points[0], current_location);
  for(int i = 1; i < points_length; i++) {
    float current_distance = DISTANCE_BETWEEN(food_points[i], current_location);
    if(current_distance < distance) {
      distance = current_distance;
      closest_food_index = i;
    }
  }
  *closest_food_location = food_points[closest_food_index];
}
