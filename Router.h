//
// Created by Sebas Garzon on 10/11/2021.
//

#ifndef PROGRA_III_V2_ROUTER_H
#define PROGRA_III_V2_ROUTER_H

#include <string>
#include <ostream>

class Router{
public:
    Router(const std::string &id, const std::string &name, const std::string &creator, int capacity, int year);

    const std::string &getId() const;

    void setId(const std::string &id);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getCreator() const;

    void setCreator(const std::string &creator);

    int getCapacity() const;

    void setCapacity(int capacity);

    int getYear() const;

    void setYear(int year);

    friend std::ostream &operator<<(std::ostream &os, const Router &router);


private:
    std::string id;
    std::string name;
    std::string creator;
    int capacity;
    int year;
};


#endif //PROGRA_III_V2_ROUTER_H
