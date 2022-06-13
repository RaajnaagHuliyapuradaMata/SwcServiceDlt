/******************************************************************************/
/* File   : Dlt.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgDlt.hpp"
#include "Dlt_core.hpp"
#include "infDlt_Exp.hpp"
#include "infDlt_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define DLT_AR_RELEASE_VERSION_MAJOR                                           4
#define DLT_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(DLT_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible DLT_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(DLT_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible DLT_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Dlt:
      INTERFACES_EXPORTED_DLT
      public abstract_module
   ,  public class_Dlt_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};
            infPduRClient_Up        infPduRClient_Dlt;

   public:
      module_Dlt(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, DLT_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, DLT_CONFIG_DATA, DLT_APPL_CONST) lptrCfgModule
      );
      FUNC(void, DLT_CODE) DeInitFunction (void);
      FUNC(void, DLT_CODE) MainFunction   (void);
      DLT_CORE_FUNCTIONALITIES
};

extern VAR(module_Dlt, DLT_VAR) Dlt;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, DLT_VAR, DLT_CONST) gptrinfEcuMClient_Dlt = &Dlt;
CONSTP2VAR(infDcmClient,  DLT_VAR, DLT_CONST) gptrinfDcmClient_Dlt  = &Dlt;
CONSTP2VAR(infSchMClient, DLT_VAR, DLT_CONST) gptrinfSchMClient_Dlt = &Dlt;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Dlt, DLT_VAR) Dlt(
   {
         DLT_AR_RELEASE_VERSION_MAJOR
      ,  DLT_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, DLT_CODE) module_Dlt::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, DLT_CONFIG_DATA, DLT_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Dlt_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgDlt;
         }
      }
      else{
#if(STD_ON == Dlt_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Dlt_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Dlt_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  DLT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, DLT_CODE) module_Dlt::DeInitFunction(void){
#if(STD_ON == Dlt_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Dlt_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Dlt_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  DLT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, DLT_CODE) module_Dlt::MainFunction(void){
#if(STD_ON == Dlt_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Dlt_InitCheck)
   }
   else{
#if(STD_ON == Dlt_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  DLT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, DLT_CODE) module_Dlt::dummy(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

