/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00667d60; name: FUN_00667d60
 */


void FUN_00667d60(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long local_58;
  
  *param_1 = (long)(PTR_DAT_02714d08 + 0x10);
  plVar7 = param_1 + 0x41;
  if (((*(byte *)(param_1 + 0x45) & 1) == 0) && (*plVar7 != 0)) {
    plVar3 = (long *)param_1[0x3d];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar7,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar7 = 0;
  }
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x45] = 0;
  *plVar7 = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  FUN_006687a0(param_1);
  FUN_00670ef0(param_1 + 0x1c7);
  puVar2 = PTR_DAT_02714d28;
  puVar1 = PTR_DAT_02714d28 + 0x10;
  plVar3 = param_1 + 0x1c2;
  param_1[0x1bd] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x1c6) & 1) == 0) && (*plVar3 != 0)) {
    plVar4 = (long *)param_1[0x1be];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x1c0] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1c6] = 0;
  *plVar3 = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c4] = 0;
  plVar3 = param_1 + 0x1b8;
  param_1[0x1b3] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x1bc) & 1) == 0) && (*plVar3 != 0)) {
    plVar4 = (long *)param_1[0x1b4];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x1b6] = 0;
  param_1[0x1b5] = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0x1bc] = 0;
  *plVar3 = 0;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  plVar3 = param_1 + 0x1ae;
  param_1[0x1a9] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x1b2) & 1) == 0) && (*plVar3 != 0)) {
    plVar4 = (long *)param_1[0x1aa];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x1ac] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1b2] = 0;
  *plVar3 = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  plVar3 = param_1 + 0x1a4;
  param_1[0x19f] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x1a8) & 1) == 0) && (*plVar3 != 0)) {
    plVar4 = (long *)param_1[0x1a0];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x1a2] = 0;
  param_1[0x1a1] = 0;
  puVar2 = puVar2 + 0x10;
  param_1[0x1a8] = 0;
  plVar4 = param_1 + 0x19a;
  *plVar3 = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x195] = (long)puVar2;
  if (((*(byte *)(param_1 + 0x19e) & 1) == 0) && (*plVar4 != 0)) {
    plVar3 = (long *)param_1[0x196];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0x198] = 0;
  param_1[0x197] = 0;
  param_1[0x19e] = 0;
  *plVar4 = 0;
  param_1[0x19b] = 0;
  param_1[0x19c] = 0;
  plVar3 = param_1 + 400;
  param_1[0x18b] = (long)puVar2;
  if (((*(byte *)(param_1 + 0x194) & 1) == 0) && (*plVar3 != 0)) {
    plVar4 = (long *)param_1[0x18c];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x18e] = 0;
  param_1[0x18d] = 0;
  param_1[0x194] = 0;
  *plVar3 = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  FUN_00696510(param_1 + 0x185);
  if ((*(byte *)(param_1 + 0x76) & 1) == 0) {
    if (param_1[0x72] != 0) {
      plVar3 = (long *)param_1[0x71];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,param_1[0x72],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x72] = 0;
    }
    param_1[0x72] = 0;
  }
  param_1[0x65] = (long)(PTR_DAT_02713f98 + 0x10);
  plVar3 = param_1 + 0x6a;
  if (((*(byte *)(param_1 + 0x6e) & 1) == 0) && (plVar4 = (long *)*plVar3, plVar4 != (long *)0x0)) {
    plVar8 = (long *)param_1[0x66];
    if (plVar8 != (long *)0x0) {
      lVar5 = (**(code **)(*plVar8 + 0x50))(plVar8,plVar4);
      if (lVar5 != 0) {
        plVar9 = plVar4;
        do {
          if ((*(byte *)(plVar9 + 5) & 1) == 0) {
            if (plVar9[1] != 0) {
              plVar6 = (long *)*plVar9;
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x48))
                          (plVar6,plVar9[1],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
              }
              plVar9[1] = 0;
            }
            plVar9[1] = 0;
          }
          plVar9 = plVar9 + 6;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      (**(code **)(*plVar8 + 0x48))
                (plVar8,plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x6e] = 0;
  *plVar3 = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x5b] = (long)(PTR_DAT_02714d30 + 0x10);
  if (((*(byte *)(param_1 + 100) & 1) == 0) && (lVar5 = param_1[0x60], lVar5 != 0)) {
    local_58 = lVar5;
    FUN_0066def0(param_1[0x5c],&local_58,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    param_1[0x60] = 0;
  }
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[100] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x50] = (long)(PTR_DAT_027142e0 + 0x10);
  plVar3 = param_1 + 0x55;
  if (((*(byte *)(param_1 + 0x59) & 1) == 0) && (*plVar3 != 0)) {
    plVar4 = (long *)param_1[0x51];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x59] = 0;
  plVar4 = param_1 + 0x4b;
  *plVar3 = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x46] = (long)(PTR_DAT_02714d20 + 0x10);
  if (((*(byte *)(param_1 + 0x4f) & 1) == 0) && (*plVar4 != 0)) {
    plVar3 = (long *)param_1[0x47];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar4 = 0;
  }
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4f] = 0;
  *plVar4 = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x3c] = (long)(PTR_DAT_02714d18 + 0x10);
  if (((*(byte *)(param_1 + 0x45) & 1) == 0) && (*plVar7 != 0)) {
    plVar3 = (long *)param_1[0x3d];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar7,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar7 = 0;
  }
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x45] = 0;
  plVar3 = param_1 + 0x37;
  *plVar7 = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  puVar1 = PTR_DAT_02714d10 + 0x10;
  param_1[0x32] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x3b) & 1) == 0) && (*plVar3 != 0)) {
    plVar7 = (long *)param_1[0x33];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x48))
                (plVar7,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x3b] = 0;
  *plVar3 = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  plVar7 = param_1 + 0x2d;
  param_1[0x28] = (long)puVar1;
  if (((*(byte *)(param_1 + 0x31) & 1) == 0) && (*plVar7 != 0)) {
    plVar3 = (long *)param_1[0x29];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x48))
                (plVar3,*plVar7,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar7 = 0;
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x31] = 0;
  *plVar7 = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    if (param_1[10] != 0) {
      plVar7 = (long *)param_1[9];
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x48))
                  (plVar7,param_1[10],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[10] = 0;
    }
    param_1[10] = 0;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    if (param_1[4] != 0) {
      plVar7 = (long *)param_1[3];
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x48))
                  (plVar7,param_1[4],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[4] = 0;
    }
    param_1[4] = 0;
  }
  FUN_005bf750(param_1 + 1);
  return;
}


