/* RSCS accounting record  for  FUNET-NJE */

/* Some hard-ware dependencies */
#ifndef __U_INT32
#if	defined(__alpha__) /* 64 bit.. */
#define __U_INT32
typedef unsigned int u_int32;
typedef int int32;
typedef unsigned short u_int16;
typedef short int16;
#else
#define __U_INT32
typedef unsigned long u_int32;
typedef long int32;
typedef unsigned short u_int16;
typedef short int16;
#endif
#endif

#ifndef _RSCSACCT_H
#define _RSCSACCT_H

#include <stdint.h>  /* For uint16_t, int32_t types */

struct RSCSLOG {
        /* Reordered members to optimize alignment */
        int32_t       ACNTRECS;        /* Number of records in file */
        uint16_t      ACNTID;          /* File identifier */
        uint16_t      ACNTOID;         /* Origin file identifier */
        unsigned char ACNTLOGU[8];     /* Logging userid */
        unsigned char ACNTDATE[12];    /* Date and time */
        unsigned char ACNTUSER[8];     /* Origin userid */
        unsigned char ACNTILOC[8];     /* Origin location */
        unsigned char ACNTTOVM[8];     /* Destination userid */
        unsigned char ACNTDEST[8];     /* Destination location */
        unsigned char ACNTSYS[5];      /* System identifier */
        unsigned char ACNTTYPE[2];     /* Record type */
        unsigned char filler[2];       /* Filler */
        unsigned char filler2[8];      /* Filler */
        unsigned char ACNTCLAS;        /* Spool file class */
        unsigned char ACNTINDV;        /* Individual file type */
        unsigned char ACNTCODE;        /* Record code */
};

#endif
