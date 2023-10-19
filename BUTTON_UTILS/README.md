# README - create_button Function

## Introduction
This README provides information about the `create_button` function, its purpose, and how to use it in your project. The `create_button` function is a versatile tool that allows you to generate interactive buttons in your MiniLibX-based graphical applications.

## Description
The `create_button` function is designed to simplify the process of creating interactive buttons in your MiniLibX applications. These buttons can be used for a variety of purposes, such as triggering actions, changing the state of your application, or responding to user input.

## Function Signature
```c
void create_button(int x, int y, int width, int height);
```

## Parameters

- `int x` : The x-coordinate of the top-left corner of the button.
- `int y` : The y-coordinate of the top-left corner of the button.
- `int width` : The width of the button.
- `int height` : The height of the button.

## Usage

To create and display an interactive button using the create_button function, follow these steps:

1. Include MiniLibX in your project.
2. Call `create_button` with the appropriate parameters to generate the button:

```c
create_button(100, 200, 120, 40);
```

3. You can customize the behavior of the button as you see fit. You can obtain the ID of the clicked button using the following design pattern: `get_collide_origin()->id`. You have the option to modify an included function in the program called 'handle_mouse_click(int button)' or create your own.


```c
int	handle_mouse_click(int button)
{
	if (button == 1)
	{
		if (is_mouse_inside_rect())
			printf("Clic on bouton (ID : %d)\n", get_collide_origin()->id);
	if (get_collide_origin())
	{
		if (get_collide_origin()->id == 2)
			printf("Hey ! I'm a button.\n");
		}
	}
	return (0);
}
```

Enjoy !
