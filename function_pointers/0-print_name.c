#include "function_pointers.h"
/**
<<<<<<< HEAD
* print_name - Prints a name using the function passed as a pointer
* @name: The name of the person
* @f: A pointer to a function that takes a char pointer as argument
*
* Return: Nothing
*/
	void print_name(char *name, void (*f)(char *))
{
	if (name && f)
=======
 * print_name - Prints a name
 * @name: The name to prints
 * @f: Pointer to function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
>>>>>>> e1a8d2b0a8ea742d08c863dc6f62170f09baea37
		f(name);
}
