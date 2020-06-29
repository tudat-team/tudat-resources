#ifndef TUDATRESOURCES_RESOURCE_H
#define TUDATRESOURCES_RESOURCE_H

#include <tudat/resource/config.hpp>

#define RESOURCE "/resource"
#define ATMOSPHERE_TABLES "/atmosphere_tables"
#define EARTH_ORIENTATION "/earth_orientation"
#define EPHEMERIS "/ephemeris"
#define GRAVITY_MODELS "/gravity_models"
#define QUADRATURE "/quadrature"
#define SPACE_WEATHER "/space_weather"
#define SPICE_KERNELS "/spice_kernels"

#include <cstdlib>
#include <cstring>

#define MAX_PREFIX_LEN 256
#define MAX_RESOURCE_LEN strlen("/resource")
#define MAX_RELATIVE_LEN 20


namespace tudat {
    namespace paths {

        static inline std::string get_prefix_path() {
            char path[MAX_PREFIX_LEN];
            return std::string(strcpy(path, TUDAT_RESOURCE_PREFIX)).c_str();
        }

        static inline std::string get_resources_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN];
            strcpy(path, get_prefix_path().c_str());
            return std::string(strcat(path, RESOURCE)).c_str();
        }

        static inline std::string get_atmosphere_tables_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
            strcpy(path, get_resources_path().c_str());
            return std::string(strcat(path, ATMOSPHERE_TABLES)).c_str();
        }

        static inline std::string get_earth_orientation_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
            strcpy(path, get_resources_path().c_str());
            return std::string(strcat(path, EARTH_ORIENTATION)).c_str();
        }

        static inline std::string get_ephemeris_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
            strcpy(path, get_resources_path().c_str());
            return std::string(strcat(path, EPHEMERIS)).c_str();
        }

        static inline std::string get_gravity_models_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
            strcpy(path, get_resources_path().c_str());
            return std::string(strcat(path, GRAVITY_MODELS)).c_str();
        }

        static inline std::string get_quadrature_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
            strcpy(path, get_resources_path().c_str());
            return std::string(strcat(path, QUADRATURE)).c_str();
        }

        static inline std::string get_space_weather_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
            strcpy(path, get_resources_path().c_str());
            return std::string(strcat(path, SPACE_WEATHER)).c_str();
        }

        static inline std::string get_spice_kernels_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
            strcpy(path, get_resources_path().c_str());
            return std::string(strcat(path, SPICE_KERNELS)).c_str();
        }

    }
}

#endif //TUDATRESOURCES_RESOURCE_H
