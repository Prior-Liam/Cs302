/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buses.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liamprior <liamprior@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:19:14 by liamprior         #+#    #+#             */
/*   Updated: 2022/09/07 23:39:43 by liamprior        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUSESFORHW_H
#define BUSESFORHW_H

#include "transporter.h"

template <class ItemType>
class Bus: public Transporter<ItemType>{
//i will need to overload + here because adding feet and inches isnt just one var
    public:
        Bus(){}
        ~Bus(){}
        void Move();//reached the next stop
        void LoadOne();
        void UnloadOne();
        void EmptyAll();
        void ReportBack();
        void SortPassengers(std::vector<ItemType>);//sorts from shortest to tallest
        void AddTotalFare();//may need to pass pointer of total but ill be good either way
        void ChangeFare();//this will only  update the fare for new people after cahnge.
        // // }
        // // float operator+(const Items_&) {//this will be for adding the weights together which means going through
        //     // totalWeight_ = lhs->weight_ + Items_.weight_;
        //     // return (totalWeight_);
        // // }
    private:
        double totalFare_;
        // std::vector<ItemType> Items_;//this will be a vector of mainly people but cargo may also be stored.
};


#endif