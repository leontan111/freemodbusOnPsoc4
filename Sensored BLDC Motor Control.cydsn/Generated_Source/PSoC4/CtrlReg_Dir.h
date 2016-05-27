/*******************************************************************************
* File Name: CtrlReg_Dir.h  
* Version 1.80
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CONTROL_REG_CtrlReg_Dir_H) /* CY_CONTROL_REG_CtrlReg_Dir_H */
#define CY_CONTROL_REG_CtrlReg_Dir_H

#include "cytypes.h"

    
/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 controlState;

} CtrlReg_Dir_BACKUP_STRUCT;


/***************************************
*         Function Prototypes 
***************************************/

void    CtrlReg_Dir_Write(uint8 control) ;
uint8   CtrlReg_Dir_Read(void) ;

void CtrlReg_Dir_SaveConfig(void) ;
void CtrlReg_Dir_RestoreConfig(void) ;
void CtrlReg_Dir_Sleep(void) ; 
void CtrlReg_Dir_Wakeup(void) ;


/***************************************
*            Registers        
***************************************/

/* Control Register */
#define CtrlReg_Dir_Control        (* (reg8 *) CtrlReg_Dir_Sync_ctrl_reg__CONTROL_REG )
#define CtrlReg_Dir_Control_PTR    (  (reg8 *) CtrlReg_Dir_Sync_ctrl_reg__CONTROL_REG )

#endif /* End CY_CONTROL_REG_CtrlReg_Dir_H */


/* [] END OF FILE */
