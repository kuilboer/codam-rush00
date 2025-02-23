/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush01.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: okuilboe <okuilboe@student.codam.com>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/22 11:46:40 by okuilboe      #+#    #+#                 */
/*   Updated: 2025/02/23 14:19:20 by okuilboe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);
void	create_shape(int char_count, int line_count);
void	assemble_line(int x, char first_char, char body_char, char last_char);
void	write_error(char *error_message);

/*     rush takes the dimensions of the requested shape.                      */
/*         x = character count (shape width).                                 */
/*         y = number of lines (shape length).                                */
void	rush(int x, int y)
{
	if (!((x < 1) || y < 1))
	{
		create_shape(x, y);
	}
	else
	{
		write_error("error 1: wrong input, The shape dimensions must be > 0 \n");
	}
}

