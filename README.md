# libft
> This project is about coding a C library.

## Part 1 - libc functions
This part is about Implementing the same behaviors as the original functions using their manual as a reference.

```
• isalpha           • toupper   
• isdigit           • tolower
• isalnum           • strchr
• isascii           • strrchr
• isprint           • strncmp
• strlen            • memchr
• memset            • memcmp
• bzero             • strnstr
• memcpy            • atoi
• memmove 
• strlcpy           
• strlcat           

```

In order to implement the two following functions, you will use malloc():

```
• calloc
• strdup

```

##  Part 2 - Additional functions
In this second part, you must develop a set of functions that are either not in the libc, or that are part of it but in a different form.

| Function name | Description |
| :------: | --------- |
| ft_substr | Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’. |
| ft_strjoin | Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’. |
| ft_strtrim | Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string. |
| ft_split | Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer. |
| ft_itoa | Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled. |
| ft_strmapi | Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’. |
| ft_striteri | Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary. |
| ft_putchar_fd | Outputs the character ’c’ to the given file descriptor. |
| ft_putstr_fd | Outputs the string ’s’ to the given file descriptor. |
| ft_putendl_fd | Outputs the string ’s’ to the given file descriptor followed by a newline. |
| ft_putnbr_fd | Outputs the integer ’n’ to the given file descriptor. |

### Bonus Part
> Working with singly linked lists.

| Function name | Description |
| :------: | --------- |
| ft_lstnew | Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL. |
| ft_lstadd_front | Adds the node ’new’ at the beginning of the list. |
| ft_lstsize | Counts the number of nodes in a list. |
| ft_lstlast | Returns the last node of the list. |
| ft_lstadd_back | Adds the node ’new’ at the end of the list. |
| ft_lstdelone | Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed. |
| ft_lstclear | Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL. |
| ft_lstiter | Iterates the list ’lst’ and applies the function ’f’ on the content of each node. |
| ft_lstmap | Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed. |

# Resources





























