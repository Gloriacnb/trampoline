//---------------------------------------------------------------------------*
//                                                                           *
//                            File 'cfg_types.h'                             *
//                       Generated by version 1.9.10                         *
//                       march 18th, 2010, at 9h57'5"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef cfg_types_DEFINED
#define cfg_types_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/GGS__header.h"

//---------------------------------------------------------------------------*

// Include imported semantics
#include "goil_basic_types.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*

class GGS_config ;
class GGS_cfg_attrs ;
class GGS_attrs ;
class cPtr_attrs ;
class GGS_interrupts ;
class cPtr_interrupts ;

//---------------------------------------------------------------------------*
//                                                                           *
//                              Map '@config'                                *
//                                                                           *
//---------------------------------------------------------------------------*

class elementOf_GGS_config ;

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_config ;

//---------------------------------------------------------------------------*

class GGS_config : public AC_galgas_map {
//--- Element Class
  public : typedef elementOf_GGS_config cElement ;

//--- Get pointers
  public : inline cElement * firstObject (void) const { return (cElement *) internalFirstObject () ; }
  public : inline cElement * lastObject (void) const { return (cElement *) internalLastObject () ; }

//--- Comparison methods
  public : GGS_bool operator_isEqual (const GGS_config & inOperand) const ;
  public : GGS_bool operator_isNotEqual (const GGS_config & inOperand) const ;

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_config castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

//--- Create an element
  protected : virtual AC_galgas_map_element *
  new_element (const GGS_lstring & inKey, void * inInfo) ;

//--- Assign information to an existing element
  protected : virtual void
  assignInfo (AC_galgas_map_element * inPtr, void * inInfo) ;

//--- Enter an index
  public : void enterIndex (const GGS_lstring & inKey,
                            AC_galgas_index_core & outIndex) ;

//--- Get object pointer (for method call)
  public : inline GGS_config * operator () (UNUSED_LOCATION_ARGS) { return this ; }
  public : inline const GGS_config * operator () (UNUSED_LOCATION_ARGS) const { return this ; }

//--- 'emptyMap' constructor
  public : static GGS_config constructor_emptyMap (C_Compiler & inLexique COMMA_LOCATION_ARGS) ;

//--- Method used for duplicate a map
  protected : virtual void internalInsertForDuplication (AC_galgas_map_element * inPtr) ;

//--- Modifiers "set'Value'ForKey"

  public : static const utf32 kRemoveMessage_del [] ;

//--- 'del' Remove Modifier
  public : void modifier_del (C_Compiler & inLexique,
                                const GGS_lstring & inKey,
                                GGS_basic_type & outParameter0 COMMA_LOCATION_ARGS) ;

  public : static const utf32 kInsertMessage_put [] ;

//--- 'put' Insert Modifier
  public : void modifier_put (C_Compiler & inLexique,
                                const GGS_lstring & inKey,
                                const GGS_basic_type &  inParameter0 COMMA_LOCATION_ARGS) ;

