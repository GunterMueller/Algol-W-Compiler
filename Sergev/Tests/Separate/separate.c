/* ****************************************************************************
       This is a TEMPORARY file generated by the Awe Algol W compiler
       from an Algol W source file. You should not edit this file or store it
       in a version control system; delete it freely as you would any other 
       temporary object file. You should NOT distribute this file,
       instead distribute your Algol W source file and the Awe compiler.
   **************************************************************************** */


#include <awe.h>
static const char * const _awe_src_0 = "<stdin>";
static const char * const _awe_src_1 = "(Predeclared Identifiers)";
static const char * const _awe_src_2 = "separate.alw";


void separate (_awe_str message) {
{
{ _awe_Editing_t _editing_state;
                 _awe_Editing_save(&_editing_state);
                 _awe_iocontrol(_awe_at(2,3,3), 2);
_awe_write_string(_awe_at(2,3,3), (_awe_str)"separate says:", 14);
_awe_Editing_restore(&_editing_state);
               }
              { _awe_Editing_t _editing_state;
                 _awe_Editing_save(&_editing_state);
                 _awe_iocontrol(_awe_at(2,4,3), 2);
_awe_write_string(_awe_at(2,4,3), message, 10);
_awe_Editing_restore(&_editing_state);
               }
              ; /*empty*/
} }

