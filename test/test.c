#include <avr/io.h>

volatile const __flash char text0[] = "Hello world!";

int main() {
  char foo = text0[0];
  (void)foo;
  while (1);
  return 0;
}
