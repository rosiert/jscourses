/*
 *
 * Author: John Samuel
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


#include <stdio.h>

int main() {
  int prix[] = {11, 13, 17, 18};
  float rayon[] = {2.14, 5.16};
  char message[] = "Hi 4ETI!!!";

  int i = 0;
  for (i = 0; i < 4; i ++ ) {
    printf("%d\n", prix[i]);
  }

  for (i = 0; i < 2; i ++ ) {
    printf("%f\n", rayon[i]);
  }

  for (i = 0; i < 3; i ++ ) {
    printf("%c\n", message[i]);
  }
  
  printf("%s\n", message);
}
