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
#include <string>

//#define MAX_PREFIX_LEN 256
//#define MAX_RESOURCE_LEN strlen("/resource")
//#define MAX_RELATIVE_LEN 20

namespace tudat {
namespace paths {

static inline std::string get_home_directory() {
  // https://stackoverflow.com/questions/2552416/how-can-i-find-the-users-home-dir-in-a-cross-platform-manner-using-c
  const static volatile char A = 'a';// All this is to prevent reverse engineering
  char *HomeDirectory;
#ifdef UNIX
  char *HomeDirectory = getenv((char[]){A - 25, A - 18, A - 20, A - 28, 0});
#elif defined(WIN32)
  char *HomeDirectory = getenv((char[]){A - 25, A - 18, A - 20, A - 28, A - 29, A - 15, A - 24, A - 11, A - 28, 0});
  const char *Homepath = getenv((char[]){A - 25, A - 18, A - 20, A - 28, A - 17, A - 32, A - 13, A - 25, 0});
  HomeDirectory = malloc(strlen(HomeDirectory) + strlen(Homepath) + 1);
  strcat(HomeDirectory, Homepath);
#endif
  return HomeDirectory;
}

static inline std::string get_prefix_path() {
  return std::string(TUDAT_RESOURCE_PREFIX).c_str();

  //            char path[MAX_PREFIX_LEN];
  //            return std::string(strcpy(path, PREFIX)).c_str();
}

static inline std::string get_hidden_path() {
  return std::string(get_home_directory() + "/.tudat").c_str();
}

static inline std::string get_resources_path() {
  return std::string(get_hidden_path() + RESOURCE).c_str();

  //            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN];
  //            strcpy(path, get_prefix_path().c_str());
  //            return std::string(strcat(path, RESOURCE)).c_str();
}

static inline std::string get_atmosphere_tables_path() {
  return std::string(get_hidden_path() + RESOURCE + ATMOSPHERE_TABLES).c_str();

  //            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
  //            strcpy(path, get_resources_path().c_str());
  //            return std::string(strcat(path, ATMOSPHERE_TABLES)).c_str();
}

static inline std::string get_earth_orientation_path() {
  return std::string(get_hidden_path() + RESOURCE + EARTH_ORIENTATION).c_str();

  //            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
  //            strcpy(path, get_resources_path().c_str());
  //            return std::string(strcat(path, EARTH_ORIENTATION)).c_str();
}

static inline std::string get_ephemeris_path() {
  return std::string(get_hidden_path() + RESOURCE + EPHEMERIS).c_str();

  //            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
  //            strcpy(path, get_resources_path().c_str());
  //            return std::string(strcat(path, EPHEMERIS)).c_str();
}

static inline std::string get_gravity_models_path() {
  return std::string(get_hidden_path() + RESOURCE + GRAVITY_MODELS).c_str();

  //            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
  //            strcpy(path, get_resources_path().c_str());
  //            return std::string(strcat(path, GRAVITY_MODELS)).c_str();
}

static inline std::string get_quadrature_path() {
  return std::string(get_hidden_path() + RESOURCE + QUADRATURE).c_str();

  //            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
  //            strcpy(path, get_resources_path().c_str());
  //            return std::string(strcat(path, QUADRATURE)).c_str();
}

static inline std::string get_space_weather_path() {
  return std::string(get_hidden_path() + RESOURCE + SPACE_WEATHER).c_str();

  //            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
  //            strcpy(path, get_resources_path().c_str());
  //            return std::string(strcat(path, SPACE_WEATHER)).c_str();
}

static inline std::string get_spice_kernels_path() {
  return std::string(get_hidden_path() + RESOURCE + SPICE_KERNELS).c_str();

  //            char path[MAX_PREFIX_LEN + MAX_RESOURCE_LEN + MAX_RELATIVE_LEN];
  //            strcpy(path, get_resources_path().c_str());
  //            return std::string(strcat(path, SPICE_KERNELS)).c_str();
}

}// namespace paths
}// namespace tudat

#endif// TUDATRESOURCES_RESOURCE_H
