# MiniLibX Text Renderer


This repository contains a set of functions for rendering and displaying custom text on the MiniLibX graphics library. It offers the flexibility to customize text content, scale, and color.


## Important

In order to use the functions below, it is necessary to initialize all the dependencies required for the proper functioning of the functions.

1. Before calling any of the functions below, add this line in your main function :

```c
init_all_text_stuff();
```

## Table of Contents

- [Functions](#functions)

- [1. `void *build_string(char *string, int scale, int color);`](#1-void-build_stringchar-string-int-scale-int-color)

- [2. `void display_string(void *img, int x, int y, void *window_ptr);`](#2-void-display_stringvoid-img-int-x-int-y)


## Functions

### 1. `void *build_string(char *string, int scale, int color);`

  

**Description:** This function creates an image with custom text to be displayed on the MiniLibX window.

  

**Parameters:**

-  `char *string` : The string to display on the screen.

-  `int scale` : The scaling factor for the text.

-  `int color` : The color for the text.

  

**Example Usage:**

```c
void *text_image = build_string("looks like plain text buddy", 2, 0x00FF00, 0x000000); // Creates an image with green text on a black background.
```

  

### 2. `void display_string(void *img, int x, int y, void *window_ptr)`;


**Description:** This function displays an image containing text at a specified position on the MiniLibX window.


**Parameters:**


-  `void *img` : The image containing the text to display.

-  `int x` : The X-coordinate for the image's position on the window.

-  `int y` : The Y-coordinate for the image's position on the window.

-  `void *window_ptr` : the address of the window on which you want to display text.


**Example Usage:**

```c

void  tests_here(void)
{
	void *test;

	test = build_string("this is a text i guess 123", 4, 0xFFFFFF, 0x000000);
	display_string(test, 40, 100, get_win_ptr());

	test = build_string("use macro amigo", 10, COLOR_WHITE, COLOR_RED); // You can use our color macro for better usage.
	display_string(test, 100, 200, get_win_ptr());
}

```

## To prevent memory leaks

1. If you want to clean up all the images created to prevent memory leaks, call the `free_text_addr_list()` function when necessary.

**Example Usage:**

```c
free_text_addr_list();
```

Enjoy !

## Implementation Status

  
| Feature  | Status |
| -------| --------------- |
| Lowercase letters | :white_check_mark: Implemented |
| Uppercase letters | In Progress |
| Numbers | :white_check_mark: Implemented |
| Special characters | In Progress |