/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liamprior <liamprior@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:44:23 by liamprior         #+#    #+#             */
/*   Updated: 2022/09/12 01:30:51 by liamprior        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "bus.h"
#include "person.h"
#include "train.h"

int main() {
    Person p1("Randy", 70);
    Person p2("Legolas", 65);
    Person p3("Rick", 70);
    Person p4("Morty", 192);
    Cargo c1("Oil", 10);
    Cargo c2("Gold", 13000);
    Cargo c3("Horses", 400);
    Cargo c4("Jordans", 99);
    Bus<Person> bus;
    Train<Cargo> train;
    bus.LoadOne(p1);
    bus.LoadOne(p2);
    bus.LoadOne(p3);
    bus.LoadOne(p4);
    train.LoadOne(c1);
    train.LoadOne(c2);
    train.LoadOne(c3);
    train.LoadOne(c4);
    std::cout << "There are " << bus.ReportBack() << " people on the bus." << std::endl;
    std::cout << "There are " << train.ReportBack() << " items on the train." << std::endl;
    std::cout << std::endl;
    std::cout << "The people on the bus are loaded by height as follows: ";
    bus.LookInBus();
    std::cout << std::endl;
    std::cout << "The bus has a total fare of $" << bus.AddTotalFare() << std::endl;
    int newFare;
    std::cout << "Set the new fare: ";
    std::cin >> newFare;
    bus.ChangeFare(newFare);
    std::cout << "The bus has a total fare of $" << bus.AddTotalFare() << std::endl;
    std::cout << std::endl;
    bus.Move();
    train.Move();
    std::cout << std::endl;
    std::cout << "The train is carrying " << train.TotalWeight() << " kilograms." << std::endl;
    train.UnloadOne(c4);
    std::cout << "The train is carrying " << train.TotalWeight() << " kilograms." << std::endl;
    std::cout << "There are " << train.ReportBack() << " items on the train." << std::endl;

    return 0;
}