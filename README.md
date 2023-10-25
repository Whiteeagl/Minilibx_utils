# MiniLibX 42 Tools

  

Welcome to the MiniLibX 42 Tools repository ! Here, you'll find a collection of utilities and resources specifically crafted to enhance your experience with MiniLibX while maintaining compliance with the 42 norm.

## Table of Contents

  

- [Introduction](#introduction)

- [Features](#features)

- [Usage](#usage)

- [Important](#important)

## Introduction

  

Working with MiniLibX can be both exciting (no) and challenging. This repository is your go-to resource for tackling those challenges while ensuring your projects meet the strict norms imposed by the 42 school. Our tools are designed to streamline common tasks, making your MiniLibX journey smoother and more efficient.

## Features

  

-  **MiniLibX Helpers**: Simplify common MiniLibX operations and functions.

-  **Norm-Friendly**: All tools are developed to conform to the 42 norm.

-  **Documentation**: Detailed guides and examples for each tool.

-  **Active Development**: Only when ideas are present 😉

### What tools are up ? Which ones are you working on ?

[x] = Usable.

  

- [x] Button_utils : A tool to create... Buttons. - `Still in development.`

- [x] Line_utils : A tool to create... Lines. - ` Finished.`

- [x] Text_utils : - A tool to create... Text. - `Still in active development`

- [x] Rectangle_utils : A tool to create... Rectangle. - `Finished.`

- [ ] Circle_utils : A tool to create... Circles. - `Upcoming`

- [ ] Triangle_utils : A tool to create... Triangles. - `Upcoming`

And more to come...

## Important

We have provided functions that must be implemented before using any tool in this repository.
Otherwise, the tools will not function properly.

So, in the main, under the MinilibX setup, implement the following function :

**Signature**
```c
void  update_mlx_infos(void  *mlx_ptr, void  *win_ptr, void  *img_ptr)
```
**Parameters**

 ***Mandatory*** :
- `void  *mlx_ptr` : Take the value as the pointer to mlx_init()
- `void  *win_ptr` : Take the value as the pointer to the first mlx window

 ***Optional*** :
 (Depends on the specific needs of the tool in question.)
 (You will be informed if the tool requires this value or not.)
- `void  *img_ptr` : Take a pointer to the first created image*

**Example**
```c
#include  "INCLUDES/basique_mlx_needed.h"

int  main(void)
{
	void  *mlx_ptr;
	void  *win_ptr;
	
	mlx_ptr = mlx_init();
	if (!mlx_ptr)
		return (handle_window_close_err_alloc(A_FUNC), 1);
		
	win_ptr = mlx_new_window(mlx_ptr, 1000, 800, "Custom Text");
	if (!win_ptr)
		return (handle_window_close_err_alloc(A_FUNC), 2);

	update_mlx_infos(mlx_ptr, win_ptr, NULL); // Very important.

	mlx_hook(mlx_ptr);
	return (0);
}
```

**More information about `update_mlx_infos()` and its utilities.**

This function serves as the foundation for this set of tools. Here, it is used to retrieve basic information about MinilibX. Other supplementary functions are associated with it, such as :

1. `get_wlx_ptr()`  :  Used to retrieve the pointer to mlx_init() at any point in time.
```c
void  *get_mlx_ptr(void);
```

2. `get_win_ptr()`  :  Used to retrieve the pointer to the first MLX window.
```c
void  *get_win_ptr(void);
```
3. `free_mlx_infos()` :  Used to free all the memory allocated by `get_mlx_ptr()` and `get_win_ptr()`.
```c
void  free_mlx_infos(void);
```
**Here is an example of usage :**

```c
#include  "INCLUDES/basique_mlx_needed.h"

// Func test to show you how to call get_mlx_ptr() and get_win_ptr().
void	my_prog(void)
{
	void	*test;
	
	// An simple example (Not very useful)
	printf("mlx_ptr : %p\n", get_mlx_ptr());
	printf("mlx_win_ptr : %p\n", get_win_ptr());
	
	// A better example (More useful)
	test = mlx_new_image(get_mlx_ptr(), 100, 100);
	if (!test)
		handle_window_close_err_alloc(A_FUNC);
	mlx_destroy_image(get_mlx_ptr(), test);
}

int  main(void)
{
	void  *mlx_ptr;
	void  *win_ptr;
	
	mlx_ptr = mlx_init();
	if (!mlx_ptr)
		return (handle_window_close_err_alloc(A_FUNC), 1);
		
	win_ptr = mlx_new_window(mlx_ptr, 1000, 800, "Custom Text");
	if (!win_ptr)
		return (handle_window_close_err_alloc(A_FUNC), 2);
		
	update_mlx_infos(mlx_ptr, win_ptr, NULL); // Very important.
	my_prog();

	mlx_hook(win_ptr, 2, 1L << 0, &handle_keypress, NULL);
	mlx_loop(mlx_ptr);
	return (0);
}
```

- Here, the function `handle_window_close_err_alloc(A_FUNC)` is used to write an error message to the standard output when a memory allocation has failed.

- The macro `A_FUNC` returns the currently visited function using the existing `__FUNCTION__` macro in C.

This function will then free all memory allocated by our library and close the mlx window.

- A similar function can be used for other errors or when everything goes well. It's the `handle_window_close("Your msg")` function.

***Here are their signatures for each of them*** :
```c
void  handle_window_close(char  *msg);
void  handle_window_close_err_alloc(const char  *function_name);
```

 - You can look at their code and modify it as much as you want.

Well, that's all there is to know about this section !

## Usage

  

To get started, explore the individual tools in this repository and refer to their respective documentation. You'll find step-by-step guides, code examples, and explanations to help you harness the power of MiniLibX while maintaining norm compliance.

  

Enjoy !

  

### [Found a problem ? A bug ? Please, report it to us.](https://github.com/Whiteeagl/Minilibx_utils/issues)

  

## Compatibility with 42 norm

  

This toolset is designed to be compatible with the 42 norm. The current compatibility version is :

- norminette 3.3.51.

Check your version using the command :

```
norminette --version
```

## Creators

  

tboldrin && rciaze