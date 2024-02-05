/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <event@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:02:40 by event             #+#    #+#             */
/*   Updated: 2023/03/27 17:53:16 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#define EXIT_SUCCESS 0
#define Dodo "* LOUD AND UNBEARABLE FEEDBACK NOISE *"
 #define endl "\n"

void    print_all(char **tab)
{
    int x = 1;

    while(tab[x])
    {
        std::cout << tab[x];
        x++;
    }
    std::cout << endl;
}

int main(int ac, char **av)
{
    int x = 1 , y = 0;

    if (ac == 1)
        std::cout << Dodo << endl;
    else
    {
        while (av[x])
        {
            av[x][y] = toupper(av[x][y]);
            y++;
            if (!av[x][y])
            {
                y = 0;
                x++;
            }
        }
        print_all(av);
    }
    return (EXIT_SUCCESS);
}
