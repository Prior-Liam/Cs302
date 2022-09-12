/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bus.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liamprior <liamprior@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:16:52 by liamprior         #+#    #+#             */
/*   Updated: 2022/09/12 00:40:16 by liamprior        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bus.h"

template <class ItemType>
void Bus<ItemType>::Move(){
    std::cout << "We have reached our next stop!" << std::endl;
}

template <class ItemType>
void Bus<ItemType>::LoadOne(ItemType item) {
    if(Items_.size() == 0) {
        Items_.push_back(item);
        return;
    }
    for(int i = 0; i < Items_.size(); i++) {
        if(item == Items_.at(i)) {
            Items_.insert(Items_.begin() + i, item);
            return;
        } else if(item < Items_.at(i)) {
            Items_.insert(Items_.begin() + i, item);
            return;
        } else {
            Items_.push_back(item);
            return;
        }
    }
}

template <class ItemType>
void Bus<ItemType>::UnloadOne(ItemType item) {
    typename std::vector<ItemType>::iterator unloadee = std::find(Items_.begin(), Items_.end(), item);
        if (unloadee != Items_.end())
            Items_.erase(unloadee);
    return;
}

template <class ItemType>
void Bus<ItemType>::EmptyAll(void) {
    Items_.clear();
    return;
}

template <class ItemType>
int Bus<ItemType>::ReportBack(void) {
    return (Items_.size());
}

template <class ItemType>
double Bus<ItemType>::AddTotalFare(void) {
    return (fare_ * Items_.size());
}

template<class ItemType>
void Bus<ItemType>::ChangeFare(double NewFare) {
    fare_ = NewFare;
}

template <class ItemType>
void Bus<ItemType>::LookInBus(void) {
    for(int i = 0; i < Items_.size(); i++) {
        std::cout << Items_.at(i).getHeight() << ", ";
    }
    std::cout << std::endl;
}