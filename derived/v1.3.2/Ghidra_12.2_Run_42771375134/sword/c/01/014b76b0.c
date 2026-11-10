/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b76b0; name: FUN_014b76b0
 */


int FUN_014b76b0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_40 [16];
  
  FUN_008885c0(auStack_40);
  iVar1 = FUN_00888630(auStack_40,0x32);
  if ((iVar1 == 0) || (iVar1 = FUN_00888630(auStack_40,0x3c), -1 < iVar1)) {
    iVar1 = FUN_00888630(auStack_40,0x33);
    if ((iVar1 == 0) || (iVar1 = FUN_00888630(auStack_40,0x3d), -1 < iVar1)) {
      iVar1 = FUN_00888630(auStack_40,0x34);
      if ((iVar1 == 0) || (iVar1 = FUN_00888630(auStack_40,0x3e), -1 < iVar1)) {
        iVar1 = FUN_00888630(auStack_40,0x36);
        if ((iVar1 == 0) || (iVar1 = FUN_00888630(auStack_40,0x40), -1 < iVar1)) {
          iVar1 = FUN_00888630(auStack_40,0x37);
          if ((iVar1 == 0) || (iVar1 = FUN_00888630(auStack_40,0x41), -1 < iVar1)) {
            iVar1 = FUN_00888630(auStack_40,0x35);
            if ((iVar1 == 0) || (iVar1 = FUN_00888630(auStack_40,0x3f), -1 < iVar1)) {
              iVar1 = -1;
              goto LAB_014b78b8;
            }
            uVar3 = FUN_0087a6e0(param_1,5);
          }
          else {
            uVar3 = FUN_0087a6e0(param_1,4);
          }
        }
        else {
          uVar3 = FUN_0087a6e0(param_1,3);
        }
      }
      else {
        uVar3 = FUN_0087a6e0(param_1,2);
      }
      goto joined_r0x014b7900;
    }
    uVar3 = FUN_0087a6e0(param_1,1);
    if (uVar3 == 0) goto LAB_014b77d8;
LAB_014b77ac:
    iVar4 = (int)((float)uVar3 / (float)-iVar1);
  }
  else {
    uVar3 = FUN_0087a6e0(param_1,0);
joined_r0x014b7900:
    if (uVar3 != 0) goto LAB_014b77ac;
LAB_014b77d8:
    iVar4 = 0;
  }
  uVar3 = FUN_0087d3e0(param_1);
  if ((uVar3 < 100) && (iVar1 = FUN_00888630(auStack_40,0x44), 0 < iVar1)) {
    iVar1 = (int)((float)(100 - uVar3) / (float)iVar1);
    uVar3 = uVar3 + (100 - uVar3) * iVar1;
  }
  else {
    iVar1 = 0;
  }
  if ((uVar3 - 100 < 0x3c) && (iVar2 = FUN_00888630(auStack_40,0x45), 0 < iVar2)) {
    iVar2 = (int)((float)(0xa0 - uVar3) / (float)iVar2);
    uVar3 = uVar3 + (0xa0 - uVar3) * iVar2;
    iVar1 = iVar1 + iVar2;
  }
  if ((uVar3 - 0xa0 < 0x5f) && (iVar2 = FUN_00888630(auStack_40,0x46), 0 < iVar2)) {
    iVar1 = iVar1 + (int)((float)(0xff - uVar3) / (float)iVar2);
  }
  if (iVar1 <= iVar4) {
    iVar1 = iVar4;
  }
LAB_014b78b8:
  FUN_00888620(auStack_40);
  return iVar1;
}


