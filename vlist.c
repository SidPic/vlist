#include "vlist_core.h"

/***
    Secondary functions
***/


static void
link_funcs (vlist *list)
{
    list->insert       = vlist_insert;
    list->insert_auto  = vlist_insert_auto;
    list->inserta      = vlist_insert_array;
    list->inserta_auto = vlist_insert_array_auto;
    list->inserts      = vlist_insert_slice;
    list->inserts_auto = vlist_insert_slice_auto;

    list->vinsert  = vlist_void_insert;
    list->vinserta = vlist_void_insert_array;
    list->vinserts = vlist_void_insert_slice;

    list->set       = vlist_set;
    list->set_auto  = vlist_set_auto;
    list->seta      = vlist_set_array;
    list->seta_auto = vlist_set_array_auto;
    list->sets      = vlist_set_slice;
    list->sets_auto = vlist_set_slice_auto;

    list->delete  = vlist_delete;
    list->deletea = vlist_delete_array;
    list->deletes = vlist_delete_slice;

    list->get      = vlist_get;
    list->geta     = vlist_get_array;
    list->gets     = vlist_get_slice;
    list->getnum   = vlist_get_number;
    list->getatnum = vlist_get_at_number;

    list->getd      = vlist_get_data;
    list->getds     = vlist_get_data_slice;
    list->getdatnum = vlist_get_data_at_number;

    list->gotod = vlist_go_to_data;
    list->gotoh = vlist_go_to_head;
    list->gotot = vlist_go_to_tail;
    list->gotoe = vlist_go_to_end;
    list->goton = vlist_go_to_next;
    list->gotop = vlist_go_to_prev;
}


/***
    Standart NOT members functions
***/


vlist*
vlist_new (void)
{
    vlist* list = (vlist*)malloc(sizeof(vlist));

    link_funcs(list);

    currentlist(list);

    return list;
}

vlist*
vlist_currentlist (vlist* list)
{
    static vlist* currentlist;
    if (list) currentlist = list;
    return currentlist;
}


/***
    Standart members functions

***/
