/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e3880; name: FUN_005e3880
 */


void FUN_005e3880(long *param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong *puVar5;
  ulong uVar6;
  
  plVar4 = param_1 + 0x1d;
  *param_1 = (long)(PTR_DAT_027142d8 + 0x10);
  puVar5 = (ulong *)(param_1 + 0x1a);
  uVar3 = *puVar5;
  if (uVar3 != 0) {
    uVar6 = 0;
    do {
      plVar2 = *(long **)(*plVar4 + uVar6 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar4 + uVar6 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = *puVar5;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  if (((*(byte *)(param_1 + 0x21) & 1) == 0) && (*plVar4 != 0)) {
    plVar2 = (long *)param_1[0x19];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  *puVar5 = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  *plVar4 = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  (**(code **)(*param_1 + 0x38))(param_1);
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 0x18))();
    param_1[0x17] = 0;
  }
  if ((*(byte *)(param_1 + 0x33) & 1) == 0) {
    if (param_1[0x2f] != 0) {
      plVar2 = (long *)param_1[0x2e];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0x2f],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x2f] = 0;
    }
    param_1[0x2f] = 0;
    bVar1 = *(byte *)(param_1 + 0x2d);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x2d);
  }
  if ((bVar1 & 1) == 0) {
    if (param_1[0x29] != 0) {
      plVar2 = (long *)param_1[0x28];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0x29],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x29] = 0;
    }
    param_1[0x29] = 0;
    bVar1 = *(byte *)(param_1 + 0x27);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x27);
  }
  if ((bVar1 & 1) == 0) {
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
  param_1[0x18] = (long)(PTR_DAT_027142f0 + 0x10);
  if (((*(byte *)(param_1 + 0x21) & 1) == 0) && (*plVar4 != 0)) {
    plVar2 = (long *)param_1[0x19];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  *puVar5 = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  *plVar4 = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0xd] = (long)(PTR_DAT_027142e8 + 0x10);
  plVar4 = param_1 + 0x12;
  if (((*(byte *)(param_1 + 0x16) & 1) == 0) && (*plVar4 != 0)) {
    plVar2 = (long *)param_1[0xe];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x16] = 0;
  *plVar4 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[3] = (long)(PTR_DAT_027142e0 + 0x10);
  plVar4 = param_1 + 8;
  if (((*(byte *)(param_1 + 0xc) & 1) == 0) && (*plVar4 != 0)) {
    plVar2 = (long *)param_1[4];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  *plVar4 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_005bf750(param_1 + 1);
  return;
}


