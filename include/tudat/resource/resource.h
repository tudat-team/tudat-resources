#ifndef TUDATRESOURCES_RESOURCE_H
#define TUDATRESOURCES_RESOURCE_H

#include <tudat/resource/config.hpp>
#include <boost/filesystem.hpp>

#define RESOURCES_FOLDER Tudat_RESOURCE_DIR
#define ATMOSPHERE_TABLES "/atmosphere_tables"
#define EARTH_ORIENTATION "/earth_orientation"
#define EPHEMERIS "/ephemeris"
#define GRAVITY_MODELS "/gravity_models"
#define QUADRATURE "/quadrature"
#define SPACE_WEATHER "/space_weather"
#define SPICE_KERNELS "/spice_kernels"


namespace fs = boost::filesystem;


namespace tudat{
        namespace paths {

            static inline fs::path get_resources_path() {
                return fs::path(RESOURCES_FOLDER);
            }

            static inline fs::path get_atmosphere_tables_path() {
                return (get_resources_path() += fs::path(ATMOSPHERE_TABLES));
            }

            static inline fs::path get_earth_orientation_path() {
                return (get_resources_path() += fs::path(EARTH_ORIENTATION));
            }

            static inline fs::path get_ephemeris_path() {
                return (get_resources_path() += fs::path(EPHEMERIS));
            }

            static inline fs::path get_gravity_models_path() {
                return (get_resources_path() += fs::path(GRAVITY_MODELS));
            }

            static inline fs::path get_quadrature_path() {
                return (get_resources_path() += fs::path(QUADRATURE));
            }

            static inline fs::path get_space_weather_path() {
                return (get_resources_path() += fs::path(SPACE_WEATHER));
            }

            static inline fs::path get_spice_kernels_path() {
                return (get_resources_path() += fs::path(SPICE_KERNELS));
            }

        }
}

#endif //TUDATRESOURCES_RESOURCE_H
