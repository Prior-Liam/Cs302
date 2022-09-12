/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   person.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liamprior <liamprior@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:45:15 by liamprior         #+#    #+#             */
/*   Updated: 2022/09/11 22:16:57 by liamprior        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
    public:
        Person() {}
        Person(std::string name, int height);
        ~Person() {}
        int getHeight() {
            return height_;
}
        bool operator==(const Person& rhs) const;
        bool operator<(const Person& rhs) const;
    private:
        int height_;
        std::string name_;
};


#endif