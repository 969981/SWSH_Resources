/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01523d80; name: FUN_01523d80
 */


undefined8 FUN_01523d80(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_60 [16];
  
  FUN_008885c0(auStack_60,*param_2 & 0x7fff);
  uVar1 = FUN_00889210(auStack_60);
  FUN_00888620(auStack_60);
  FUN_008885c0(auStack_60,*param_1 & 0x7fff);
  uVar2 = FUN_00889210(auStack_60);
  FUN_00888620(auStack_60);
  FUN_008885c0(auStack_60,*param_3 & 0x7fff);
  uVar3 = FUN_00889210(auStack_60);
  FUN_00888620(auStack_60);
  FUN_008885c0(auStack_60,*param_2 & 0x7fff);
  uVar4 = FUN_00889210(auStack_60);
  FUN_00888620(auStack_60);
  if (uVar1 < uVar2) {
    uVar1 = *param_1;
    if (uVar3 < uVar4) {
      *param_1 = *param_3;
      *param_3 = uVar1;
    }
    else {
      *param_1 = *param_2;
      *param_2 = uVar1;
      FUN_008885c0(auStack_60,*param_3 & 0x7fff);
      uVar1 = FUN_00889210(auStack_60);
      FUN_00888620(auStack_60);
      FUN_008885c0(auStack_60,*param_2 & 0x7fff);
      uVar2 = FUN_00889210(auStack_60);
      FUN_00888620(auStack_60);
      if (uVar1 < uVar2) {
        uVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar1;
        return 2;
      }
    }
  }
  else {
    if (uVar4 <= uVar3) {
      return 0;
    }
    uVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar1;
    FUN_008885c0(auStack_60,*param_2 & 0x7fff);
    uVar1 = FUN_00889210(auStack_60);
    FUN_00888620(auStack_60);
    FUN_008885c0(auStack_60,*param_1 & 0x7fff);
    uVar2 = FUN_00889210(auStack_60);
    FUN_00888620(auStack_60);
    if (uVar1 < uVar2) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar1;
      return 2;
    }
  }
  return 1;
}


