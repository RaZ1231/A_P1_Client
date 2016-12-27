//
// Created by raz on 14/11/16.
//

#ifndef PROJECT_POINT_H
#define PROJECT_POINT_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/tokenizer.hpp>
#include <boost/algorithm/string/predicate.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/assign/list_of.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/iostreams/device/back_inserter.hpp>
#include <boost/iostreams/stream.hpp>
#include <boost/archive/binary_oarchive.hpp>
#include <boost/archive/binary_iarchive.hpp>

using namespace std;
using namespace boost::archive;
//std::stringstream ss;

/**
 * Point represent a 2-dimensional point.
 * it has x axes and a y axes integer values.
 */
class Point {
private:
    int x;
    int y;
public:
    Point(int x = 0, int y = 0);

    virtual ~Point();

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    //double distance(Point p);

    Point operator+(const Point &p) const;

    Point operator-(const Point &p) const;

    bool operator==(const Point &rhs) const;

    bool operator!=(const Point &rhs) const;

    bool operator<(const Point &rhs) const;

    bool operator>(const Point &rhs) const;

    bool operator<=(const Point &rhs) const;

    bool operator>=(const Point &rhs) const;

    friend istream &operator>>(istream &os, Point &point);

    friend ostream &operator<<(ostream &os, const Point &point);

    friend class boost::serialization::access;

    template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
        ar & x;
        ar & y;
    }
};


#endif //PROJECT_POINT_H
