#ifndef UWM_PROPERTIES_H
#define UWM_PROPERTIES_H

void UpdateUWMContext(UltimateContext *uc);
void UpdateName(UltimateContext *uc);
void UpdateIconName(UltimateContext *uc);
void Updatera(UltimateContext *uc);
void UpdateWMHints(UltimateContext *uc);
void UpdateMotifHints(UltimateContext *uc);
void UpdateTransientForHint(UltimateContext *uc);
void UpdateWMProtocols(UltimateContext *uc);
void SetWinMapState(UltimateContext *uc,int state);

#endif
