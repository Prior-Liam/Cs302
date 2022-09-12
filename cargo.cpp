/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cargo.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liamprior <liamprior@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:55:03 by liamprior         #+#    #+#             */
/*   Updated: 2022/09/12 01:23:14 by liamprior        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cargo.h"

int Cargo::operator+(const Cargo& rhs) const {
    return (weight_ + rhs.weight_);
}

bool Cargo::operator==(const Cargo& rhs) const {
    return weight_ == rhs.weight_;
}