/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01523f80; name: FUN_01523f80
 */


int FUN_01523f80(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_60 [16];
  
  iVar1 = FUN_01523d80();
  FUN_008885c0(auStack_60,*param_4 & 0x7fff);
  uVar2 = FUN_00889210(auStack_60);
  FUN_00888620(auStack_60);
  FUN_008885c0(auStack_60,*param_3 & 0x7fff);
  uVar3 = FUN_00889210(auStack_60);
  FUN_00888620(auStack_60);
  if (uVar2 < uVar3) {
    uVar2 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar2;
    FUN_008885c0(auStack_60,*param_3 & 0x7fff);
    uVar2 = FUN_00889210(auStack_60);
    FUN_00888620(auStack_60);
    FUN_008885c0(auStack_60,*param_2 & 0x7fff);
    uVar3 = FUN_00889210(auStack_60);
    FUN_00888620(auStack_60);
    if (uVar2 < uVar3) {
      uVar2 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar2;
      FUN_008885c0(auStack_60,*param_2 & 0x7fff);
      uVar2 = FUN_00889210(auStack_60);
      FUN_00888620(auStack_60);
      FUN_008885c0(auStack_60,*param_1 & 0x7fff);
      uVar3 = FUN_00889210(auStack_60);
      FUN_00888620(auStack_60);
      if (uVar2 < uVar3) {
        uVar2 = *param_1;
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = uVar2;
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


