#include <IdGenerator.hpp>

int IdGenerator::counter = 0;

int IdGenerator::getUniqueId(){
    counter++;
    return counter;
}