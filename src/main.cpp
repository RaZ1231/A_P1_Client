//
// Created by raz on 24/12/16.
//

#include "sockets/Udp.h"
#include <unistd.h>

using namespace std;

int main(int argc, char *argv[]) {
    std::cout << "Hello, from client" << std::endl;

    cout << argv[2] << endl;
    Udp udp(0, atoi(argv[2]));
    udp.initialize();

    char buffer[1024];
    udp.sendData("hello");
    udp.reciveData(buffer, sizeof(buffer));
    cout << buffer << endl;


    return 0;
}