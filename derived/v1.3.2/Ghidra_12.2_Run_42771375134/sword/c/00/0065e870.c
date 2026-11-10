/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0065e870; name: FUN_0065e870
 */


void FUN_0065e870(long *param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_02714c70 + 0x1a0;
  puVar2 = PTR_DAT_02714c70 + 0x1d8;
  *param_1 = (long)(PTR_DAT_02714c70 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[2] = (long)puVar2;
  FUN_00638e20(param_1 + 3);
  param_1[5] = param_3;
  param_1[6] = 0;
  lVar4 = *(long *)(param_3 + 8);
  plVar3 = param_1 + 0xd;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = lVar4;
  param_1[8] = (long)plVar3;
  param_1[0xb] = 0x40;
  param_1[0xc] = 1;
  if (lVar4 == 0) {
    lVar4 = FUN_005bc740();
    if (lVar4 == 0) {
      lVar4 = FUN_005bc6f0();
    }
    else {
      lVar4 = FUN_005bc740();
    }
    plVar3 = (long *)param_1[8];
    param_1[7] = lVar4;
  }
  *(undefined1 *)plVar3 = 0;
  param_1[0x1c] = 0x800000000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x164) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined8 *)((long)param_1 + 0x154) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  lVar4 = FUN_005bc740();
  if (lVar4 == 0) {
    lVar4 = FUN_005bc6f0();
  }
  else {
    lVar4 = FUN_005bc740();
  }
  param_1[0x27] = lVar4;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  lVar4 = FUN_005bc740();
  if (lVar4 == 0) {
    lVar4 = FUN_005bc6f0();
  }
  else {
    lVar4 = FUN_005bc740();
  }
  param_1[0x33] = -0x100000000;
  param_1[0x2d] = lVar4;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x1a4) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1ae) = 0;
  *(undefined2 *)((long)param_1 + 0x1ac) = 0;
  param_1[0x1f] = 0;
  param_1[0x36] = -1;
  param_1[0x37] = -1;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  param_1[0x47] = (long)(PTR_DAT_02714c78 + 0x10);
  param_1[0x48] = param_2;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0x118;
  if (param_2 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[0x48] = lVar4;
  }
  puVar1 = PTR_DAT_02714c80;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x52] = param_2;
  param_1[0x55] = 0xd0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x51] = (long)(puVar1 + 0x10);
  if (param_2 == 0) {
    lVar4 = FUN_005bc6f0();
    param_1[0x52] = lVar4;
  }
  param_1[0x5b] = 0x10000000c;
  param_1[0x5c] = 0x100000001;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0x142c80000;
  *(undefined4 *)(param_1 + 0x5f) = 8;
  *(undefined8 *)((long)param_1 + 0x31c) = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  *(undefined8 *)((long)param_1 + 0x2fc) = 0;
  *(undefined8 *)((long)param_1 + 0x30c) = 0;
  *(undefined8 *)((long)param_1 + 0x304) = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  puVar1 = PTR_DAT_027143f0 + 0x10;
  param_1[0x68] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 8;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x69] = (long)puVar1;
  lVar4 = FUN_005bc6f0();
  param_1[0x76] = 0;
  puVar1 = PTR_DAT_027142d0;
  param_1[0x74] = 0;
  param_1[0x7c] = 0;
  param_1[0x6a] = lVar4;
  param_1[0x75] = 0;
  param_1[0x77] = 4;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x73] = (long)(puVar1 + 0x10);
  lVar4 = FUN_005bc6f0();
  puVar1 = PTR_DAT_02714c88;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x81] = 8;
  param_1[0x86] = 0;
  param_1[0x74] = lVar4;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x7d] = (long)(puVar1 + 0x10);
  lVar4 = FUN_005bc6f0();
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x7e] = lVar4;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x38) = 1;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)((long)param_1 + 0x1d4) = param_4;
  return;
}


