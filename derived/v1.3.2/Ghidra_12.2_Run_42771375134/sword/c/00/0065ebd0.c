/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0065ebd0; name: FUN_0065ebd0
 */


void FUN_0065ebd0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  puVar5 = PTR_DAT_02714c70 + 0x10;
  puVar1 = PTR_DAT_02714c70 + 0x1a0;
  puVar2 = PTR_DAT_02714c70 + 0x1d8;
  *param_1 = (long)puVar5;
  param_1[1] = (long)puVar1;
  param_1[2] = (long)puVar2;
  if ((param_1[5] != 0) && (param_1[6] != 0)) {
    FUN_005f96f0(param_1[5],param_1);
    puVar5 = (undefined *)*param_1;
    param_1[6] = 0;
  }
  (**(code **)(puVar5 + 0xc0))(param_1);
  param_1[0x7d] = (long)(PTR_DAT_02714c88 + 0x10);
  plVar4 = param_1 + 0x82;
  if (((*(byte *)(param_1 + 0x86) & 1) == 0) && (lVar6 = *plVar4, lVar6 != 0)) {
    plVar8 = (long *)param_1[0x7e];
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x50))(plVar8,lVar6);
      (**(code **)(*plVar8 + 0x48))(plVar8,lVar6,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar4 = 0;
  }
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x86] = 0;
  plVar8 = param_1 + 0x78;
  *plVar4 = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x73] = (long)(PTR_DAT_027142d0 + 0x10);
  if (((*(byte *)(param_1 + 0x7c) & 1) == 0) && (*plVar8 != 0)) {
    plVar4 = (long *)param_1[0x74];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar8,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar8 = 0;
  }
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x7c] = 0;
  *plVar8 = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x69] = (long)(PTR_DAT_027143f0 + 0x10);
  plVar4 = param_1 + 0x6e;
  if (((*(byte *)(param_1 + 0x72) & 1) == 0) && (*plVar4 != 0)) {
    plVar8 = (long *)param_1[0x6a];
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x48))
                (plVar8,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x72] = 0;
  plVar8 = param_1 + 0x56;
  *plVar4 = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x51] = (long)(PTR_DAT_02714c80 + 0x10);
  if (((*(byte *)(param_1 + 0x5a) & 1) == 0) &&
     (puVar7 = (undefined8 *)*plVar8, puVar7 != (undefined8 *)0x0)) {
    plVar4 = (long *)param_1[0x52];
    if (plVar4 != (long *)0x0) {
      lVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,puVar7);
      if (lVar6 != 0) {
        puVar9 = puVar7;
        do {
          (**(code **)*puVar9)(puVar9);
          lVar6 = lVar6 + -1;
          puVar9 = puVar9 + 0x1a;
        } while (lVar6 != 0);
      }
      (**(code **)(*plVar4 + 0x48))
                (plVar4,puVar7,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar8 = 0;
  }
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x5a] = 0;
  plVar4 = param_1 + 0x4c;
  *plVar8 = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x47] = (long)(PTR_DAT_02714c78 + 0x10);
  if (((*(byte *)(param_1 + 0x50) & 1) == 0) &&
     (puVar7 = (undefined8 *)*plVar4, puVar7 != (undefined8 *)0x0)) {
    plVar8 = (long *)param_1[0x48];
    if (plVar8 != (long *)0x0) {
      lVar6 = (**(code **)(*plVar8 + 0x50))(plVar8,puVar7);
      if (lVar6 != 0) {
        puVar9 = puVar7;
        do {
          (**(code **)*puVar9)(puVar9);
          lVar6 = lVar6 + -1;
          puVar9 = puVar9 + 0x23;
        } while (lVar6 != 0);
      }
      (**(code **)(*plVar8 + 0x48))
                (plVar8,puVar7,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x50] = 0;
  *plVar4 = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  if ((*(byte *)(param_1 + 0x32) & 1) == 0) {
    if (param_1[0x2e] != 0) {
      plVar4 = (long *)param_1[0x2d];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[0x2e],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x2e] = 0;
    }
    param_1[0x2e] = 0;
    bVar3 = *(byte *)(param_1 + 0x2c);
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x2c);
  }
  if ((bVar3 & 1) == 0) {
    if (param_1[0x28] != 0) {
      plVar4 = (long *)param_1[0x27];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[0x28],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x28] = 0;
    }
    param_1[0x28] = 0;
    bVar3 = *(byte *)(param_1 + 0xc);
  }
  else {
    bVar3 = *(byte *)(param_1 + 0xc);
  }
  if ((bVar3 & 1) == 0) {
    if (param_1[8] != 0) {
      plVar4 = (long *)param_1[7];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,param_1[8],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[8] = 0;
    }
    param_1[8] = 0;
  }
  FUN_00638e70(param_1 + 3);
  return;
}


