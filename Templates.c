/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 9.20
* Profile  : STM32F746
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#include "ewlocale.h"
#include "_TemplatesGauge.h"
#include "Templates.h"

/* Initializer for the class 'Templates::Gauge' */
void TemplatesGauge__Init( TemplatesGauge _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( TemplatesGauge );
}

/* Re-Initializer for the class 'Templates::Gauge' */
void TemplatesGauge__ReInit( TemplatesGauge _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Templates::Gauge' */
void TemplatesGauge__Done( TemplatesGauge _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( TemplatesGauge );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Variants derived from the class : 'Templates::Gauge' */
EW_DEFINE_CLASS_VARIANTS( TemplatesGauge )
EW_END_OF_CLASS_VARIANTS( TemplatesGauge )

/* Virtual Method Table (VMT) for the class : 'Templates::Gauge' */
EW_DEFINE_CLASS( TemplatesGauge, CoreGroup, _None, _None, _None, _None, _None, "Templates::Gauge" )
  CoreRectView_initLayoutContext,
  CoreGroup_Draw,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( TemplatesGauge )

/* Bitmap resource : 'Templates::DefaultGaugeNeedle' */
EW_DEFINE_BITMAP_RES( TemplatesDefaultGaugeNeedle )
  EW_BITMAP_FRAMES( TemplatesDefaultGaugeNeedle, Default, EW_DRIVER_VARIANT_ALPHA8, 7, 120, 0 )
    EW_BITMAP_FRAME( 0, 0, 0, 0, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( TemplatesDefaultGaugeNeedle, Default )       /* ratio 59.05 % */
    0x44080100, 0x0020B020, 0xAE05060D, 0x07A00848, 0xC10C27C3, 0x90C39430, 0x0C4B4310,
    0xC5CC314F, 0x6E431970, 0x1425DD0C, 0xC1804FB0, 0x1814FB05, 0x826FB0A4, 0x38FB0EC1,
    0x8FB12C18, 0xFB174184, 0xB1BC185A, 0x204186CF, 0x4C187EFB, 0x41890FB2, 0x18A2FB29,
    0x8B4FB2DC, 0xC4FB3141, 0x4FB35C18, 0xFB3A418D, 0xB3EC18E6, 0x43418F8F, 0x7C190AFB,
    0x4191CFB4, 0x192EFB4C, 0x93EFB504, 0x50FB54C1, 0x2FB59419, 0xFB5DC196, 0xB6241974,
    0x66C1986F, 0xB41998FB, 0x419AAFB6, 0x19BAFB6F, 0x9CCFB73C, 0xDEFB7841, 0x0FB7CC19,
    0xFB03415F, 0xF8101732, 0x073EF320, 0xBE783102, 0xE7841020, 0x7853020F, 0x86502146,
    0x770218E7, 0x7021D678, 0x0221E788, 0x225E7899, 0x2A678AB0, 0xEE78BD02, 0xE78CD022,
    0x78DF0232, 0x8F102376, 0x03023BE7, 0x50240679, 0x0244E791, 0x24967927, 0x4DE79390,
    0x1E794902, 0x6795B025, 0x796D0256, 0x97F025AE, 0x91025F67, 0x30263E79, 0x0268679A,
    0x26CE79B5, 0x70E79C50, 0x99E3AD02, 0xE3D1023A, 0x90003CD9, 0x013ED9E4, 0x3EE0B028,
    0xA0F04C09, 0xB83C1C04, 0x8E0F08C1, 0x2B83C2C0, 0x0D20F0D4, 0xC3D83C3E, 0x011A0F11,
    0x644F83C5, 0x611620F1, 0x1A86083C, 0xC731A60F, 0xF1F07283, 0x3C851EE0, 0x0F238848,
    0x83C97236, 0xA0F27C96, 0x783CA827, 0xC20F2C4A, 0xB983CBA2, 0x30A0F30C, 0x4CB83CCC,
    0xD3520F35, 0x98DC83CD, 0xEF3960F3, 0x3E0EE83C, 0xE5A3DE0F, 0xB92CE582, 0x2E3C2E60,
    0x0B8B48D8, 0x82E1E182, 0x8FA02C35, 0x002CFA67, 0xF1997E80, 0x99798007, 0x748007A1,
    0x80075199, 0x9155996F, 0x11026ADA, 0xF43ECF50, 0x60105010, 0x96C41582, 0x4561055B,
    0xBD4550C7, 0xDB425314, 0x42D0C454, 0x00040502, 0x00000000

  EW_BITMAP_CLUT_EMPTY( TemplatesDefaultGaugeNeedle, Default )

  EW_BITMAPS_TABLE( TemplatesDefaultGaugeNeedle )
    EW_BITMAP( TemplatesDefaultGaugeNeedle, Default )
EW_END_OF_BITMAP_RES( TemplatesDefaultGaugeNeedle )

/* Table with links to derived variants of the bitmap resource : 'Templates::DefaultGaugeNeedle' */
EW_RES_WITHOUT_VARIANTS( TemplatesDefaultGaugeNeedle )

/* Embedded Wizard */
