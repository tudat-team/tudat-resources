#ifndef TUDATRESOURCES_RESOURCE_H
#define TUDATRESOURCES_RESOURCE_H

#include <tudat/resource/config.hpp>
#include <boost/filesystem.hpp>

#define ATMOSPHERE_TABLES "/atmosphere_tables"
#define EARTH_ORIENTATION "/earth_orientation"
#define EPHEMERIS "/ephemeris"
#define GRAVITY_MODELS "/gravity_models"
#define QUADRATURE "/quadrature"
#define SPACE_WEATHER "/space_weather"
#define SPICE_KERNELS "/spice_kernels"

#define MAX_PREFIX_LEN 255
#define MAX_RESOURCE_LEN 10
#define MAX_RELATIVE_LEN 20

namespace fs = boost::filesystem;

namespace tudat {
    namespace paths {

        static inline fs::path get_resources_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN];
            strcpy(path, Tudat_RESOURCE_DIR);
            return fs::path(path);
        }

        static inline fs::path get_atmosphere_tables_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
            strcpy(path, get_resources_path().c_str());
            strcat(path, ATMOSPHERE_TABLES);
            return fs::path(path);
        }

        static inline fs::path get_earth_orientation_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
            strcpy(path, get_resources_path().c_str());
            strcat(path, EARTH_ORIENTATION);
            return fs::path(path);
        }

        static inline fs::path get_ephemeris_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
            strcpy(path, get_resources_path().c_str());
            strcat(path, EPHEMERIS);
            return fs::path(path);
        }

        static inline fs::path get_gravity_models_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
            strcpy(path, get_resources_path().c_str());
            strcat(path, GRAVITY_MODELS);
            return fs::path(path);
        }

        static inline fs::path get_quadrature_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
            strcpy(path, get_resources_path().c_str());
            strcat(path, QUADRATURE);
            return fs::path(path);
        }

        static inline fs::path get_space_weather_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
            strcpy(path, get_resources_path().c_str());
            strcat(path, SPACE_WEATHER);
            return fs::path(path);
        }

        static inline fs::path get_spice_kernels_path() {
            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
            strcpy(path, get_resources_path().c_str());
            strcat(path, SPICE_KERNELS);
            return fs::path(path);
        }

    }
}

#endif //TUDATRESOURCES_RESOURCE_H
