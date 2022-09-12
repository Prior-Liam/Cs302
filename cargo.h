/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cargo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liamprior <liamprior@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:45:20 by liamprior         #+#    #+#             */
/*   Updated: 2022/09/12 01:31:26 by liamprior        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CARGOFORHW_H
#define CARGOFORHW_H

#include <string>
class Cargo {
    private:
        std::string type_;
        int weight_;
    public:
        Cargo() {}
        Cargo(std::string type, int weight) {
            weight_ = weight;
            type_ = type;
        }
        ~Cargo() {}
        // bool operator==(const Cargo& rhs) const;
        int operator+(const Cargo& rhs) const;
        bool operator==(const Cargo& rhs) const;
        int getWeight() {
            return weight_;
        }
        void setWeight(int weight) {
            weight_ = weight;
        }
};

#endif