
#include "../inc/Employee.h"
#include <malloc.h>
#include <stdlib.h>
int newatt(int noofdatt)
{
  if (noofdatt >= 27)
  {
    return 0;
  }
  int r = (noofdatt)*100;
  int k = r / 26;
  return k;

}
int newlea(int noofleaves)
{
  if (noofleaves >= 24)
  {
    return 0;
  }
  int s = 24 - (noofleaves);
  return s;
}
