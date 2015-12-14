/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 16:08:24 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/14 11:01:53 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

# define BUFF_SIZE 64

typedef struct		s_tetri
{
	int				size_x;
	int				size_y;
	char			pattern[4][4];
	int				pos;
	struct s_tetri *next;
}					t_tetri;

int		get_next_line(int const fd, char **line);
int		is_pattern_valid(char **pattern);
char	*twoD_to_oneD(char **pattern);
int		get_offset(char *pattern);
int		is_pattern_valid_dotsharp(char *pattern);
int		is_pattern_valid_O(char *pattern, int offset);
int		is_pattern_valid_I(char *pattern, int offset);
int		is_pattern_valid_L(char *pattern, int offset);
int		is_pattern_valid_J(char *pattern, int offset);
int		is_pattern_valid_T(char *pattern, int offset);
int		is_pattern_valid_S(char *pattern, int offset);
int		is_pattern_valid_Z(char *pattern, int offset);
void	push_tetrimino_back(t_tetri **first, char **pattern);
t_tetri		*new_tetrimino(char **pattern, int pos);

#endif