  public : static const utf32 kSearchMessage_get [] ;

//--- 'get' Search Method
  public : void method_get (C_Compiler & inLexique,
                                const GGS_lstring & inKey,
                                GGS_basic_type   & outParameter0 COMMA_LOCATION_ARGS) const ;
//--- Internal method for removing an element
  protected : void removeElement (C_Compiler & inLexique,
                                   const utf32 * inErrorMessage,
                                   const GGS_lstring & inKey,
                                   GGS_basic_type & outParameter0,
                                   GGS_luint * outIndex
                                   COMMA_LOCATION_ARGS) ;
//--- Internal method for inserting an element
  protected : void insertElement (C_Compiler & inLexique,
                                   const utf32 * inErrorMessage,
                                   const GGS_lstring & inKey,
                                   const GGS_basic_type & inParameter0,
                                   GGS_luint * outIndex
                                   COMMA_LOCATION_ARGS) ;
//--- Internal method for searching for an element
  protected : void searchElement (C_Compiler & inLexique,
                                   const utf32 * inErrorMessage,
                                   const GGS_lstring & inKey,
                                   GGS_basic_type & outParameter0,
                                   GGS_luint * outIndex
                                   COMMA_LOCATION_ARGS) const ;
  public : virtual GGS_string reader_description (const PMSInt32 inIndentation = 0) const ;
  public : static GGS_config constructor_mapWithMapToOverride (C_Compiler & inLexique,
                                            const GGS_config & inMapToOverride
                                            COMMA_LOCATION_ARGS) ;
  public : GGS_config reader_overriddenMap (C_Compiler & inLexique
                                            COMMA_LOCATION_ARGS) const ;
//--------------------------------- Map Enumerator
  public : class cEnumerator : public cAbstractMapEnumerator {
  //--- Constructors
    public : inline cEnumerator (const GGS_config & inMap,
                                 const bool inAscending) :
    cAbstractMapEnumerator (inMap, inAscending) {
    }
    public : inline cEnumerator (const GGS_config & inMap) :
    cAbstractMapEnumerator (inMap) {
    }
  //--- Iterator method
    public : inline cElement * nextObject (void) {
      return (cElement *) internalNextObject () ;
    }
    public : /* const */ GGS_basic_type   & _value (LOCATION_ARGS) const ;
  } ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                             Map '@cfg_attrs'                              *
//                                                                           *
//---------------------------------------------------------------------------*

class elementOf_GGS_cfg_attrs ;

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_cfg_attrs ;

//---------------------------------------------------------------------------*

class GGS_cfg_attrs : public AC_galgas_map {
//--- Element Class
  public : typedef elementOf_GGS_cfg_attrs cElement ;

//--- Get pointers
  public : inline cElement * firstObject (void) const { return (cElement *) internalFirstObject () ; }
  public : inline cElement * lastObject (void) const { return (cElement *) internalLastObject () ; }

//--- Comparison methods
  public : GGS_bool operator_isEqual (const GGS_cfg_attrs & inOperand) const ;
  public : GGS_bool operator_isNotEqual (const GGS_cfg_attrs & inOperand) const ;

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_cfg_attrs castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

//--- Create an element
  protected : virtual AC_galgas_map_element *
  new_element (const GGS_lstring & inKey, void * inInfo) ;

//--- Assign information to an existing element
  protected : virtual void
  assignInfo (AC_galgas_map_element * inPtr, void * inInfo) ;

//--- Enter an index
  public : void enterIndex (const GGS_lstring & inKey,
                            AC_galgas_index_core & outIndex) ;

//--- Get object pointer (for method call)
  public : inline GGS_cfg_attrs * operator () (UNUSED_LOCATION_ARGS) { return this ; }
  public : inline const GGS_cfg_attrs * operator () (UNUSED_LOCATION_ARGS) const { return this ; }

//--- 'emptyMap' constructor
  public : static GGS_cfg_attrs constructor_emptyMap (C_Compiler & inLexique COMMA_LOCATION_ARGS) ;

//--- Method used for duplicate a map
  protected : virtual void internalInsertForDuplication (AC_galgas_map_element * inPtr) ;

//--- Modifiers "set'Value'ForKey"

  public : static const utf32 kRemoveMessage_del [] ;

//--- 'del' Remove Modifier
  public : void modifier_del (C_Compiler & inLexique,
                                const GGS_lstring & inKey,
                                GGS_lstring & outParameter0 COMMA_LOCATION_ARGS) ;

  public : static const utf32 kInsertMessage_put [] ;

//--- 'put' Insert Modifier
  public : void modifier_put (C_Compiler & inLexique,
                                const GGS_lstring & inKey,
                                const GGS_lstring &  inParameter0 COMMA_LOCATION_ARGS) ;

