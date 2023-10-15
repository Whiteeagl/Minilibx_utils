# draw_line Function

draw_line is a simple function developed for the **Mlx42**. Here, I will cover the why and the how.
# Why ?

Well, if you're were, you already know why, but if you don't : the Mlx42 is a "*performant, easy to use, cross-platform, minimal windowing graphics library to create graphical applications without having to work directly with the native windowing framework of the given operating system.*". 
The probem is that you also are entitled to use it if you are attending 42. But this simple library does not allow you to draw lines. Anoying.

## For you ?

If you are looking for a way to familiarize with the Mlx42, and to have a first understanding at how you can use this library, yes.

# How ?

This function uses a simple Bresenham algorithm. This algorithm is fast and one of the simplest, but does not perform antialiasing. 
It basically looks for the nearest pixel for all points in a line.

# How can I use it ?

Great question ! 

### Prototype

> void  draw_line(t_line  line,  void  *img,  int  color)

### Parameters

 1. `t_line line` : This structure contains 5 variables :
```c
typedef  struct  s_line{
int  x1;
int  y1;
int  x2;
int  y2;
int  width;
} t_line;
```
x1, y1, x2, y1 are the two points you want to connect.
width is the width, in pixels, of your line.
 2. `void *img`  This is a simple pointer to the image you want to draw the line on. 
 3. `int color` You guessed it, this is the color of your line.
 ## Usage
 
1 - Include Mlx42 in you project (duh)
2 - call `draw_line` with the appropriate parameters. Please note that we do NOT CHECK YOUR INPUT. Be carefull ! It's easy to make your program crash this way. 
3 - Enjoy,  ig.

# Notes
### Why a strucure ? Why not just pass coordinates of points as is ?

 - Well, because of the norme at 42, we cannot 'send' more than 4 parameters in a function. 
 ### Is it the most optimal implementation of this algorithm ?
 
 - Hell no.
 
### Can I use it in my project ?
 - You can, but we higly recommand you do not. Please, understand everything, and try to reproduce this algorithm. You can only come on top by doing it yourself.

### Is it leak free ?

 - It is.
 ### Does it follow the norm ?
	 
 - It does.

### Really, if it's not that optimized an I can't use it, why ?

 - We know that some things about the Mlx42 are hard to grasp. We just want to provide simple tools to help you understand this obscure library.
