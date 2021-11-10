//
// Created by Sebas Garzon on 10/11/2021.
//

#include <string>
#include "Router.h"

Router::Router(const std::__cxx11::basic_string<char> &id, const std::__cxx11::basic_string<char> &name,
               const std::__cxx11::basic_string<char> &creator, int capacity, int year) : id(id), name(name),
                                                                                          creator(creator),
                                                                                          capacity(capacity),
                                                                                          year(year) {}

const std::string &Router::getId() const {
    return id;
}

void Router::setId(const std::string &id) {
    Router::id = id;
}

const std::string &Router::getName() const {
    return name;
}

void Router::setName(const std::string &name) {
    Router::name = name;
}

const std::string &Router::getCreator() const {
    return creator;
}

void Router::setCreator(const std::string &creator) {
    Router::creator = creator;
}

int Router::getCapacity() const {
    return capacity;
}

void Router::setCapacity(int capacity) {
    Router::capacity = capacity;
}

int Router::getYear() const {
    return year;
}

void Router::setYear(int year) {
    Router::year = year;
}

std::ostream &operator<<(std::ostream &os, const Router &router) {
    os << "id: " << router.id << " name: " << router.name << " creator: " << router.creator << " capacity: "
       << router.capacity << " year: " << router.year;
    return os;
}
