#include <stdio.h>
#include <math.h>

int areaOfCircle(int smaller, int larger) 
{
  int solution = (smaller * larger);
  return solution;
}


int main(int argc, char* argv[])
{
  
  if (argc != 3)
  {
    printf("%s : expected 2 args, please enter two integers\n", argv[0]);
    return 1;
  }

  
 int smaller;
  
  int found = sscanf(argv[1], "%d", &smaller);
  if (found != 1)
  {
    printf("first arg is not an integer, enter two ints\n");
    return 1;
  }
 int larger;
  found = sscanf(argv[2], "%d", &larger);
  if (found != 1)
  {
    printf("second arg is not an integer, enter two ints\n");
    return 1;
  }


int solution = areaOfCircle(smaller, larger);
printf("The solution is %d\n", solution);

}

