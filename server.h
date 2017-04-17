#include "common.h"
#include <list>

#ifndef _CHAT_SERVER_H_
#define _CHAT_SERVER_H_

class Server
{
private:
    fd_t server_;
    std::list<fd_t> clients_;
public:
    int start();
    void acceptConnection();
    void recvMessage();
    void sendMessage(fd_t client, char *message);
    void sendMessageToAll(char *message, int except = 0);
    Server();
    ~Server();
};

#endif
