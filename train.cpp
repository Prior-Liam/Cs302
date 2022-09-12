/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liamprior <liamprior@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:35:09 by liamprior         #+#    #+#             */
/*   Updated: 2022/09/12 01:24:40 by liamprior        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "train.h"

template <class ItemType>
void Train<ItemType>::Move(){
    std::cout << "we have reached the next destination" << std::endl;
}

template <class ItemType>
void Train<ItemType>::LoadOne(ItemType item) {
    items_.push_back(item);
    return;
}

template <class ItemType>
void Train<ItemType>::UnloadOne(ItemType item) {
    typename std::vector<ItemType>::iterator unloadee = std::find(items_.begin(), items_.end(), item);
        if (unloadee != items_.end())
            items_.erase(unloadee);
    return;
}

template <class ItemType>
void Train<ItemType>::EmptyAll(void) {
    items_.clear();
    return;
}

template <class ItemType>
int Train<ItemType>::ReportBack(void) {
    return (items_.size());
}

template <class ItemType>
int Train<ItemType>::TotalWeight() {
    Cargo temp("temp", 0);
    for(int i = 0; i < items_.size(); i++)
        temp.setWeight(temp + items_.at(i));
    return temp.getWeight();
}
