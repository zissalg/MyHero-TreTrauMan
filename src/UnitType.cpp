#include "UnitType.h"

void UnitType::readFromFile(std::string fileName)
{
    std::ifstream is(fileName);
    std::string buffer;

    while (is >> buffer)
    {

    }

    is.close();
}
