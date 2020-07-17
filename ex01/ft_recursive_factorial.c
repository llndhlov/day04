/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llndhlov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:34:45 by llndhlov          #+#    #+#             */
/*   Updated: 2020/07/16 17:42:33 by llndhlov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if(nb <= 1)
	{
		return (1);
	}
    else
	{
		return nb * ft_recursive_factorial(nb -1);

	}
}
