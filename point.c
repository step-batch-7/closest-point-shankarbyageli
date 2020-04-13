#include<math.h>
#include "point.h"

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location) {
  int closest_food_index = 0;
  float distance, closest_distance = DISTANCE_BETWEEN(food_points[0], current_location);

  for(int i = 1; i < points_length; i++) {
    distance = DISTANCE_BETWEEN(food_points[i], current_location);
    if(distance < closest_distance) {
      closest_distance = distance;
      closest_food_index = i;
    }
  }
  *closest_food_location = food_points[closest_food_index];
}
