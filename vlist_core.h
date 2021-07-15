
#ifndef VOID_TYPE_ELEMENTS_LIST
#define VOID_TYPE_ELEMENTS_LIST

#include <malloc.h>
#include <stdarg.h>
#include <stdint.h>
#include "void.h"


/***
    Base types
***/


typedef struct vlist vlist;
typedef struct vldata vldata;

struct vlist
{
    /**     key points     **/

    vldata *head, *ptr, *tail;

    /**     functions      **/
};

struct vldata
{
    /*  content  */
    void* value;

    /* neighbors */
    vldata *prev;
    vldata *next;

};


/***
    Not members functions
***/


vlist* vlcurrentlist(vlist*);

/** initialization **/

vlist* vlnew(void);


/***
    container_of
***/

#define container_of( ptr, type, member ) \
   ( \
      { \
         const typeof( ((type *)0)->member ) *__mptr = (ptr); \
         (type *)( (char *)__mptr - offsetof( type, member ) ); \
      } \
   )


#endif /*! VOID_TYPE_ELEMENTS_LIST */
