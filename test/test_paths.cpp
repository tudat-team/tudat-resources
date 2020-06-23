//
// Created by ggarrett on 22-06-20.
//

#include <iostream>
#include <tudat/resource/resource.h>

int main(){
    std::cout << " tudat::paths::get_resources_path()         " << tudat::paths::get_resources_path()                  << std::endl;
    std::cout << " tudat::paths::get_resources_path()         " << tudat::paths::get_resources_path().c_str() << std::endl;
    std::cout << " tudat::paths::get_atmosphere_tables_path() " << tudat::paths::get_atmosphere_tables_path() << std::endl;
    std::cout << " tudat::paths::get_atmosphere_tables_path() " << tudat::paths::get_atmosphere_tables_path().c_str() << std::endl;
    std::cout << " tudat::paths::get_earth_orientation_path() " << tudat::paths::get_earth_orientation_path() << std::endl;
    std::cout << " tudat::paths::get_earth_orientation_path() " << tudat::paths::get_earth_orientation_path().c_str() << std::endl;
    std::cout << " tudat::paths::get_ephemeris_path()         " << tudat::paths::get_ephemeris_path()         << std::endl;
    std::cout << " tudat::paths::get_ephemeris_path()         " << tudat::paths::get_ephemeris_path().c_str()         << std::endl;
    std::cout << " tudat::paths::get_gravity_models_path()    " << tudat::paths::get_gravity_models_path()    << std::endl;
    std::cout << " tudat::paths::get_gravity_models_path()    " << tudat::paths::get_gravity_models_path().c_str()    << std::endl;
    std::cout << " tudat::paths::get_quadrature_path()        " << tudat::paths::get_quadrature_path()        << std::endl;
    std::cout << " tudat::paths::get_quadrature_path()        " << tudat::paths::get_quadrature_path().c_str()        << std::endl;
    std::cout << " tudat::paths::get_space_weather_path()     " << tudat::paths::get_space_weather_path()     << std::endl;
    std::cout << " tudat::paths::get_space_weather_path()     " << tudat::paths::get_space_weather_path().c_str()     << std::endl;
    std::cout << " tudat::paths::get_spice_kernels_path()     " << tudat::paths::get_spice_kernels_path()     << std::endl;
    std::cout << " tudat::paths::get_spice_kernels_path()     " << tudat::paths::get_spice_kernels_path().c_str()     << std::endl;
    return 0;
}