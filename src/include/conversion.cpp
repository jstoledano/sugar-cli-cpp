#include <cmath>
#include <conversion.hpp>


int mmol_to_mgdl(double mmol)
{
    return static_cast<int> (std::round(mmol * MMOL_TO_MDL_FACTOR));
}