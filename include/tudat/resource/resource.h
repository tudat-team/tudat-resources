#ifndef TUDATRESOURCES_RESOURCE_H
#define TUDATRESOURCES_RESOURCE_H

#include <tudat/resource/resource.h>
#include <tudat/resource/config.hpp>

#define RESOURCES_FOLDER std::string(Tudat_RESOURCE_DIR)
#define ATMOSPHERE_TABLES_RELATIVE_TO_RESOURCES "/atmosphere_tables/"
#define EARTH_ORIENTATION_RELATIVE_TO_RESOURCES "/earth_orientation/"
#define EPHEMERIS_RELATIVE_TO_RESOURCES "/ephemeris/"
#define GRAVITY_MODELS_RELATIVE_TO_RESOURCES "/gravity_models/"
#define QUADRATURE_RELATIVE_TO_RESOURCES "/quadrature/"
#define SPACE_WEATHER_RELATIVE_TO_RESOURCES "/space_weather/"
#define SPICE_KERNELS_RELATIVE_TO_RESOURCES "/spice_kernels/"

namespace tudat {
    namespace paths {

        static inline std::string get_resources_path() {
            return RESOURCES_FOLDER + "/";
        }

        static inline std::string get_atmosphere_tables_path() {
            return RESOURCES_FOLDER + ATMOSPHERE_TABLES_RELATIVE_TO_RESOURCES;
        }

        static inline std::string get_earth_orientation_path() {
            return RESOURCES_FOLDER + EARTH_ORIENTATION_RELATIVE_TO_RESOURCES;
        }

        static inline std::string get_ephemeris_path() {
            return RESOURCES_FOLDER + EPHEMERIS_RELATIVE_TO_RESOURCES;
        }

        static inline std::string get_gravity_models_path() {
            return RESOURCES_FOLDER + GRAVITY_MODELS_RELATIVE_TO_RESOURCES;
        }

        static inline std::string get_quadrature_path() {
            return RESOURCES_FOLDER + QUADRATURE_RELATIVE_TO_RESOURCES;
        }

        static inline std::string get_space_weather_path() {
            return RESOURCES_FOLDER + SPACE_WEATHER_RELATIVE_TO_RESOURCES;
        }

        static inline std::string get_spice_kernels_path() {
            return RESOURCES_FOLDER + SPICE_KERNELS_RELATIVE_TO_RESOURCES;
        }

    }
}

#endif //TUDATRESOURCES_RESOURCE_H
