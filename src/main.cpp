//
// Created by raz on 24/12/16.
//

#include "sockets/Udp.h"
#include "Point.h"
#include "sockets/Connection.h"

using namespace std;

int main(int argc, char *argv[]) {
    Connection con(new Udp(0, atoi(argv[2])));
    con.initialize();
    Point *p;

    cout << "Hello, from client" << endl;

    con.sendString("hello");
    p = con.receive<Point>();
    cout << *p << endl;

    delete p;
    return 0;
}