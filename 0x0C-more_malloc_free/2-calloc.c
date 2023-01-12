#include "main.h" 
 #include <stdlib.h> 
 /** 
  * _calloc - allocates memory for an array. 
  * @nmemb: number of elements. 
  * @size: size of bytes. 
  * 
  * Return: pointer to the allocated memory. 
  * if nmemb or size is 0, returns NULL. 
  * if malloc fails, returns NULL. 
  */ 
 void *_calloc(unsigned int nmemb, unsigned int size) 
 { 
         char *p; 
         unsigned int i; 
  
         if (nmemb == 0 || size == 0) 
                 return (NULL); 
  
         p = malloc(nmemb * size); 
  
         if (p == NULL) 
                 return (NULL); 
  
         for (i = 0; i < (nmemb * size); i++) 
                 p[i] = 0; 
  
         return (p); 
 }
cat > 3-array_range.c
#include "main.h" 
 #include <stdlib.h> 
 /** 
  * array_range - creates an array of integers. 
  * @min: minimum value. 
  * @max: maximum value. 
  * 
  * Return: pointer to the newly created array. 
  * if man > mix, returns NULL. 
  * if malloc fails, returns NULL. 
  */ 
 int *array_range(int min, int max) 
 { 
         int *ar; 
         int i; 
  
         if (min > max) 
                 return (NULL); 
  
         ar = malloc(sizeof(*ar) * ((max - min) + 1)); 
  
         if (ar == NULL) 
                 return (NULL); 
  
         for (i = 0; min <= max; i++, min++) 
                 ar[i] = min; 
  
         return (ar); 
 }
cat > 100-realloc.c
#include "main.h" 
 #include <stdlib.h> 
 /** 
  * _realloc - reallocates a memory block. 
  * @ptr: pointer to the memory previously allocated. 
  * @old_size: size, in bytes, of the allocated space of ptr. 
  * @new_size: new size, in bytes, of the new memory block. 
  * 
  * Return: ptr. 
  * if new_size == old_size, returns ptr without changes. 
  * if malloc fails, returns NULL. 
  */ 
 void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) 
 { 
         if (new_size == 0 && ptr != NULL) 
         { 
                 free(ptr); 
                 return (NULL); 
         } 
  
         if (ptr == NULL) 
                 ptr = malloc(new_size); 
  
         if (new_size == old_size) 
                 return (ptr); 
  
         free(ptr); 
         ptr = malloc(new_size); 
  
         return (ptr); 
 }