  public : static const utf32 kSearchMessage_get [] ;

//--- 'get' Search Method
  public : void method_get (C_Compiler & inLexique,
                                const GGS_lstring & inKey,
                                GGS_lstring   & outParameter0 COMMA_LOCATION_ARGS) const ;
//--- Internal method for removing an element
  protected : void removeElement (C_Compiler & inLexique,
                                   const utf32 * inErrorMessage,
                                   const GGS_lstring & inKey,
                                   GGS_lstring & outParameter0,
                                   GGS_luint * outIndex
                                   COMMA_LOCATION_ARGS) ;
//--- Internal method for inserting an element
  protected : void insertElement (C_Compiler & inLexique,
                                   const utf32 * inErrorMessage,
                                   const GGS_lstring & inKey,
                                   const GGS_lstring & inParameter0,
                                   GGS_luint * outIndex
                                   COMMA_LOCATION_ARGS) ;
//--- Internal method for searching for an element
  protected : void searchElement (C_Compiler & inLexique,
                                   const utf32 * inErrorMessage,
                                   const GGS_lstring & inKey,
                                   GGS_lstring & outParameter0,
                                   GGS_luint * outIndex
                                   COMMA_LOCATION_ARGS) const ;
  public : virtual GGS_string reader_description (const PMSInt32 inIndentation = 0) const ;
  public : static GGS_cfg_attrs constructor_mapWithMapToOverride (C_Compiler & inLexique,
                                            const GGS_cfg_attrs & inMapToOverride
                                            COMMA_LOCATION_ARGS) ;
  public : GGS_cfg_attrs reader_overriddenMap (C_Compiler & inLexique
                                            COMMA_LOCATION_ARGS) const ;
//--------------------------------- Map Enumerator
  public : class cEnumerator : public cAbstractMapEnumerator {
  //--- Constructors
    public : inline cEnumerator (const GGS_cfg_attrs & inMap,
                                 const bool inAscending) :
    cAbstractMapEnumerator (inMap, inAscending) {
    }
    public : inline cEnumerator (const GGS_cfg_attrs & inMap) :
    cAbstractMapEnumerator (inMap) {
    }
  //--- Iterator method
    public : inline cElement * nextObject (void) {
      return (cElement *) internalNextObject () ;
    }
    public : /* const */ GGS_lstring   & _tpl_attr (LOCATION_ARGS) const ;
  } ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                         GALGAS class 'GGS_attrs'                          *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_attrs ;

//---------------------------------------------------------------------------*

class GGS_attrs : public GGS_basic_type {
//--- Default constructor
  public : inline GGS_attrs (void) :
  GGS_basic_type () {}

//--- Pointer assignment constructor
  public : GGS_attrs (const cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_attrs (cPtr__AC_galgas_class & inObject) ;

//--- castFrom class method (implements cast expression)
  public : static GGS_attrs
  castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_attrs constructor_new (C_Compiler & inLexique,
                                const GGS_location & argument_0,
                                const GGS_cfg_attrs & argument_1
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_attrs * getPtr (void) const {
    return (cPtr_attrs *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_cfg_attrs  reader_attrs (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_attrs * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_attrs * operator () (LOCATION_ARGS) const {
      return (cPtr_attrs *) mPointer ;
    }
  #endif

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_attrs castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformationEX gClassInfoFor__attrs ;

//---------------------------------------------------------------------------*
//                                                                           *
//                      GALGAS class 'GGS_interrupts'                        *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_interrupts ;

//---------------------------------------------------------------------------*

class GGS_interrupts : public GGS_basic_type {
//--- Default constructor
  public : inline GGS_interrupts (void) :
  GGS_basic_type () {}

//--- Pointer assignment constructor
  public : GGS_interrupts (const cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_interrupts (cPtr__AC_galgas_class & inObject) ;

//--- castFrom class method (implements cast expression)
  public : static GGS_interrupts
  castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_interrupts constructor_new (C_Compiler & inLexique,
                                const GGS_location & argument_0,
                                const GGS_luint64 & argument_1,
                                const GGS_ident_map & argument_2
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_interrupts * getPtr (void) const {
    return (cPtr_interrupts *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_luint64  reader_it_count (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_ident_map  reader_it_sources (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_interrupts * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_interrupts * operator () (LOCATION_ARGS) const {
      return (cPtr_interrupts *) mPointer ;
    }
  #endif

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_interrupts castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformationEX gClassInfoFor__interrupts ;

//---------------------------------------------------------------------------*
//                                                                           *
//                         Element of map '@config'                          *
//                                                                           *
//---------------------------------------------------------------------------*

class e_config {
  public : GGS_basic_type  value ;

  public : e_config (void) ;
} ;

//---------------------------------------------------------------------------*

class elementOf_GGS_config : public AC_galgas_map_element {
//--- Constructor
  public : elementOf_GGS_config (const GGS_lstring & inKey,
                                     const PMSInt32 inIndex,
                                     const e_config & inInfo) ;
//--- Get pointers
  public : inline elementOf_GGS_config * nextObject (void) const { return (elementOf_GGS_config *) mNextItem ; }
  public : inline elementOf_GGS_config * infObject (void) const { return (elementOf_GGS_config *) mInfPtr ; }
  public : inline elementOf_GGS_config * supObject (void) const { return (elementOf_GGS_config *) mSupPtr ; }
//--- Comparison
  protected : virtual bool isEqualToMapElement (const AC_galgas_map_element * inOperand) const ;
//--- Data member
  public : e_config mInfo ;
//--- Method for 'description' reader
  public : void appendForMapDescription (const PMSInt32 inElementIndex,
                                         C_String & ioString,
                                         const PMSInt32 inIndentation) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                       Element of map '@cfg_attrs'                         *
//                                                                           *
//---------------------------------------------------------------------------*

class e_cfg_attrs {
  public : GGS_lstring  tpl_attr ;

  public : e_cfg_attrs (void) ;
} ;

//---------------------------------------------------------------------------*

class elementOf_GGS_cfg_attrs : public AC_galgas_map_element {
//--- Constructor
  public : elementOf_GGS_cfg_attrs (const GGS_lstring & inKey,
                                     const PMSInt32 inIndex,
                                     const e_cfg_attrs & inInfo) ;
//--- Get pointers
  public : inline elementOf_GGS_cfg_attrs * nextObject (void) const { return (elementOf_GGS_cfg_attrs *) mNextItem ; }
  public : inline elementOf_GGS_cfg_attrs * infObject (void) const { return (elementOf_GGS_cfg_attrs *) mInfPtr ; }
  public : inline elementOf_GGS_cfg_attrs * supObject (void) const { return (elementOf_GGS_cfg_attrs *) mSupPtr ; }
//--- Comparison
  protected : virtual bool isEqualToMapElement (const AC_galgas_map_element * inOperand) const ;
//--- Data member
  public : e_cfg_attrs mInfo ;
//--- Method for 'description' reader
  public : void appendForMapDescription (const PMSInt32 inElementIndex,
                                         C_String & ioString,
                                         const PMSInt32 inIndentation) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                       abstract class 'cPtr_attrs'                         *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_attrs : public cPtr_basic_type {
  private : typedef cPtr_basic_type inherited ;
//--- Constructor
  public : cPtr_attrs (const GGS_location & ,
                                const GGS_cfg_attrs & 
                                COMMA_LOCATION_ARGS) ;

//--- Attributes
  public : GGS_cfg_attrs  attrs ;
//--- Method 'string'
  public : virtual void method_string (C_Compiler &,
                                GGS_string& 
                                COMMA_LOCATION_ARGS) const ;

//--- Class message
  public : virtual const char * instanceMessage (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_String & ioString,
                        const PMSInt32 inIndentation) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformationEX * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     abstract class 'cPtr_interrupts'                      *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_interrupts : public cPtr_basic_type {
  private : typedef cPtr_basic_type inherited ;
//--- Constructor
  public : cPtr_interrupts (const GGS_location & ,
                                const GGS_luint64 & ,
                                const GGS_ident_map & 
                                COMMA_LOCATION_ARGS) ;

//--- Attributes
  public : GGS_luint64  it_count ;
  public : GGS_ident_map  it_sources ;
//--- Method 'string'
  public : virtual void method_string (C_Compiler &,
                                GGS_string& 
                                COMMA_LOCATION_ARGS) const ;

//--- Class message
  public : virtual const char * instanceMessage (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_String & ioString,
                        const PMSInt32 inIndentation) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformationEX * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*

#endif