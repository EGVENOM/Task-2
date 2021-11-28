#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define size 100000
int arr[size];
void initialize (int arr[])
{
  srand (time (NULL));
  for (int x = 0; x < size; x++)
    {
      arr[x] = rand () % 100000 + 1;
    }
}
void quick_sort (int start, int end)
{
  if (start >= end)
    return;
  int key = start, x = start + 1, z = end;

  while (x <= z)
    {
      while (x <= end && arr[x] <= arr[key])
	{
	  x++;
	}
      while (z > start && arr[z] >= arr[key])
	{
	  z--;
    }
      if (x > z)
	{
	  swap (&arr[key], &arr[z]);
	}
      else
	{
	  swap (&arr[x], &arr[z]);
	}
    }
  quick_sort (start, z - 1);
  quick_sort (z + 1, end);
  printf("arr[%d] = %d\t", x, arr[x]);
}
void insertion_sort (int arra[], int n)
{
  int in, out;
  for (out = 1; out < n; out++)
    {
      double temp = arra[out];
      in = out;
      while (in > 0 && arra[in - 1] >= temp)
	{
	  arra[in] = arra[in - 1];
	  --in;
	}
      arra[in] = temp;
    }
      	printf("arra[%d] = %d\t", in, arra[in]);
  printf ("The array is sorted by insertion sort method in %u seconds\n",
	  clock ());
}

void
swap (int *one, int *two)
{
  int temp = *one;
  *one = *two;
  *two = temp;
}
int
main ()
{
  int array[size];
  srand (time (NULL));
  for (int x = 0; x < size; x++)
    {
      array[x] = rand () % 100000 + 1;
    }
  printf ("Array of 100,000 random numbers is initialized\n");
  insertion_sort (array, size);
  initialize (arr);
  quick_sort (0, size - 1);
  printf ("The array is sorted by quick sort method in %u seconds", clock ());
  return 0;
}

