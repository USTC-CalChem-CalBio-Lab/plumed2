/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
These files are semi-automatic translations by f2c from the original netlib LAPACK library.
The source has been modified to (mostly) use modern C formatting, and to get rid of
compiler warnings. Any errors in doing this should be blamed on the GROMACS developers, and
not the reference LAPACK implementation.

The reference LAPACK implementation is available from http://www.netlib.org/lapack 

LAPACK does not come with a formal named "license", but a general statement saying:

"The reference LAPACK is a freely-available software package. It is available from netlib
via anonymous ftp and the World Wide Web. Thus, it can be included in commercial software
packages (and has been). We only ask that proper credit be given to the authors."

While the rest of GROMACS is LGPL, we think it's only fair to give you the same rights to
our modified LAPACK files as the original netlib versions, so do what you want with them.

However, be warned that we have only tested that they to the right thing in the cases used
in GROMACS (primarily full & sparse matrix diagonalization), so in most cases it is a much
better idea to use the full reference implementation.

Erik Lindahl, 2008-10-07.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#ifndef __PLUMED_lapack_def_external_h
#define __PLUMED_lapack_def_external_h
#define plumed_lapack_dbdsdc PLUMED_BLAS_F77_FUNC(dbdsdc,DBDSDC)
#define plumed_lapack_dgetf2 PLUMED_BLAS_F77_FUNC(dgetf2,DGETF2)
#define plumed_lapack_dlamrg PLUMED_BLAS_F77_FUNC(dlamrg,DLAMRG)
#define plumed_lapack_dlarnv PLUMED_BLAS_F77_FUNC(dlarnv,DLARNV)
#define plumed_lapack_dlasd0 PLUMED_BLAS_F77_FUNC(dlasd0,DLASD0)
#define plumed_lapack_dlasda PLUMED_BLAS_F77_FUNC(dlasda,DLASDA)
#define plumed_lapack_dlasq6 PLUMED_BLAS_F77_FUNC(dlasq6,DLASQ6)
#define plumed_lapack_dorgl2 PLUMED_BLAS_F77_FUNC(dorgl2,DORGL2)
#define plumed_lapack_dbdsqr PLUMED_BLAS_F77_FUNC(dbdsqr,DBDSQR)
#define plumed_lapack_dgetrf PLUMED_BLAS_F77_FUNC(dgetrf,DGETRF)
#define plumed_lapack_dgetri PLUMED_BLAS_F77_FUNC(dgetri,DGETRI)
#define plumed_lapack_dgetrs PLUMED_BLAS_F77_FUNC(dgetrs,DGETRS)
#define plumed_lapack_dtrtri PLUMED_BLAS_F77_FUNC(dtrtri,DTRTRI)
#define plumed_lapack_dtrti2 PLUMED_BLAS_F77_FUNC(dtrti2,DTRTI2)
#define plumed_lapack_dlange PLUMED_BLAS_F77_FUNC(dlange,DLANGE)
#define plumed_lapack_dlarrbx PLUMED_BLAS_F77_FUNC(dlarrbx,DLARRBX)
#define plumed_lapack_dlasd1 PLUMED_BLAS_F77_FUNC(dlasd1,DLASD1)
#define plumed_lapack_dlasdq PLUMED_BLAS_F77_FUNC(dlasdq,DLASDQ)
#define plumed_lapack_dlasr PLUMED_BLAS_F77_FUNC(dlasr,DLASR)
#define plumed_lapack_dorglq PLUMED_BLAS_F77_FUNC(dorglq,DORGLQ)
#define plumed_lapack_dormtr PLUMED_BLAS_F77_FUNC(dormtr,DORMTR)
#define plumed_lapack_dgebd2 PLUMED_BLAS_F77_FUNC(dgebd2,DGEBD2)
#define plumed_lapack_dlabrd PLUMED_BLAS_F77_FUNC(dlabrd,DLABRD)
#define plumed_lapack_dlanst PLUMED_BLAS_F77_FUNC(dlanst,DLANST)
#define plumed_lapack_dlansy PLUMED_BLAS_F77_FUNC(dlansy,DLANSY)
#define plumed_lapack_dlarrex PLUMED_BLAS_F77_FUNC(dlarrex,DLARREX)
#define plumed_lapack_dlasd2 PLUMED_BLAS_F77_FUNC(dlasd2,DLASD2)
#define plumed_lapack_dlasdt PLUMED_BLAS_F77_FUNC(dlasdt,DLASDT)
#define plumed_lapack_dlasrt PLUMED_BLAS_F77_FUNC(dlasrt,DLASRT)
#define plumed_lapack_dlasrt2 PLUMED_BLAS_F77_FUNC(dlasrt2,DLASRT2)
#define plumed_lapack_ilasrt2 PLUMED_BLAS_F77_FUNC(ilasrt2,ILASRT2)
#define plumed_lapack_dorgqr PLUMED_BLAS_F77_FUNC(dorgqr,DORGQR)
#define plumed_lapack_dstebz PLUMED_BLAS_F77_FUNC(dstebz,DSTEBZ)
#define plumed_lapack_dsteqr PLUMED_BLAS_F77_FUNC(dsteqr,DSTEQR)
#define plumed_lapack_dgebrd PLUMED_BLAS_F77_FUNC(dgebrd,DGEBRD)
#define plumed_lapack_dlacpy PLUMED_BLAS_F77_FUNC(dlacpy,DLACPY)
#define plumed_lapack_dlapy2 PLUMED_BLAS_F77_FUNC(dlapy2,DLAPY2)
#define plumed_lapack_dlarrfx PLUMED_BLAS_F77_FUNC(dlarrfx,DLARRFX)
#define plumed_lapack_dlasd3 PLUMED_BLAS_F77_FUNC(dlasd3,DLASD3)
#define plumed_lapack_dlaset PLUMED_BLAS_F77_FUNC(dlaset,DLASET)
#define plumed_lapack_dlassq PLUMED_BLAS_F77_FUNC(dlassq,DLASSQ)
#define plumed_lapack_dorm2l PLUMED_BLAS_F77_FUNC(dorm2l,DORM2L)
#define plumed_lapack_dstegr PLUMED_BLAS_F77_FUNC(dstegr,DSTEGR)
#define plumed_lapack_ssteqr PLUMED_BLAS_F77_FUNC(ssteqr,SSTEQR)
#define plumed_lapack_dgelq2 PLUMED_BLAS_F77_FUNC(dgelq2,DGELQ2)
#define plumed_lapack_dlae2 PLUMED_BLAS_F77_FUNC(dlae2,DLAE2)
#define plumed_lapack_dlaev2 PLUMED_BLAS_F77_FUNC(dlaev2,DLAEV2)
#define plumed_lapack_dlar1vx PLUMED_BLAS_F77_FUNC(dlar1vx,DLAR1VX)
#define plumed_lapack_dlarrvx PLUMED_BLAS_F77_FUNC(dlarrvx,DLARRVX)
#define plumed_lapack_dlasd4 PLUMED_BLAS_F77_FUNC(dlasd4,DLASD4)
#define plumed_lapack_dlasq1 PLUMED_BLAS_F77_FUNC(dlasq1,DLASQ1)
#define plumed_lapack_dlasv2 PLUMED_BLAS_F77_FUNC(dlasv2,DLASV2)
#define plumed_lapack_dorm2r PLUMED_BLAS_F77_FUNC(dorm2r,DORM2R)
#define plumed_lapack_dstein PLUMED_BLAS_F77_FUNC(dstein,DSTEIN)
#define plumed_lapack_dgelqf PLUMED_BLAS_F77_FUNC(dgelqf,DGELQF)
#define plumed_lapack_dlaebz PLUMED_BLAS_F77_FUNC(dlaebz,DLAEBZ)
#define plumed_lapack_dlarf PLUMED_BLAS_F77_FUNC(dlarf,DLARF)
#define plumed_lapack_dlartg PLUMED_BLAS_F77_FUNC(dlartg,DLARTG)
#define plumed_lapack_dlasd5 PLUMED_BLAS_F77_FUNC(dlasd5,DLASD5)
#define plumed_lapack_dlasq2 PLUMED_BLAS_F77_FUNC(dlasq2,DLASQ2)
#define plumed_lapack_dlasq3 PLUMED_BLAS_F77_FUNC(dlasq3,DLASQ3)
#define plumed_lapack_dlaswp PLUMED_BLAS_F77_FUNC(dlaswp,DLASWP)
#define plumed_lapack_dormbr PLUMED_BLAS_F77_FUNC(dormbr,DORMBR)
#define plumed_lapack_dsterf PLUMED_BLAS_F77_FUNC(dsterf,DSTERF)
#define plumed_lapack_dgeqr2 PLUMED_BLAS_F77_FUNC(dgeqr2,DGEQR2)
#define plumed_lapack_dlaed6 PLUMED_BLAS_F77_FUNC(dlaed6,DLAED6)
#define plumed_lapack_dlarfb PLUMED_BLAS_F77_FUNC(dlarfb,DLARFB)
#define plumed_lapack_dlaruv PLUMED_BLAS_F77_FUNC(dlaruv,DLARUV)
#define plumed_lapack_dlasd6 PLUMED_BLAS_F77_FUNC(dlasd6,DLASD6)
#define plumed_lapack_dlatrd PLUMED_BLAS_F77_FUNC(dlatrd,DLATRD)
#define plumed_lapack_dorml2 PLUMED_BLAS_F77_FUNC(dorml2,DORML2)
#define plumed_lapack_dstevr PLUMED_BLAS_F77_FUNC(dstevr,DSTEVR)
#define plumed_lapack_dsytrd PLUMED_BLAS_F77_FUNC(dsytrd,DSYTRD)
#define plumed_lapack_dsyevr PLUMED_BLAS_F77_FUNC(dsyevr,DSYEVR)
#define plumed_lapack_dormql PLUMED_BLAS_F77_FUNC(dormql,DORMQL)
#define plumed_lapack_dormqr PLUMED_BLAS_F77_FUNC(dormqr,DORMQR)
#define plumed_lapack_dorgbr PLUMED_BLAS_F77_FUNC(dorgbr,DORGBR)
#define plumed_lapack_dlasq5 PLUMED_BLAS_F77_FUNC(dlasq5,DLASQ5)
#define plumed_lapack_dlasd8 PLUMED_BLAS_F77_FUNC(dlasd8,DLASD8)
#define plumed_lapack_dlascl PLUMED_BLAS_F77_FUNC(dlascl,DLASCL)
#define plumed_lapack_dlarft PLUMED_BLAS_F77_FUNC(dlarft,DLARFT)
#define plumed_lapack_dlagts PLUMED_BLAS_F77_FUNC(dlagts,DLAGTS)
#define plumed_lapack_dgesdd PLUMED_BLAS_F77_FUNC(dgesdd,DGESDD)
#define plumed_lapack_dsytd2 PLUMED_BLAS_F77_FUNC(dsytd2,DSYTD2)
#define plumed_lapack_dormlq PLUMED_BLAS_F77_FUNC(dormlq,DORMLQ)
#define plumed_lapack_dorg2r PLUMED_BLAS_F77_FUNC(dorg2r,DORG2R)
#define plumed_lapack_dlasq4 PLUMED_BLAS_F77_FUNC(dlasq4,DLASQ4)
#define plumed_lapack_dlasd7 PLUMED_BLAS_F77_FUNC(dlasd7,DLASD7)
#define plumed_lapack_dlas2 PLUMED_BLAS_F77_FUNC(dlas2,DLAS2)
#define plumed_lapack_dlarfg PLUMED_BLAS_F77_FUNC(dlarfg,DLARFG)
#define plumed_lapack_dlagtf PLUMED_BLAS_F77_FUNC(dlagtf,DLAGTF)
#define plumed_lapack_dgeqrf PLUMED_BLAS_F77_FUNC(dgeqrf,DGEQRF)
#define plumed_lapack_sbdsdc PLUMED_BLAS_F77_FUNC(sbdsdc,SBDSDC)
#define plumed_lapack_sgetf2 PLUMED_BLAS_F77_FUNC(sgetf2,SGETF2)
#define plumed_lapack_slamrg PLUMED_BLAS_F77_FUNC(slamrg,SLAMRG)
#define plumed_lapack_slarnv PLUMED_BLAS_F77_FUNC(slarnv,SLARNV)
#define plumed_lapack_slasd0 PLUMED_BLAS_F77_FUNC(slasd0,SLASD0)
#define plumed_lapack_slasda PLUMED_BLAS_F77_FUNC(slasda,SLASDA)
#define plumed_lapack_slasq6 PLUMED_BLAS_F77_FUNC(slasq6,SLASQ6)
#define plumed_lapack_sorgl2 PLUMED_BLAS_F77_FUNC(sorgl2,SORGL2)
#define plumed_lapack_sbdsqr PLUMED_BLAS_F77_FUNC(sbdsqr,SBDSQR)
#define plumed_lapack_sgetrf PLUMED_BLAS_F77_FUNC(sgetrf,SGETRF)
#define plumed_lapack_sgetri PLUMED_BLAS_F77_FUNC(sgetri,SGETRI)
#define plumed_lapack_sgetrs PLUMED_BLAS_F77_FUNC(sgetrs,SGETRS)
#define plumed_lapack_strtri PLUMED_BLAS_F77_FUNC(strtri,STRTRI)
#define plumed_lapack_strti2 PLUMED_BLAS_F77_FUNC(strti2,STRTI2)
#define plumed_lapack_slange PLUMED_BLAS_F77_FUNC(slange,SLANGE)
#define plumed_lapack_slarrbx PLUMED_BLAS_F77_FUNC(slarrbx,SLARRBX)
#define plumed_lapack_slasd1 PLUMED_BLAS_F77_FUNC(slasd1,SLASD1)
#define plumed_lapack_slasdq PLUMED_BLAS_F77_FUNC(slasdq,SLASDQ)
#define plumed_lapack_slasr PLUMED_BLAS_F77_FUNC(slasr,SLASR)
#define plumed_lapack_sorglq PLUMED_BLAS_F77_FUNC(sorglq,SORGLQ)
#define plumed_lapack_sormtr PLUMED_BLAS_F77_FUNC(sormtr,SORMTR)
#define plumed_lapack_sgebd2 PLUMED_BLAS_F77_FUNC(sgebd2,SGEBD2)
#define plumed_lapack_slabrd PLUMED_BLAS_F77_FUNC(slabrd,SLABRD)
#define plumed_lapack_slanst PLUMED_BLAS_F77_FUNC(slanst,SLANST)
#define plumed_lapack_slansy PLUMED_BLAS_F77_FUNC(slansy,SLANSY)
#define plumed_lapack_slarrex PLUMED_BLAS_F77_FUNC(slarrex,SLARREX)
#define plumed_lapack_slasd2 PLUMED_BLAS_F77_FUNC(slasd2,SLASD2)
#define plumed_lapack_slasdt PLUMED_BLAS_F77_FUNC(slasdt,SLASDT)
#define plumed_lapack_slasrt PLUMED_BLAS_F77_FUNC(slasrt,SLASRT)
#define plumed_lapack_slasrt2 PLUMED_BLAS_F77_FUNC(slasrt2,SLASRT2)
#define plumed_lapack_sorgqr PLUMED_BLAS_F77_FUNC(sorgqr,SORGQR)
#define plumed_lapack_sstebz PLUMED_BLAS_F77_FUNC(sstebz,SSTEBZ)
#define plumed_lapack_sgebrd PLUMED_BLAS_F77_FUNC(sgebrd,SGEBRD)
#define plumed_lapack_slacpy PLUMED_BLAS_F77_FUNC(slacpy,SLACPY)
#define plumed_lapack_slapy2 PLUMED_BLAS_F77_FUNC(slapy2,SLAPY2)
#define plumed_lapack_slarrfx PLUMED_BLAS_F77_FUNC(slarrfx,SLARRFX)
#define plumed_lapack_slasd3 PLUMED_BLAS_F77_FUNC(slasd3,SLASD3)
#define plumed_lapack_slaset PLUMED_BLAS_F77_FUNC(slaset,SLASET)
#define plumed_lapack_slassq PLUMED_BLAS_F77_FUNC(slassq,SLASSQ)
#define plumed_lapack_sorm2l PLUMED_BLAS_F77_FUNC(sorm2l,SORM2L)
#define plumed_lapack_sstegr PLUMED_BLAS_F77_FUNC(sstegr,SSTEGR)
#define plumed_lapack_sgelq2 PLUMED_BLAS_F77_FUNC(sgelq2,SGELQ2)
#define plumed_lapack_slae2 PLUMED_BLAS_F77_FUNC(slae2,SLAE2)
#define plumed_lapack_slaev2 PLUMED_BLAS_F77_FUNC(slaev2,SLAEV2)
#define plumed_lapack_slar1vx PLUMED_BLAS_F77_FUNC(slar1vx,SLAR1VX)
#define plumed_lapack_slarrvx PLUMED_BLAS_F77_FUNC(slarrvx,SLARRVX)
#define plumed_lapack_slasd4 PLUMED_BLAS_F77_FUNC(slasd4,SLASD4)
#define plumed_lapack_slasq1 PLUMED_BLAS_F77_FUNC(slasq1,SLASQ1)
#define plumed_lapack_slasv2 PLUMED_BLAS_F77_FUNC(slasv2,SLASV2)
#define plumed_lapack_sorm2r PLUMED_BLAS_F77_FUNC(sorm2r,SORM2R)
#define plumed_lapack_sstein PLUMED_BLAS_F77_FUNC(sstein,SSTEIN)
#define plumed_lapack_sgelqf PLUMED_BLAS_F77_FUNC(sgelqf,SGELQF)
#define plumed_lapack_slaebz PLUMED_BLAS_F77_FUNC(slaebz,SLAEBZ)
#define plumed_lapack_slarf PLUMED_BLAS_F77_FUNC(slarf,SLARF)
#define plumed_lapack_slartg PLUMED_BLAS_F77_FUNC(slartg,SLARTG)
#define plumed_lapack_slasd5 PLUMED_BLAS_F77_FUNC(slasd5,SLASD5)
#define plumed_lapack_slasq2 PLUMED_BLAS_F77_FUNC(slasq2,SLASQ2)
#define plumed_lapack_slasq3 PLUMED_BLAS_F77_FUNC(slasq3,SLASQ3)
#define plumed_lapack_slaswp PLUMED_BLAS_F77_FUNC(slaswp,SLASWP)
#define plumed_lapack_sormbr PLUMED_BLAS_F77_FUNC(sormbr,SORMBR)
#define plumed_lapack_ssterf PLUMED_BLAS_F77_FUNC(ssterf,SSTERF)
#define plumed_lapack_sgeqr2 PLUMED_BLAS_F77_FUNC(sgeqr2,SGEQR2)
#define plumed_lapack_slaed6 PLUMED_BLAS_F77_FUNC(slaed6,SLAED6)
#define plumed_lapack_slarfb PLUMED_BLAS_F77_FUNC(slarfb,SLARFB)
#define plumed_lapack_slaruv PLUMED_BLAS_F77_FUNC(slaruv,SLARUV)
#define plumed_lapack_slasd6 PLUMED_BLAS_F77_FUNC(slasd6,SLASD6)
#define plumed_lapack_slatrd PLUMED_BLAS_F77_FUNC(slatrd,SLATRD)
#define plumed_lapack_sorml2 PLUMED_BLAS_F77_FUNC(sorml2,SORML2)
#define plumed_lapack_sstevr PLUMED_BLAS_F77_FUNC(sstevr,SSTEVR)
#define plumed_lapack_ssytrd PLUMED_BLAS_F77_FUNC(ssytrd,SSYTRD)
#define plumed_lapack_ssyevr PLUMED_BLAS_F77_FUNC(ssyevr,SSYEVR)
#define plumed_lapack_sormql PLUMED_BLAS_F77_FUNC(sormql,SORMQL)
#define plumed_lapack_sormqr PLUMED_BLAS_F77_FUNC(sormqr,SORMQR)
#define plumed_lapack_sorgbr PLUMED_BLAS_F77_FUNC(sorgbr,SORGBR)
#define plumed_lapack_slasq5 PLUMED_BLAS_F77_FUNC(slasq5,SLASQ5)
#define plumed_lapack_slasd8 PLUMED_BLAS_F77_FUNC(slasd8,SLASD8)
#define plumed_lapack_slascl PLUMED_BLAS_F77_FUNC(slascl,SLASCL)
#define plumed_lapack_slarft PLUMED_BLAS_F77_FUNC(slarft,SLARFT)
#define plumed_lapack_slagts PLUMED_BLAS_F77_FUNC(slagts,SLAGTS)
#define plumed_lapack_sgesdd PLUMED_BLAS_F77_FUNC(sgesdd,SGESDD)
#define plumed_lapack_ssytd2 PLUMED_BLAS_F77_FUNC(ssytd2,SSYTD2)
#define plumed_lapack_sormlq PLUMED_BLAS_F77_FUNC(sormlq,SORMLQ)
#define plumed_lapack_sorg2r PLUMED_BLAS_F77_FUNC(sorg2r,SORG2R)
#define plumed_lapack_slasq4 PLUMED_BLAS_F77_FUNC(slasq4,SLASQ4)
#define plumed_lapack_slasd7 PLUMED_BLAS_F77_FUNC(slasd7,SLASD7)
#define plumed_lapack_slas2 PLUMED_BLAS_F77_FUNC(slas2,SLAS2)
#define plumed_lapack_slarfg PLUMED_BLAS_F77_FUNC(slarfg,SLARFG)
#define plumed_lapack_slagtf PLUMED_BLAS_F77_FUNC(slagtf,SLAGTF)
#define plumed_lapack_sgeqrf PLUMED_BLAS_F77_FUNC(sgeqrf,SGEQRF)
#endif
