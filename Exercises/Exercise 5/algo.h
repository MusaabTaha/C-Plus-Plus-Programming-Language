#pragma once

#include <algorithm>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <vector>
#include "utils.h"



namespace mystd
{

using Iterator = std::vector<std::int32_t>::iterator;

bool equal(Iterator first1, Iterator last1, Iterator first2)
{

    for(;first1 != last1; ++first1, ++first2)
    {
        if(*first1 != *first2)
        {

            return false;

        }

    }

    return true;

}

Iterator fill_n(Iterator first, std::size_t count, const std::int32_t &value)
{

    for(std::size_t i = 0; i<count; ++i){

        *first = value;
        ++first;
    }

    return first;

}

void iota(Iterator first, Iterator last, std::int32_t value)
{

    while(first != last)
    {

        *first = value;
        ++first;
        ++value:

    }

}

Iterator copy(Iterator first, Iterator last, Iterator d_first)
{

    while(first != last)
    {

        *d_first = *first;
        ++first;
        ++d_first;

    }

    return d_first;

}

std::int32_t accumulate(Iterator first, Iterator last, std::int32_t init)
{

    auto out = std::int32_t{0U};
    out = init;

    while (first != last)
    {

        out += *first;
        ++first;
    }

    return out;

}

}
