#include <iostream>

enum class status{

    connected,
    disconnected,
    unkown,
};

enum class userPermission{

    unkown,
    user,
    admin,

};

int main()
{

    status s1 = status::unkown;
    userPermission s2 = userPermission::unkown;

    switch(s1){

        case status::unkown:{

            std::cout << "unkown status\n";
            break;
        }

        case status::connected:{

            std::cout << "connected status\n";
            break;

        }

        case status::disconnected:{

            std::cout << "disconnectd status \n";
            break;
        }

    }

    return 0;
}
