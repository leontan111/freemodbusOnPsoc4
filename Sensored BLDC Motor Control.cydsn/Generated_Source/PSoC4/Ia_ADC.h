/*******************************************************************************
* File Name: Ia_ADC.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Ia_ADC_H) /* Pins Ia_ADC_H */
#define CY_PINS_Ia_ADC_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Ia_ADC_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Ia_ADC_Write(uint8 value) ;
void    Ia_ADC_SetDriveMode(uint8 mode) ;
uint8   Ia_ADC_ReadDataReg(void) ;
uint8   Ia_ADC_Read(void) ;
uint8   Ia_ADC_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Ia_ADC_DRIVE_MODE_BITS        (3)
#define Ia_ADC_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Ia_ADC_DRIVE_MODE_BITS))

#define Ia_ADC_DM_ALG_HIZ         (0x00u)
#define Ia_ADC_DM_DIG_HIZ         (0x01u)
#define Ia_ADC_DM_RES_UP          (0x02u)
#define Ia_ADC_DM_RES_DWN         (0x03u)
#define Ia_ADC_DM_OD_LO           (0x04u)
#define Ia_ADC_DM_OD_HI           (0x05u)
#define Ia_ADC_DM_STRONG          (0x06u)
#define Ia_ADC_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define Ia_ADC_MASK               Ia_ADC__MASK
#define Ia_ADC_SHIFT              Ia_ADC__SHIFT
#define Ia_ADC_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Ia_ADC_PS                     (* (reg32 *) Ia_ADC__PS)
/* Port Configuration */
#define Ia_ADC_PC                     (* (reg32 *) Ia_ADC__PC)
/* Data Register */
#define Ia_ADC_DR                     (* (reg32 *) Ia_ADC__DR)
/* Input Buffer Disable Override */
#define Ia_ADC_INP_DIS                (* (reg32 *) Ia_ADC__PC2)


#if defined(Ia_ADC__INTSTAT)  /* Interrupt Registers */

    #define Ia_ADC_INTSTAT                (* (reg32 *) Ia_ADC__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define Ia_ADC_DRIVE_MODE_SHIFT       (0x00u)
#define Ia_ADC_DRIVE_MODE_MASK        (0x07u << Ia_ADC_DRIVE_MODE_SHIFT)


#endif /* End Pins Ia_ADC_H */


/* [] END OF FILE */
