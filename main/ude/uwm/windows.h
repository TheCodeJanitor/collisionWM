#ifndef UWM_WINDOWS_H
#define UWM_WINDOWS_H

#include "nodes.h"

char WinVisible(UltimateContext *uc);
void ShapeFrame(UltimateContext *uc);
void EnborderWin(UltimateContext *uc);
void UnmapWin(UltimateContext *uc);
void MapWin(UltimateContext *uc,Bool NoPlacement);
void ActivateWin(UltimateContext *uc);
void MoveResizeWin(UltimateContext *uc,int x,int y,int width,int height);
void DisenborderWin(UltimateContext *uc,Bool alive);
Node* DeUltimizeWin(UltimateContext *uc,Bool alive);
Node* PlainDeUltimizeWin(UltimateContext *uc,Bool alive);
UltimateContext *UltimizeWin(Window win,Window Parent);
void IconifyWin(UltimateContext *uc);
void DisplayWin(UltimateContext *uc);
void CloseWin(UltimateContext *uc);
void DeiconifyMenu();

#endif
