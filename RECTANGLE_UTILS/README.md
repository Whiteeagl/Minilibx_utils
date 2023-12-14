# How to draw a rectangle using our tools ?
Great question ! I got you. We will use draw_line, in coordination with another small function.
## Well, show me !
Alright alright.
You shall draw a rectangle this way :

    draw_line(init_rectangle(50,  100,  300,  200),  img,  0x00FF00);
### What the hell is draw_line ?
Please, read the README for this function, and come back, I'll be waiting.

## init_rectangle in more details :

So, this function's prototype is :

    t_line  init_rectangle(int  x1,  int  y1,  int  x2,  int  y2)
It's as simple as it sounds :

 - x1, y1	: These are to coordinates of your upper-left corner.
 - x2, y2	: These are to coordinates of your lower-right corner.
 
 ### But, why the hell does it return a t_line ?
 
**Again, great question ! Let me explain :** 

To simplify the amount of code you have to understand (and the amount I have to write), I choose to use the draw_line function. To draw the rectangle you wanted, I set the first point (of the line) to the middle of the left side of the rectangle, and the second one in the middle of the right side of the rectangle. I then set the width to the one of your rectangle, and we're done !
### I want to store a rectangle,  and not print it right away, how may I do it ?

No problem ! Just declare a t_line variable :

	t_line	rectangle;

(i know it sounds weird)

And store the return value of init_rectangle :

	rectangle = init_rectangle(50,  100,  300,  200);

As you probably guessed, because of the... Norm ! You, unfortunately, can't store colour directly in your variable, as it would break the four arguments limit. You will need to choose it when printing your rectangle :

	draw_line(rectangle,  img,  0x00FF00);
