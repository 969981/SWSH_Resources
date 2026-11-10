/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b7450; name: FUN_014b7450
 */


int FUN_014b7450(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_78 [6];
  undefined1 auStack_60 [16];
  
  FUN_008885c0(auStack_60);
  uVar1 = FUN_0087a6e0(param_1,0);
  local_78[0] = uVar1;
  iVar2 = FUN_0087a6e0(param_1,1);
  local_78[1] = iVar2;
  iVar3 = FUN_0087a6e0(param_1,2);
  local_78[2] = iVar3;
  iVar4 = FUN_0087a6e0(param_1,3);
  local_78[3] = iVar4;
  iVar5 = FUN_0087a6e0(param_1,4);
  local_78[4] = iVar5;
  iVar6 = FUN_0087a6e0(param_1,5);
  local_78[5] = iVar6;
  iVar7 = FUN_008783b0(param_1);
  iVar8 = FUN_00888630(auStack_60,0x32);
  if ((iVar8 == 0) || (iVar8 = FUN_00888630(auStack_60,0x3c), iVar8 < 1)) {
    iVar8 = FUN_00888630(auStack_60,0x33);
    if ((iVar8 == 0) || (iVar8 = FUN_00888630(auStack_60,0x3d), iVar8 < 1)) {
      iVar8 = FUN_00888630(auStack_60,0x34);
      if ((iVar8 == 0) || (iVar8 = FUN_00888630(auStack_60,0x3e), iVar8 < 1)) {
        iVar8 = FUN_00888630(auStack_60,0x36);
        if ((iVar8 == 0) || (iVar8 = FUN_00888630(auStack_60,0x40), iVar8 < 1)) {
          iVar8 = FUN_00888630(auStack_60,0x37);
          if ((iVar8 == 0) || (iVar8 = FUN_00888630(auStack_60,0x41), iVar8 < 1)) {
            iVar8 = FUN_00888630(auStack_60,0x35);
            if ((iVar8 == 0) || (iVar8 = FUN_00888630(auStack_60,0x3f), iVar8 < 1)) {
              iVar2 = -1;
              goto LAB_014b7678;
            }
            uVar9 = 5;
          }
          else {
            uVar9 = 4;
          }
        }
        else {
          uVar9 = 3;
        }
      }
      else {
        uVar9 = 2;
      }
    }
    else {
      uVar9 = 1;
    }
  }
  else {
    uVar9 = 0;
  }
  uVar1 = iVar6 + iVar5 + iVar4 + iVar3 + iVar2 + uVar1;
  iVar2 = 0;
  if ((uVar1 < 0x1fe) && (iVar7 != 0x124 || uVar9 != 0)) {
    if (local_78[uVar9] < 0xfc) {
      uVar1 = 0x1fe - uVar1;
      uVar9 = 0xfc - local_78[uVar9];
      if (uVar9 <= uVar1) {
        uVar1 = uVar9;
      }
      iVar2 = (int)((float)uVar1 / (float)iVar8);
    }
    else {
      iVar2 = 0;
    }
  }
LAB_014b7678:
  FUN_00888620(auStack_60);
  return iVar2;
}


