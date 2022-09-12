/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transporter.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liamprior <liamprior@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:01:43 by liamprior         #+#    #+#             */
/*   Updated: 2022/09/11 23:32:08 by liamprior        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRANSPORTERFORHW_H
#define TRANSPORTERFORHW_H

#include <vector>
#include <iostream>

template <class ItemType>
class Transporter {
    public:
        Transporter(){}
        virtual ~Transporter(){}

        virtual void Move() = 0;
        virtual void LoadOne(ItemType) = 0;
        virtual void UnloadOne(ItemType) = 0;
        virtual void EmptyAll() = 0;
        virtual int ReportBack() = 0;
};

#include "transporter.cpp"
#endif