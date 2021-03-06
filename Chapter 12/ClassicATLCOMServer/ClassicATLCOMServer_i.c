/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon May 06 23:10:17 2002
 */
/* Compiler settings for C:\Apress Books\C# Book First Edition\Labs\Chapter 12\ClassicATLCOMServer\ClassicATLCOMServer.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IEngine = {0x23D2BB87,0xA8F8,0x4301,{0xBE,0xD5,0x9D,0x0C,0xA7,0x7A,0xE4,0x03}};


const IID IID_IDriverInfo = {0x3598361A,0x135C,0x4014,{0x9B,0x29,0x6C,0xD2,0x39,0xCA,0x04,0x3D}};


const IID IID_ICar = {0xA8E01A32,0x0300,0x402A,{0xB1,0xEC,0xAD,0xCD,0x2D,0xC5,0x26,0xB4}};


const IID IID_IParams = {0x2F79C93F,0x77D2,0x4797,{0xBC,0xCB,0x00,0xD5,0x37,0x8A,0xB0,0x47}};


const IID IID_ITurboEngine = {0x5AC4FD17,0xC14E,0x44c1,{0xB7,0x61,0x02,0x4D,0x3E,0x6E,0x1A,0x40}};


const IID LIBID_CLASSICATLCOMSERVERLib = {0x69D8B2E2,0x4CC1,0x4414,{0x97,0x57,0x49,0xC5,0x36,0x20,0xFF,0x0C}};


const IID DIID__ICarEvents = {0xE88DA278,0xAD04,0x407F,{0x9B,0xBB,0xD8,0xC0,0x0A,0xFE,0x79,0x84}};


const CLSID CLSID_CoCar = {0x8FB4E170,0xA7E0,0x4F46,{0x85,0x08,0xDF,0xFD,0x7D,0xA1,0xD6,0x69}};


const CLSID CLSID_CoEngine = {0x32C07E17,0xF966,0x4EFD,{0xB3,0x01,0x97,0x29,0xFE,0x2D,0x60,0xB5}};


#ifdef __cplusplus
}
#endif

