/******************************************************************************/
/* File   : ServiceDlt.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceDlt.hpp"
#include "infServiceDlt_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICEDLT_AR_RELEASE_VERSION_MAJOR                                           4
#define SERVICEDLT_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SERVICEDLT_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SERVICEDLT_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SERVICEDLT_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SERVICEDLT_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceDlt, SERVICEDLT_VAR) ServiceDlt;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICEDLT_CODE) module_ServiceDlt::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICEDLT_CONST,       SERVICEDLT_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEDLT_CONFIG_DATA, SERVICEDLT_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceDlt_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceDlt_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceDlt_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceDlt_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceDlt_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEDLT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEDLT_CODE) module_ServiceDlt::DeInitFunction(
   void
){
#if(STD_ON == ServiceDlt_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceDlt_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceDlt_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEDLT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEDLT_CODE) module_ServiceDlt::MainFunction(
   void
){
#if(STD_ON == ServiceDlt_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceDlt_InitCheck)
   }
   else{
#if(STD_ON == ServiceDlt_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICEDLT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICEDLT_CODE) module_ServiceDlt::dummy(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

