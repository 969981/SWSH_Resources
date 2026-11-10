/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c6e10; name: FUN_005c6e10
 */


void FUN_005c6e10(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  
  puVar1 = PTR_DAT_02713ed0 + 200;
  *param_1 = (long)(PTR_DAT_02713ed0 + 0x10);
  param_1[1] = (long)puVar1;
  puVar6 = (ulong *)(param_1 + 0x10);
  uVar5 = *puVar6;
  plVar4 = param_1 + 0x13;
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      plVar2 = *(long **)(*plVar4 + uVar7 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar4 + uVar7 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar5 = *puVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  if (((*(byte *)(param_1 + 0x17) & 1) == 0) && (*plVar4 != 0)) {
    plVar2 = (long *)param_1[0xf];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  *puVar6 = 0;
  param_1[0x11] = 0;
  param_1[0x17] = 0;
  *plVar4 = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if ((*(byte *)(param_1 + 0x27) & 1) == 0) {
    if (param_1[0x23] != 0) {
      plVar2 = (long *)param_1[0x22];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0x23],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x23] = 0;
    }
    param_1[0x23] = 0;
  }
  puVar1 = PTR_DAT_02713ed8 + 0x10;
  plVar2 = param_1 + 0x1d;
  param_1[0x18] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x21) & 1) == 0) && (*plVar2 != 0)) {
    plVar3 = (long *)param_1[0x19];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  *plVar2 = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0xe] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x17) & 1) == 0) && (*plVar4 != 0)) {
    plVar2 = (long *)param_1[0xf];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  *puVar6 = 0;
  param_1[0x11] = 0;
  param_1[0x17] = 0;
  *plVar4 = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if ((*(byte *)(param_1 + 9) & 1) == 0) {
    if (param_1[5] != 0) {
      plVar4 = (long *)param_1[4];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[5],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[5] = 0;
    }
    param_1[5] = 0;
  }
  FUN_005bf750(param_1 + 2);
  return;
}


