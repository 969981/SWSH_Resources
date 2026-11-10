/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c6140; name: FUN_005c6140
 */


void FUN_005c6140(long *param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  byte *pbVar7;
  
  *param_1 = (long)(PTR_DAT_02713ec0 + 0x10);
  FUN_005bf710(param_1 + 1,param_3);
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = param_4;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = param_3;
  param_1[6] = 0;
  if (param_3 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[5] = lVar2;
  }
  plVar6 = param_1 + 0x10;
  *plVar6 = 0;
  puVar1 = PTR_DAT_02713ec8;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0xb8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0xb] = (long)(puVar1 + 0x10);
  param_1[0xc] = param_3;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (param_3 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0xc] = lVar2;
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = (long)(param_1 + 0x1c);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x80;
  param_1[0x1b] = 1;
  lVar2 = FUN_005bc740();
  if (lVar2 == 0) {
    lVar2 = FUN_005bc6f0();
  }
  else {
    lVar2 = FUN_005bc740();
  }
  param_1[0x16] = lVar2;
  *(undefined1 *)param_1[0x17] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x80;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x32] = 1;
  param_1[0x2e] = (long)(param_1 + 0x33);
  param_1[0x2f] = 0;
  lVar2 = FUN_005bc740();
  if (lVar2 == 0) {
    lVar2 = FUN_005bc6f0();
  }
  else {
    lVar2 = FUN_005bc740();
  }
  param_1[0x2d] = lVar2;
  *(undefined1 *)param_1[0x2e] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = (long)(param_1 + 0x4a);
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0x80;
  param_1[0x49] = 1;
  lVar2 = FUN_005bc740();
  if (lVar2 == 0) {
    lVar2 = FUN_005bc6f0();
  }
  else {
    lVar2 = FUN_005bc740();
  }
  param_1[0x44] = lVar2;
  *(undefined1 *)param_1[0x45] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = (long)(param_1 + 0x61);
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = 0x80;
  param_1[0x60] = 1;
  lVar2 = FUN_005bc740();
  if (lVar2 == 0) {
    lVar2 = FUN_005bc6f0();
  }
  else {
    lVar2 = FUN_005bc740();
  }
  param_1[0x5b] = lVar2;
  *(undefined1 *)param_1[0x5c] = 0;
  if (((*(byte *)(param_1 + 0x14) & 1) == 0) && (lVar2 = *plVar6, lVar2 != 0)) {
    plVar5 = (long *)param_1[0xc];
    if (plVar5 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar5 + 0x50))(plVar5,lVar2);
      if (lVar3 != 0) {
        pbVar7 = (byte *)(lVar2 + 0x30);
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
      (**(code **)(*plVar5 + 0x48))(plVar5,lVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar6 = 0;
  }
  param_1[0xd] = 0;
  param_1[0xe] = 4;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = (long)(param_1 + 0x15);
  param_1[0x14] = 1;
  return;
}


