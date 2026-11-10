/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bcb10; name: FUN_005bcb10
 */


void FUN_005bcb10(long *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02713e10 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = -1;
  param_1[0x15] = 0;
  param_1[0x16] = -1;
  puVar1 = PTR_DAT_02713e18 + 0x10;
  param_1[0x17] = 0;
  param_1[0x18] = (long)puVar1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  lVar4 = FUN_005bc6f0();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x19] = lVar4;
  param_1[0x1d] = (long)puVar1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  lVar4 = FUN_005bc6f0();
  puVar1 = PTR_DAT_02713e20;
  param_1[0x28] = 0;
  puVar3 = PTR_DAT_02713e28;
  param_1[0x1e] = lVar4;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x22] = (long)(puVar1 + 0x10);
  param_1[0x23] = 0;
  param_1[0x24] = (long)(puVar3 + 0x10);
  param_1[0x25] = 0;
  lVar4 = FUN_005bc6f0();
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x25] = lVar4;
  param_1[0x29] = (long)(puVar3 + 0x10);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  lVar4 = FUN_005bc6f0();
  puVar1 = PTR_DAT_02713e30;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x2a] = lVar4;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 8;
  param_1[0x33] = 0;
  param_1[0x2e] = (long)(puVar1 + 0x10);
  param_1[0x2f] = 0;
  lVar4 = FUN_005bc6f0();
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  puVar1 = PTR_DAT_02713e08;
  param_1[0x2f] = lVar4;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0x90;
  param_1[0x3a] = (long)(puVar1 + 0x10);
  param_1[0x3b] = 0;
  lVar4 = FUN_005bc6f0();
  *(undefined2 *)(param_1 + 0x46) = 0x100;
  param_1[0x45] = 0;
  param_1[0x3b] = lVar4;
  param_1[0x44] = 0;
  *(undefined2 *)((long)param_1 + 0x236) = 0;
  *(undefined4 *)((long)param_1 + 0x232) = 0;
  lVar4 = FUN_005bc6f0();
  puVar1 = PTR_DAT_02713e38;
  plVar2 = param_1;
  if (param_2 != (long *)0x0) {
    plVar2 = param_2;
  }
  param_1[0x57] = 0;
  param_1[1] = (long)plVar2;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x47] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x22] = (long)(puVar1 + 0x10);
  param_1[0x23] = lVar4;
  FUN_005c8750(param_1 + 0x48);
  return;
}


