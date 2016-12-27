//
// Created by raz on 27/12/16.
//

#include "Connection.h"

Connection::Connection(Socket *socket) : socket(socket) {}

Connection::~Connection() {
    delete socket;
}

int Connection::initialize() {
    return socket->initialize();
}

int Connection::receiveString(char *buffer) {
    return socket->reciveData(buffer, sizeof(buffer));
}

int Connection::sendString(string s) {
    return socket->sendData(s);
}
