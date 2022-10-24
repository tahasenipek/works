/*Define a method hello that returns "Hello, Name!" to a given name, or says Hello, World! if name is not given (or passed as an empty String).

Assuming that name is a String and it checks for user typos to return a name with a first capital letter (Xxxx).

Examples:

* With `name` = "john"  => return "Hello, John!"
* With `name` = "aliCE" => return "Hello, Alice!"
* With `name` not given
  or `name` = ""        => return "Hello, World!"

*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *hello(const char *name) {
  
  int i;
  int d;
  char *a;
  char *b;
  char c[] = {'H', 'e', 'l', 'l', 'o', ',' ,' '};
  
  d = 0;
  i = 0;
  if (!name[i] || !name)
    return(strdup("Hello, World!"));
    while(name[i])
  {
      i++;
  }
    a = (char *)malloc(sizeof(char) * i + 8);
    if(!a)
      return(0);
    i = 1;
    if (name[0] >= 97)
        a[0] = (int)name[0] - 32;
    else
      a[0] = name[0];
    while (((int)name[i] >= 65 && (int)name[i] <= 90 ) && i <= 4)
    {
        a[i] =(int)name[i] + 32;
        i++;
    }
    while(name[i])
    {
      a[i] = name[i];
      i++;
    }
    a[i] = '!';
    a[++i] = '\0';
  b =(char *)malloc(1 * i + 7);
  if(!b)
    return(0);
  i = 0;
  while(d < 7)
  {
      b[d] = c[d];
      d++;
  }
  while (a[i] !='\0')
    b[d++] = a[i++];
  b[d] = '\0';
  free(a);
  return (b);
}
