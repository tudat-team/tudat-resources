The file bias.dat is a table of position and proper motion corrections
for 26 star catalogs.
The corrections are provided for both right ascension (RA) and
declination (DEC).

For each of these catalogs the file contains four columns:
- dRA, position correction in RA*cos(DEC) at epoch J2000.0 [arcsec];
- dDEC, position correction in DEC at epoch J2000.0 [arcsec];
- pmRA, proper motion correction in RA*cos(DEC) [mas/yr];
- pmDEC, proper motion correction in DEC [mas/yr].

Each row corresponds to different tiles in the sky.
The algorithm to subdivide the sky in equal area tiles is described
by Gorsky et al. 2005 (http://adsabs.harvard.edu/abs/2005ApJ...622..759G).

As a reference, for each tile the file tiles.dat gives the coordinates RA and DEC of
the tile center. The tiles correspond to those in file bias.dat, 
i.e., the rows are sorted in the same way.

To correct the astrometric asteroid observations, the following
should be subtracted from the observed RA and DEC:

( dRA + (t - 2000.0)*pmRA/1000 ) / cos(DEC)
 dDEC + (t - 2000.0)*pmDEC/1000

where t is the observation epoch (in years) and dRA, dDEC, pmRA, and
pmDEC can be obtained from bias.dat according to the star catalog
used and the tile containing the astrometric position. 

For more details see Eggl et al. (2020, Icarus).

UPDATE, March 1, 2023
The start catalog code for catalog UCAC-5 has been corrected from W to
Y in the comments and headers of the debiasing data file.  W is
currently the catalog code assigned to Gaia-DR3 and was incorrectly
assigned to UCAC-5 by the MPC at the time this debiasing scheme was
developed.
