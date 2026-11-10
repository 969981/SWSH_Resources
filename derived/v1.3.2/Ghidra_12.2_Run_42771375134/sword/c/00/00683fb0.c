/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00683fb0; name: FUN_00683fb0
 */


void FUN_00683fb0(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  puVar2 = PTR_DAT_02714e48;
  *(undefined1 *)((long)param_1 + 0x19) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if ((long *)param_1[0x1d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1d] + 0x18))();
    param_1[0x1d] = 0;
  }
  plVar6 = param_1 + 0x24;
  if (((*(byte *)(param_1 + 0x28) & 1) == 0) &&
     (puVar7 = (undefined8 *)*plVar6, puVar7 != (undefined8 *)0x0)) {
    plVar8 = (long *)param_1[0x20];
    if (plVar8 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar8 + 0x50))(plVar8,puVar7);
      if (lVar3 != 0) {
        puVar9 = puVar7;
        do {
          (**(code **)*puVar9)(puVar9);
          lVar3 = lVar3 + -1;
          puVar9 = puVar9 + 0x2e;
        } while (lVar3 != 0);
      }
      (**(code **)(*plVar8 + 0x48))
                (plVar8,puVar7,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar6 = 0;
  }
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  plVar8 = param_1 + 0x2e;
  param_1[0x28] = 0;
  *plVar6 = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if (((*(byte *)(param_1 + 0x32) & 1) == 0) && (*plVar8 != 0)) {
    plVar4 = (long *)param_1[0x2a];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar8,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar8 = 0;
  }
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x32] = 0;
  *plVar8 = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x30))();
    if ((long *)param_1[4] != (long *)0x0) {
      (**(code **)(*(long *)param_1[4] + 0x18))();
      param_1[4] = 0;
    }
  }
  if ((long *)param_1[0x1d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1d] + 0x18))();
    param_1[0x1d] = 0;
  }
  FUN_0067d060();
  lVar3 = FUN_0067d8f0();
  if (lVar3 != 0) {
    FUN_0067d060();
    uVar5 = FUN_0067d8f0();
    FUN_00683b30(uVar5,param_1);
  }
  param_1[0x29] = (long)(PTR_DAT_02714e58 + 0x10);
  if (((*(byte *)(param_1 + 0x32) & 1) == 0) && (*plVar8 != 0)) {
    plVar4 = (long *)param_1[0x2a];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar8,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar8 = 0;
  }
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x32] = 0;
  *plVar8 = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x1f] = (long)(PTR_DAT_02714e50 + 0x10);
  if (((*(byte *)(param_1 + 0x28) & 1) == 0) &&
     (puVar7 = (undefined8 *)*plVar6, puVar7 != (undefined8 *)0x0)) {
    plVar8 = (long *)param_1[0x20];
    if (plVar8 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar8 + 0x50))(plVar8,puVar7);
      if (lVar3 != 0) {
        puVar9 = puVar7;
        do {
          (**(code **)*puVar9)(puVar9);
          lVar3 = lVar3 + -1;
          puVar9 = puVar9 + 0x2e;
        } while (lVar3 != 0);
      }
      (**(code **)(*plVar8 + 0x48))
                (plVar8,puVar7,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar6 = 0;
  }
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  *plVar6 = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    if (param_1[0x18] != 0) {
      plVar6 = (long *)param_1[0x17];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x48))
                  (plVar6,param_1[0x18],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x18] = 0;
    }
    param_1[0x18] = 0;
    bVar1 = *(byte *)(param_1 + 0x16);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x16);
  }
  if ((bVar1 & 1) == 0) {
    if (param_1[0x12] != 0) {
      plVar6 = (long *)param_1[0x11];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x48))
                  (plVar6,param_1[0x12],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x12] = 0;
    }
    param_1[0x12] = 0;
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x10);
  }
  if ((bVar1 & 1) == 0) {
    if (param_1[0xc] != 0) {
      plVar6 = (long *)param_1[0xb];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x48))
                  (plVar6,param_1[0xc],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0xc] = 0;
    }
    param_1[0xc] = 0;
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
  }
  if ((bVar1 & 1) == 0) {
    if (param_1[6] != 0) {
      plVar6 = (long *)param_1[5];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x48))
                  (plVar6,param_1[6],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[6] = 0;
    }
    param_1[6] = 0;
  }
  FUN_005bf750(param_1 + 1);
  return;
}


