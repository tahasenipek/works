#include <unistd.h>

int counters_ft(char *str, int c)
{
  int i = 5;
  
  while (c--)
  {
  if (*str++)
    write(1, "1",1);
  if (i-- == 0)
    write(1, "bitti", 5);
  }
  return (i);
} 


int main() {
  counters_ft("123123123", 7);
  return 0;
}
