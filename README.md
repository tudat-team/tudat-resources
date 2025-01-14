# tudat resources

This repository contains the default files that are downloaded when installing the TU Delft Astrodynamics Toolbox (Tudat) software. 

* For more details on the project, we refer to the [project website](https://docs.tudat.space/en/latest/) and our [project Github page](https://github.com/tudat-team).
* Conda package for this repository are available on [anaconda](anaconda.org/tudat-team/tudat-resources/), which is built through the [tudat-feedstock](https://github.com/tudat-team/tudat-resources-feedstock) on [Azure](https://dev.azure.com/tudat-team/feedstock-builds/_build?definitionId=4)

Part of the contents of this repository are taken from external sources, which are listed below:

- `atmosphere_tables`
	- MCD files: created from data in Mars Climate Database (http://www-mars.lmd.jussieu.fr/mars/access.html)
	- USSA files: created from models in U.S. Atmosphere, (1976). NOAA/NASA/USAF, Washington, DC.
-` earth_deformation`
        - blq files: generated using the service at https://barre.oso.chalmers.se/loading/l.php to compute Earth ground station displacements due to ocean loading
        - Other files: created from Tables 7.3a and 7.3b for the computatuon of corrections to tidal displacement of Earth reference points (IERS 2010 Convenions: chapter 7: https://iers-conventions.obspm.fr/content/chapter7/icc7.pdf)
- `earth_orientation`
	- eopc04_14_IAU2000.62-now.txt: Retrieved from https://datacenter.iers.org/versionMetadata.php?eopc04_14_IAU2000.62-now
	- Other files: created from Tables 5.1a for the computation of polar motion correction due to tidal gravitation on non-rigid Earth, Table 5.1b to libration corrections to Earth UT1 and Table 8.2 and 8.3 for ocean tide corrections to polar motion and UT1 (IERS 2010 Convenions: chapter 5: https://iers-conventions.obspm.fr/content/chapter5/icc5.pdf; IERS 2010 Convenions: chapter 8: https://iers-conventions.obspm.fr/content/chapter8/icc8.pdf)
- `ephemeris`
	- Files from: https://ssd.jpl.nasa.gov/planets/approx_pos.html with terms to compute approximate ephemerides of solar system bodies
- `gravity_models`
	- Earth/GOCO05c.txt: Retrieved from https://dataservices.gfz-potsdam.de/icgem/showshort.php?id=escidoc:1504398
	- Earth/egm96.txt: Retrieved from https://cddis.nasa.gov/926/egm96/getit.html
	- Earth/ggm02c.txt and Earth/ggm02s.txt: Retrieved from https://www2.csr.utexas.edu/grace/gravity/ggm02/
	- Mars/jgmro120d.txt: Retrieved from https://pds-geosciences.wustl.edu/mro/mro-m-rss-5-sdp-v1/mrors_1xxx/data/shadr/
	- Mercury/jgmess_160a_sha.tab: Retrieved from https://pds-geosciences.wustl.edu/messenger/mess-h-rss_mla-5-sdp-v1/messrs_1001/data/shadr/
	- Moon/gggrx_1200l_sha.tab: Retrieved from https://pds-geosciences.wustl.edu/grail/grail-l-lgrs-5-rdr-v1/grail_1001/shadr/
	- Moon/glgm3150.txt and Moon/lpe200.txt: Retrieved from https://pds-geosciences.wustl.edu/lunar/lp-l-rss-5-glgm3_gravity-v1/lp_1201/data/shadr/
	- Venus/shgj180u.a01: Retrieved from https://pds-geosciences.wustl.edu/mgn/mgn-v-rss-5-gravity-l2-v1/mg_5201/gravity/
- `quadrature`
	- Files containing nodes and weights for Gaussian quadrature method
- `space_weather`
	- sw19571001.txt: Retrieved from https://celestrak.org/SpaceData/sw19571001.txt
- `spice_kernels` 
	- NOE kernels: Retrieved from https://ftp.imcce.fr/pub/ephem/satel/NOE/
 	- INPOP kernels: Retrieved from https://ftp.imcce.fr/pub/ephem/planets/
  	- JUICE kernel: Retrieved from https://spiftp.esac.esa.int/data/SPICE/JUICE/kernels/spk/ 
	- All other kernels: Retrieved from https://naif.jpl.nasa.gov/pub/naif/generic_kernels/  
- `star_catalog_biases`
	- debias_2018: Retrieved from https://www.sciencedirect.com/science/article/pii/S0019103519305329
- `station_locations`
	- station_locations: Files containing Earth-fixed positions and velocities of ground stations (glo.pos, glo.vel, ns_codes.dat: radio telescopes)


NOTE, when installing the tudat-resources conda package (https://anaconda.org/tudat-team/tudat-resources, a required dependency of tudat), a number of additional files that are not under version control (since their size is >100 MB) are downloaded. The complete set of files that is downloaded is contained in the ``resources.tar.gz`` of the corresponding pacakge version here: https://github.com/tudat-team/tudat-resources/releases



