#include <iostream>

int main()
{
    for(std::uint32_t i = 0U; i < 3U;i++){ //post incrementing known positive number of iterations

        std::cout << i << "\n";

    }

     for(std::uint32_t i = 0U; i < 3U;++i){ //pre incrementing known positive number of iterations

        std::cout << i << "\n";

    }

    for(std::uint32_t i = 3U; i > 0U;i--){ //post decrementing knwon postitive number of iterations

        std::cout << i << "\n";

    }

        for(std::uint32_t i = 3U; i > 0U;--i){ //pre decrementing knwon postitive number of iterations

        std::cout << i << "\n";

    }

    std::uint32_t i = 0;

    while(true){

        if(i>3){

            std::cout << "while loop broke !\n";
            break;
        }

        std::cout << "i value =" << i << "\n";
        i++;
    }

    i = 0;
    
    do{

        if(i>3){


            std::cout << "do while loop broken !\n";
            break;
        }

        std::cout << "i value = " << i << "\n";
        i++;

    }while(true);

    return 0;

}
