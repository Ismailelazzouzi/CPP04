#pragma once

#include "Polymorphism.hpp"

class Brain
{
public:
    std::string ideas[100];
    Brain();
    Brain(std::string (&initideas)[100]);
    Brain(const Brain &other);
    Brain& operator=(const Brain& other);
    ~Brain();
};