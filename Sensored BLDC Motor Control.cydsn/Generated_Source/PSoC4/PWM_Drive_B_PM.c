/*******************************************************************************
* File Name: PWM_Drive_B_PM.c
* Version 2.0
*
* Description:
*  This file contains the setup, control, and status commands to support
*  the component operations in the low power mode.
*
* Note:
*  None
*
********************************************************************************
* Copyright 2013-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "PWM_Drive_B.h"

static PWM_Drive_B_BACKUP_STRUCT PWM_Drive_B_backup;


/*******************************************************************************
* Function Name: PWM_Drive_B_SaveConfig
********************************************************************************
*
* Summary:
*  All configuration registers are retention. Nothing to save here.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM_Drive_B_SaveConfig(void)
{

}


/*******************************************************************************
* Function Name: PWM_Drive_B_Sleep
********************************************************************************
*
* Summary:
*  Stops the component operation and saves the user configuration.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM_Drive_B_Sleep(void)
{
    if(0u != (PWM_Drive_B_BLOCK_CONTROL_REG & PWM_Drive_B_MASK))
    {
        PWM_Drive_B_backup.enableState = 1u;
    }
    else
    {
        PWM_Drive_B_backup.enableState = 0u;
    }

    PWM_Drive_B_Stop();
    PWM_Drive_B_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM_Drive_B_RestoreConfig
********************************************************************************
*
* Summary:
*  All configuration registers are retention. Nothing to restore here.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM_Drive_B_RestoreConfig(void)
{

}


/*******************************************************************************
* Function Name: PWM_Drive_B_Wakeup
********************************************************************************
*
* Summary:
*  Restores the user configuration and restores the enable state.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void PWM_Drive_B_Wakeup(void)
{
    PWM_Drive_B_RestoreConfig();

    if(0u != PWM_Drive_B_backup.enableState)
    {
        PWM_Drive_B_Enable();
    }
}


/* [] END OF FILE */
