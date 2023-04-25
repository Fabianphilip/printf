#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size >= UINT_MAX / nmemb || nmemb >= UINT_MAX / size)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = '\0';
	return ((void *)ptr);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to reallocate memory
 * @old_size: size of allocated memory
 * @new_size: new size of memory block
 *
 * Return: void pointer to new allocation of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (!ptr)
	{
		new_ptr = _calloc(new_size, sizeof(char));
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);

	new_ptr = _calloc(new_size, sizeof(char));
	if (!new_ptr)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = ((char *)ptr)[i];
	free(ptr);

	return ((void *)new_ptr);
}
