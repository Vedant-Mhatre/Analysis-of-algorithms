    #include <stdio.h>
     
    void sort(int array[], int n)
    {
    
    	int c,d,position,swap;
    	for (c = n-1; c > 0; c--)
      {
        position = c;
       
        for (d = c - 1; d > -1; d--)
        {
          if (array[position] > array[d])
            position = d;
        }
        if (position != c)
        {
          swap = array[c];
          array[c] = array[position];
          array[position] = swap;
        }
      }
    } 
     
     
    int main()
    {
      int array[100], n, c;
     
      printf("Enter number of elements\n");
      scanf("%d", &n);
     
      printf("Enter %d integers\n", n);
     
      for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
        
      sort(array,n);
            
      printf("Sorted list in descending order:\n");
     
      for (c = 0; c < n; c++)
        printf("%d\n", array[c]);
     
      return 0;
    }
