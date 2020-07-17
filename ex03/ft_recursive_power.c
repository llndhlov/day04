/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llndhlov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:32:42 by llndhlov          #+#    #+#             */
/*   Updated: 2020/07/16 17:44:54 by llndhlov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	int res;
	res = 1;

	if(power == 0)
	{
		return(1);
	}	
	if(power < 0)
    {
		return(0);
	}
	else
	{
		res = nb * ft_recursive_power(nb, power -1);
	}	
	return res;
}	
