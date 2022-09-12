/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bus.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liamprior <liamprior@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:19:14 by liamprior         #+#    #+#             */
/*   Updated: 2022/09/12 01:31:20 by liamprior        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUS_H
#define BUS_H

#include "transporter.h"
#include <algorithm>

template <typename ItemType>
class Bus: public Transporter<ItemType>{

    public:
        Bus(){}
        ~Bus(){}

        void Move() override;//reached the next stop
        void LoadOne(ItemType) override;
        void UnloadOne(ItemType) override;
        void EmptyAll() override;
        int ReportBack() override;

        double AddTotalFare();
        void ChangeFare(double);
        void LookInBus();
    private:
        double fare_ = 1;
        std::vector<ItemType> Items_;
};

#include "bus.cpp"
#endif
