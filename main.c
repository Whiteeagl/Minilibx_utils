#include "INCLUDES/basique_mlx_needed.h"

void	mon_prog(void)
{
	create_empty_button(0, 0, 1800, 900);
	void *t = build_string("ab", 0, WHITE, RED);
	display_string(t, 100, 100);
}

int main(void)
{
	void	*mlx_ptr = mlx_init();
	void	*win_ptr = mlx_new_window(mlx_ptr, 1800, 900, "Custom Text");

	update_mlx_infos(mlx_ptr, win_ptr, NULL);
	init_all_min_letters();
	init_all_special_cara();

	mon_prog();

	mlx_hook(win_ptr, 2, 1L << 0, &handle_keypress, NULL);
	mlx_loop(mlx_ptr);
	return (0);
}
