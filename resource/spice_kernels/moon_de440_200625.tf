KPL/FK

   SPICE Lunar Reference Frame Specification Kernel
   =====================================================================

   Original file name:                   moon_de440_200625.tf
   Creation date:                        2021 June 25 16:00
   Created by:                           Nat Bachman  (NAIF/JPL)

   Version description:

      This frame kernel contains lunar frame specifications compatible
      with the current lunar binary PCK file

         moon_pa_de440_200625.bpc

      The above PCK contains lunar orientation data from the DE440 JPL
      Planetary Ephemeris.


   Frames Specified by this Kernel
   =====================================================================

   Frame Name                  Relative to        Type   Frame ID
   -------------------------   -----------------  -----  --------
   MOON_PA_DE440               ICRF/J2000         PCK    31008
   MOON_ME_DE440_ME421         MOON_PA_DE440      FIXED  31009

   This kernel does not map the default frame aliases

       MOON_PA
       MOON_ME

   to frames based on the DE440 ephemeris.


   Introduction
   =====================================================================

   This kernel specifies lunar body-fixed reference frames for use by
   SPICE-based application software. These reference frames are
   associated with high-accuracy lunar orientation data provided by the
   JPL Solar System Dynamics Group's planetary ephemerides (both
   trajectory and lunar orientation data are stored in these ephemeris
   files). These ephemerides have names of the form DEnnn (DE stands
   for "developmental ephemeris").

   The frames specified by this kernel are realizations of two different
   lunar reference systems:

      Principal Axes (PA) system
      --------------------------
      The axes of this system are defined by the principal axes of the
      Moon. Due to the nature of the Moon's orbit and rotation, the Z
      axis of this system does not coincide with the Moon's mean spin
      axis, nor does the X axis coincide with the mean direction to the
      center of the Earth (in contrast with the ME system defined
      below).

      Lunar principal axes frames realizing the lunar PA system and
      specified by this kernel are associated with JPL planetary
      ephemerides. Each new JPL planetary ephemeris can (but does not
      necessarily) define a new realization of the lunar principal axes
      system. Coordinates of lunar surface features expressed in lunar
      PA frames can change slightly from one lunar ephemeris version to
      the next.


      Mean Earth/Polar Axis (ME) system
      ---------------------------------
      The Lunar mean Earth/polar axis system is a lunar body-fixed
      reference system used in the IAU/IAG Working Group Report [2] to
      describe the orientation of the Moon relative to the ICRF frame.
      The +Z axis of this system is aligned with the north mean lunar
      rotation axis, while the prime meridian contains the mean Earth
      direction.

      This system is also sometimes called the "mean Earth/mean
      rotation axis" system or "mean Earth" system.

      The mean directions used to define the axes of a mean Earth/polar
      axis reference frame realizing the lunar ME system and specified
      by this kernel are associated with a given JPL planetary
      ephemeris version. The rotation between the mean Earth frame for
      a given ephemeris version and the associated principal axes frame
      is given by a constant matrix (see [1]).

   For the current JPL planetary ephemeris (DE), this kernel includes
   specifications of the corresponding principal axes and mean Earth/
   polar axis frames. The names of these frames are

      MOON_PA_DE440

   and

      MOON_ME_DE440_ME421

   The rotation from the former to the latter frame is described in [1]
   as the rotation "from the DE440 PA frame to DE421 MER" (mean Earth/mean
   rotation)" reference frame.


   Regarding Use of the ICRF in SPICE
   ==================================

   The IERS Celestial Reference Frame (ICRF) is offset from the J2000
   reference frame (equivalent to EME 2000) by a small rotation:  the
   J2000 pole offset magnitude is about 18 milliarcseconds (mas) and
   the equinox offset magnitude is approximately 78 milliarcseconds
   (see [3]).

   Certain SPICE data products use the frame label "J2000" for data
   that actually are referenced to the ICRF. This is the case for SPK
   files containing JPL version DE4nn planetary ephemerides, for
   orientation data from generic text PCKs, and for binary PCKs,
   including binary lunar PCKs used in conjunction with this lunar
   frame kernel.

   Consequently, when SPICE computes the rotation between the "J2000"
   frame and either of the lunar PA or ME frames, what's computed is
   actually the rotation between the ICRF and the respective lunar
   frame.

   Similarly, when SPICE is used to compute the state given by a JPL DE
   planetary ephemeris SPK file of one ephemeris object relative to
   another (for example, the state of the Moon with respect to the
   Earth), expressed relative to the frame "J2000," the state is
   actually expressed relative to the ICRF.

   Because SPICE is already using the ICRF, users normally need not
   use the J2000-to-ICRF transformation to adjust results computed
   with SPICE.


   Comparison of DE440 and DE421 Lunar Reference Frames
   ====================================================

   Differences in the orientation of the frames

       MOON_ME_DE421
       MOON_ME_DE440_ME421

   were measured as follows:

      For the time range

            1900 JAN 01 00:00:00.000 TDB (-3155716800.0000 TDB seconds)
         to 2051 JAN 01 00:00:00.000 TDB ( 1609416000.0000 TDB seconds)

      the maximum rotation angle, taken over ~1M samples, was

         5.8204420784597E-07 radians

      This corresponds to a displacement of slightly over 1 m on a great
      circle.

      For the time range

             2000 JAN 01 00:00:00.000 TDB (-43200.000000000 TDB seconds)
         to  2040 JAN 01 00:00:00.000 TDB ( 1262260800.0000 TDB seconds)

      the maximum rotation angle, taken over ~1M samples, was

         3.0709840342771E-07 radians

      This corresponds to a displacement of approximately 53.4 cm on a
      great circle.


   References
   =====================================================================

   [1]  Ryan S. Park, et al, "The JPL Planetary and Lunar Ephemerides
        DE440 and DE441," The Astronomical Journal, Volume 161, Number 3.
        2021 AJ 161 105.

        URL:

           https://iopscience.iop.org/article/10.3847/1538-3881/abd414/meta

   [2]  Archinal, B.A., A'Hearn, M.F., Bowell, E., Conrad, A.,
        Consolmagno, G.J., Courtin, R., Fukushima, T.,
        Hestroffer, D., Hilton, J.L., Krasinsky, G.A.,
        Neumann, G., Oberst, J., Seidelmann, P.K., Stooke, P.,
        Tholen, D.J., Thomas, P.C., and Williams, I.P.
        "Report of the IAU Working Group on Cartographic Coordinates
        and Rotational Elements: 2009."

   [3]  Roncoli, R. (2005). "Lunar Constants and Models Document,"
        JPL D-32296.


   Frame Specifications
   =====================================================================

      MOON_PA_DE440 is the name of the lunar principal axes reference
      frame defined by JPL's DE440 planetary ephemeris.

   \begindata

      FRAME_MOON_PA_DE440           = 31008
      FRAME_31008_NAME              = 'MOON_PA_DE440'
      FRAME_31008_CLASS             = 2
      FRAME_31008_CLASS_ID          = 31008
      FRAME_31008_CENTER            = 301

   \begintext

      MOON_ME_DE440_ME421 is the name of a reference frame defined by a
      constant rotational offset from the DE440 principal axes frame,
      such that the frame is closely aligned with the DE421 lunar mean
      Earth/polar axis frame.

      Rotation angles are from [1]. The angles and axis sequence shown
      below represent the inverse of the cited rotation; hence the
      angles are negated and the sequence is reversed.

   \begindata

      FRAME_MOON_ME_DE440_ME421        = 31009
      FRAME_31009_NAME                 = 'MOON_ME_DE440_ME421'
      FRAME_31009_CLASS                = 4
      FRAME_31009_CLASS_ID             = 31009
      FRAME_31009_CENTER               = 301

      TKFRAME_31009_SPEC            = 'ANGLES'
      TKFRAME_31009_RELATIVE        = 'MOON_PA_DE440'
      TKFRAME_31009_ANGLES          = (   67.8526   78.6944   0.2785  )
      TKFRAME_31009_AXES            = (   3,        2,        1       )
      TKFRAME_31009_UNITS           = 'ARCSECONDS'

   \begintext

   =====================================================================
   End of kernel
