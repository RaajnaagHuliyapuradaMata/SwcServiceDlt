#pragma once
/******************************************************************************/
/* File   : Dlt_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_Dlt.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define DLT_CORE_FUNCTIONALITIES                                               \
              FUNC(void, DLT_CODE) dummy                           (void);     \

#define DLT_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, DLT_CODE) dummy                           (void) = 0; \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_Dlt_Functionality{
   public:
      DLT_CORE_FUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

