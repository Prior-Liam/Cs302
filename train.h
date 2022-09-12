/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liamprior <liamprior@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:50:23 by liamprior         #+#    #+#             */
/*   Updated: 2022/09/12 01:13:59 by liamprior        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRAINSFORHW_H
#define TRAINSFORHW_H

#include "transporter.h"
#include "cargo.h"


template <class ItemType>
class Train: public Transporter<ItemType> {
    public:
        Train(){}
        ~Train(){}

        void Move() override;
        void LoadOne(ItemType) override;
        void UnloadOne(ItemType) override;
        void EmptyAll() override;
        int ReportBack() override;

        int TotalWeight();
    private:
        int totalWeight_ = 0;
        std::vector<ItemType> items_;
};

#include "train.cpp"

#endif