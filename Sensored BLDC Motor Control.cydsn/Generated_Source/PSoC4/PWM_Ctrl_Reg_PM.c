/*******************************************************************************
* File Name: PWM_Ctrl_Reg_PM.c
* Version 1.80
*
* Description:
*  This file contains the setup, control, and status commands to support 
*  the component operation in the low power mode. 
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "PWM_Ctrl_Reg.h"

/* Check for removal by optimization */
#if !defined(PWM_Ctrl_Reg_Sync_ctrl_reg__REMOVED)

static PWM_Ctrl_Reg_BACKUP_STRUCT  PWM_Ctrl_Reg_backup = {0u};

    
/*******************************************************************************
* Function Name: PWM_Ctrl_Reg_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM_Ctrl_Reg_SaveConfig(void) 
{
    PWM_Ctrl_Reg_backup.controlState = PWM_Ctrl_Reg_Control;
}


/*******************************************************************************
* Function Name: PWM_Ctrl_Reg_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*
*******************************************************************************/
void PWM_Ctrl_Reg_RestoreConfig(void) 
{
     PWM_Ctrl_Reg_Control = PWM_Ctrl_Reg_backup.controlState;
}


/*******************************************************************************
* Function Name: PWM_Ctrl_Reg_Sleep
********************************************************************************
*
* Summary:
*  Prepares the component for entering the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM_Ctrl_Reg_Sleep(void) 
{
    PWM_Ctrl_Reg_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM_Ctrl_Reg_Wakeup
********************************************************************************
*
* Summary:
*  Restores the component after waking up from the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM_Ctrl_Reg_Wakeup(void)  
{
    PWM_Ctrl_Reg_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
