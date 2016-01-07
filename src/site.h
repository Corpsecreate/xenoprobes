//
// Created by preed on 1/6/16.
//

#ifndef XENOPROBES_SITE_H
#define XENOPROBES_SITE_H

#include <vector>

class Site {
public:
    Site(int name) : name_(name) {};

    int getName() const;
    int getProduction() const;
    void setProduction(int);
    int getRevenue() const;
    void setRevenue(int);
    int getSightseeing() const;
    void setSightseeing(int);

    void addNeighbor(int);
    std::vector<int> getNeighbors() const;
    void addOre(int);
    std::vector<int> getOres() const;

private:
    int name_;
    int production_ = 0;
    int revenue_ = 0;
    int sightseeing_ = 0;
    std::vector<int> neighbors_;
    std::vector<int> ores_;
};


#endif //XENOPROBES_SITE_H
