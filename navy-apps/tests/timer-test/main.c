#include <stdio.h>

int main() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  printf("ms = %d\n", tv.tv_sec * 1000);

  int ms = 500;
  // while (1) {
  //   while ((tv.tv_sec * 1000 + tv.tv_usec / 1000) < ms) {
  //     gettimeofday(&tv, NULL);
  //   }
  //   ms += 500;
     printf("ms = %d\n", ms);
  // }
}
