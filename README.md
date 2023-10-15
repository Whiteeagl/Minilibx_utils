# MiniLibX Text Renderer

This repository contains a set of functions for rendering and displaying custom text on the MiniLibX graphics library. It offers the flexibility to customize text content, scale, and color. 

## Table of Contents
- [Functions](#functions)
  - [1. `void *build_string(char *string, int scale, int color);`](#1-void-build_stringchar-string-int-scale-int-color)
  - [2. `void display_string(void *img, int x, int y);`](#2-void-display_stringvoid-img-int-x-int-y)

## Functions

### 1. `void *build_string(char *string, int scale, int color);`

**Description:** This function creates an image with custom text to be displayed on the MiniLibX window.

**Parameters:**
- `string` (char *): The string to display on the screen.
- `scale` (int): The scaling factor for the text.
- `color` (int): The color for the text.

**Example Usage:**
```c
void *text_image = build_string("looks like plain text buddy", 2, 0x00FF00); // Creates an image with green text.
```

### 2. `void display_string(void *img, int x, int y)`;

**Description:** This function displays an image containing text at a specified position on the MiniLibX window.

**Parameters:** 

- `img` (void *): The image containing the text to display.
- `x` (int): The X-coordinate for the image's position on the window.
- `y` (int): The Y-coordinate for the image's position on the window.

**Example Usage:**
```c
    void	tests_here(void)
    {
        void	*test;

        test = build_string("this is a text i guess", 4, 0xFFFFFF);
        display_string(test, 40, 100);
    }
```

Enjoy !

## Implementation Status

| Feature | Status |
| ------- | --------------- |
| Lowercase letters | :white_check_mark: Implemented |
| Uppercase letters | In Progress |
| Numbers | In Progress |
| Special characters | In Progress |
