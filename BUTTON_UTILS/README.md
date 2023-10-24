# Button Creation Tools README

  

This toolkit is designed to enable the creation of multiple buttons using the MinilibX library.

  ## Table of Contents
- [Getting Started](#getting-started)
- [Scale Value](#scale-value)
- [Create your first button image](#creating-a-button-image)
- [display your button](#displaying-a-button-image)
- [Leaks? Never heard of 'em.](#to-prevent-memory-leaks)

## Getting Started

 
Before you begin, it is essential to implement the `init_all_button_stuff()` function in your main program. Without this step, the tools will not function correctly.


```c
int  main(void)
{
	// mlx init stuff (init, new_window ...)
	// here our function to update mlx info, essential too. (Main README)

	init_all_button_stuff();
	// your program

	// mlx hook stuff
	return (0);
}
```

## Scale value

To set a font enlargement factor and consequently increase or decrease the button size, use the `update_scale_value(your_scale)` before creating a button.

**Signature**

```c
void  update_scale_value(int  new_scale)
``` 

**Example**

```c
void  mon_prog(void)
{
	void  *button_1;
	
	update_scale_value(10); // 10 is an example. (it's a big one)
	button_1 =  create_button("my button", COLOR_BLACK, COLOR_GREEN, NULL);  // We will see this right after
}
```

## Creating a Button Image

To create a button's image, you can utilize the `create_button` function, which has the following signature:

```c
void *create_button(char *string, int  fg_color, int  bg_color, t_event_function event_func)
```

**Parameters**

The `create_button` function allows you to generate a button's image with the following parameters:
  
-  `char *string`: The title of the button.
-  `int fg_color`: The text color for the button's title.
-  `int bg_color`: The background color of the button.
-  `t_event_function event_func`: A pointer to an event handling function.

  
In this context, `t_event_function` is defined as:

```c
typedef  void (*t_event_function)(void)
```

**Example**

Here's an example of how to use this function:

```c
void  a(void)
{
	write_msg("I'm a button.\n");
}

void  mon_prog(void)
{
	void *button_1;

	button_1 = create_button("my button", COLOR_BLACK, COLOR_GREEN, a); // You can use our color macro for better usage.
}
```  

**Note**

You can use NULL for the function pointer, replacing the 'a' function here, to assign no event.

## Displaying a Button Image

To display the button image, you need to employ the `button_place` function, which is defined as follows:

```c
void  button_place(void *button, int  x, int  y)
```

**Parameters**


The `button_place` function takes the following parameters:

-  `void *button`: The button's image created with the "create_button" function.
-  `int x`: The X-coordinate for the button's position.
-  `int y`: The Y-coordinate for the button's position.


**Example**

Here's how you can use this function to place and display a button:

```c
void  a(void)
{
	write_msg("I'm a button.\n");
} 

void  mon_prog(void)
{
	void *button_1;

	button_1 = create_button("my button", COLOR_BLACK, COLOR_GREEN, a);
	button_place(button_1, 100, 100);
}
```

## To prevent memory leaks

  

To prevent memory leaks, you can use the function: `free_all_button_stuff()`

Note that when the `init_all_button_stuff()` function is called, the text elements are also initialized.

  

- To release all allocated memory related to buttons and text,
use `free_all_button_stuff()` function in combination with the `free_all_text_stuff()` one.

```c
if (my_button_program_terminates)
{
	free_all_button_stuff();
	free_all_text_stuff();
}
```

- Alternatively, you can directly release all allocations from our library with the 
`handle_window_close("Your end message.");` function, which will also close the window.
Feel free to modify it as needed.

  

```c
if (my_button_program_terminates)
	handle_window_close("Your end message.");
```

  
  

## Your turn to play !

  

By following these guidelines, you can efficiently create and display buttons in your MinilibX-based projects.

Happy coding !