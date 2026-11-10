/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c63e0; name: FUN_005c63e0
 */


void FUN_005c63e0(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  byte *pbVar7;
  
  *param_1 = (long)(PTR_DAT_02713ec0 + 0x10);
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    if (param_1[0x5c] != 0) {
      plVar2 = (long *)param_1[0x5b];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0x5c],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x5c] = 0;
    }
    param_1[0x5c] = 0;
    bVar1 = *(byte *)(param_1 + 0x49);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x49);
  }
  if ((bVar1 & 1) == 0) {
    if (param_1[0x45] != 0) {
      plVar2 = (long *)param_1[0x44];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0x45],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x45] = 0;
    }
    param_1[0x45] = 0;
    bVar1 = *(byte *)(param_1 + 0x32);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x32);
  }
  if ((bVar1 & 1) == 0) {
    if (param_1[0x2e] != 0) {
      plVar2 = (long *)param_1[0x2d];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0x2e],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x2e] = 0;
    }
    param_1[0x2e] = 0;
    bVar1 = *(byte *)(param_1 + 0x1b);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x1b);
  }
  if ((bVar1 & 1) == 0) {
    if (param_1[0x17] != 0) {
      plVar2 = (long *)param_1[0x16];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0x17],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x17] = 0;
    }
    param_1[0x17] = 0;
  }
  param_1[0xb] = (long)(PTR_DAT_02713ec8 + 0x10);
  plVar2 = param_1 + 0x10;
  if (((*(byte *)(param_1 + 0x14) & 1) == 0) && (lVar5 = *plVar2, lVar5 != 0)) {
    plVar6 = (long *)param_1[0xc];
    if (plVar6 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar6 + 0x50))(plVar6,lVar5);
      if (lVar3 != 0) {
        pbVar7 = (byte *)(lVar5 + 0x30);
        do {
          if ((*pbVar7 & 1) == 0) {
            if (*(long *)(pbVar7 + -0x20) != 0) {
              plVar4 = *(long **)(pbVar7 + -0x28);
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x48))
                          (plVar4,*(long *)(pbVar7 + -0x20),
                           "../../../../Include\\SiCore/SiCore_String.inl",0xe1);
              }
              pbVar7[-0x20] = 0;
              pbVar7[-0x1f] = 0;
              pbVar7[-0x1e] = 0;
              pbVar7[-0x1d] = 0;
              pbVar7[-0x1c] = 0;
              pbVar7[-0x1b] = 0;
              pbVar7[-0x1a] = 0;
              pbVar7[-0x19] = 0;
            }
            pbVar7[-0x20] = 0;
            pbVar7[-0x1f] = 0;
            pbVar7[-0x1e] = 0;
            pbVar7[-0x1d] = 0;
            pbVar7[-0x1c] = 0;
            pbVar7[-0x1b] = 0;
            pbVar7[-0x1a] = 0;
            pbVar7[-0x19] = 0;
          }
          pbVar7 = pbVar7 + 0xb8;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      (**(code **)(*plVar6 + 0x48))(plVar6,lVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar2 = 0;
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x14] = 0;
  *plVar2 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    if (param_1[6] != 0) {
      plVar2 = (long *)param_1[5];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[6],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[6] = 0;
    }
    param_1[6] = 0;
  }
  FUN_005bf750(param_1 + 1);
  return;
}


