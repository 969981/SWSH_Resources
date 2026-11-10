/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c0f0b0; name: FUN_00c0f0b0
 */


void FUN_00c0f0b0(undefined8 param_1,int param_2)

{
  code *pcVar1;
  undefined **local_80;
  undefined8 uStack_78;
  long *local_60;
  undefined **local_50;
  undefined8 uStack_48;
  undefined ***local_30;
  
  if (param_2 != 0) {
    return;
  }
  local_50 = &PTR_LAB_0263be20;
  uStack_48 = param_1;
  local_30 = &local_50;
  FUN_00bef0c0(param_1,7,&local_50);
  if (&local_50 == local_30) {
    pcVar1 = (code *)(*local_30)[4];
LAB_00c0f110:
    (*pcVar1)();
  }
  else if (local_30 != (undefined ***)0x0) {
    pcVar1 = (code *)(*local_30)[5];
    goto LAB_00c0f110;
  }
  local_80 = &PTR_LAB_0263be68;
  uStack_78 = param_1;
  local_60 = (long *)&local_80;
  FUN_00bef0c0(param_1,1,&local_80);
  if (&local_80 == (undefined ***)local_60) {
    pcVar1 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00c0f160;
    pcVar1 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar1)();
LAB_00c0f160:
  FUN_00bef170(param_1);
  FUN_00bef3d0(param_1);
  return;
}


