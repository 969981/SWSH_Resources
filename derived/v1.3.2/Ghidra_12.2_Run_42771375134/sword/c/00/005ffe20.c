/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ffe20; name: FUN_005ffe20
 */


void FUN_005ffe20(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  *param_1 = (long)(PTR_DAT_027144e0 + 0x10);
  FUN_005bf710(param_1 + 1,0);
  plVar5 = param_1 + 4;
  *plVar5 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  lVar2 = FUN_005bc740();
  if (lVar2 == 0) {
    lVar2 = FUN_005bc6f0();
  }
  else {
    lVar2 = FUN_005bc740();
  }
  param_1[4] = lVar2;
  param_1[0xc] = 0;
  puVar1 = PTR_DAT_027144e8;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = (long)(puVar1 + 0x10);
  param_1[0xf] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0xf] = lVar2;
  }
  FUN_005fff80(param_1 + 0x13,param_2,1);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  if (param_1[6] == 0) {
    if ((param_1[9] & 1U) != 0) goto LAB_005fff10;
    lVar2 = param_1[5];
    if (lVar2 != 0) {
      plVar4 = (long *)*plVar5;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,lVar2,"../../../../Include\\SiCore/SiCore_String.inl",0xfa);
      }
      param_1[5] = 0;
    }
  }
  else {
    plVar4 = param_1 + 5;
    if (((param_1[9] & 1U) == 0) && (*plVar4 != 0)) {
      plVar3 = (long *)*plVar5;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
      }
      *plVar4 = 0;
    }
    *plVar4 = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  param_1[5] = 0;
LAB_005fff10:
  param_1[4] = param_2;
  FUN_005c47b0(plVar5,&DAT_01d38550);
  *(undefined8 *)((long)param_1 + 0x55) = 0;
  param_1[10] = 0;
  return;
}


