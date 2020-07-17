/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llndhlov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:18:34 by llndhlov          #+#    #+#             */
/*   Updated: 2020/07/16 17:44:02 by llndhlov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	if(power > 0)
	{
		int res;
		res = 1;
		while(power !=0)
		{
			res = res * nb;
			power--;
		}
	    	return(res);	
	}	
	if(power == 0)
	{
		return(1);
	}
	else
	{
		return(0);
	}	
}
