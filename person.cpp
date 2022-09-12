/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   person.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liamprior <liamprior@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:36:53 by liamprior         #+#    #+#             */
/*   Updated: 2022/09/11 15:43:19 by liamprior        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "person.h"

Person::Person(std::string givenName, int givenHeight) {
    name_ = givenName;
    height_ = givenHeight;
}

bool Person::operator==(const Person& rhs) const {
    return height_ == rhs.height_;
}

bool Person::operator<(const Person& rhs) const {
    return height_ < rhs.height_;
}
