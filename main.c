#include "INCLUDES/basique_mlx_needed.h"

void    mon_prog(void)
{
    //create_empty_button(100, 100, 300, 300);
    /*     char    letter;
    int     a;
    int     j;

    a = 0;
    j = 0;
    for (int i = 0; i < 26; i++)
    {
        letter = (97 + i);
        if (i % 10 == 0)
        {
            a += (i * 10);
            j = i;
        }
        display_string(build_string(&letter, 10, 0xFFFFFF, RECT_COLOR), 10 + a, 50 + (75 * (i - j)));
    } */

    create_empty_button(0, 0, 1800, 500);
    //build_string("abcdefghijklnopqrstu", 10, WHITE, RECT_COLOR);
    build_string("mv", 10, WHITE, RECT_COLOR);
    //display_string(l, 10, 400);
}


int main(void)
{
    void    *mlx_ptr = mlx_init();
    void    *win_ptr = mlx_new_window(mlx_ptr, 1800, 900, "Custom Text");

    update_mlx_infos(mlx_ptr, win_ptr, NULL);
    init_all_min_letters();

    mon_prog();

    mlx_hook(win_ptr, 2, 1L << 0, &handle_keypress, NULL);
    mlx_loop(mlx_ptr);
    return (0);
}