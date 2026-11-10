/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ecdd0; name: FUN_005ecdd0
 */


void FUN_005ecdd0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar4 = param_1 + 1;
  if (((*(byte *)(param_1 + 5) & 1) == 0) && (*plVar4 != 0)) {
    plVar2 = (long *)*param_1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar4,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
    }
    *plVar4 = 0;
  }
  *plVar4 = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  uVar5 = 0;
  lVar6 = 0;
  plVar2 = param_1 + 6;
  plVar1 = param_1 + 7;
  param_1[5] = 0;
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    if (*plVar1 == 0) {
      uVar5 = 0;
      lVar6 = 0;
    }
    else {
      plVar3 = (long *)*plVar2;
      if (plVar3 == (long *)0x0) {
        uVar5 = 0;
        lVar6 = 0;
      }
      else {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
        lVar6 = param_1[2];
        uVar5 = param_1[5];
      }
      *plVar1 = 0;
    }
  }
  *plVar1 = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (lVar6 == 0) {
    if ((uVar5 & 1) == 0) {
      if (*plVar4 == 0) goto LAB_005ecee8;
      plVar3 = (long *)*param_1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_String.inl",0xfa);
      }
      *plVar4 = 0;
      lVar6 = param_1[8];
      uVar5 = param_1[0xb];
      *param_1 = param_2;
      param_1[1] = 0;
      goto joined_r0x005ecf70;
    }
    *param_1 = param_2;
    lVar6 = *plVar1;
joined_r0x005ecfb0:
    if (lVar6 != 0) {
      plVar4 = (long *)*plVar2;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,lVar6,"../../../../Include\\SiCore/SiCore_String.inl",0xfa);
      }
      *plVar1 = 0;
    }
  }
  else {
    if (((uVar5 & 1) == 0) && (*plVar4 != 0)) {
      plVar3 = (long *)*param_1;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
      }
      *plVar4 = 0;
    }
    *plVar4 = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
LAB_005ecee8:
    lVar6 = param_1[8];
    uVar5 = param_1[0xb];
    *param_1 = param_2;
    param_1[1] = 0;
joined_r0x005ecf70:
    if (lVar6 == 0) {
      if ((uVar5 & 1) != 0) goto LAB_005ecfb8;
      lVar6 = *plVar1;
      goto joined_r0x005ecfb0;
    }
    if (((uVar5 & 1) == 0) && (*plVar1 != 0)) {
      plVar4 = (long *)*plVar2;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
      }
      *plVar1 = 0;
    }
    *plVar1 = 0;
    param_1[8] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  *plVar1 = 0;
LAB_005ecfb8:
  param_1[6] = param_2;
  FUN_005c47b0(param_1,"shaderpkg");
  FUN_005c47b0(plVar2,&DAT_01cda58e);
  return;
}


