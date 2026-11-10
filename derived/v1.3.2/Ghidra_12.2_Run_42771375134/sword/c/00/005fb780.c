/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005fb780; name: FUN_005fb780
 */


void FUN_005fb780(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_027143e0 + 0x1d0;
  *param_1 = (long)(PTR_DAT_027143e0 + 0x10);
  param_1[1] = (long)puVar1;
  FUN_005bf710(param_1 + 2);
  param_1[4] = param_3;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[7] = lVar2;
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0x30000000400;
  *(undefined8 *)((long)param_1 + 0xdc) = 0x1c00000001;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0x2d;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x1f] = 0x100000001;
  param_1[0x20] = 0x100000000;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x10c) = 0x100;
  param_1[0x22] = 1;
  param_1[0x23] = 1;
  puVar1 = PTR_DAT_027143e8 + 0x10;
  param_1[0x39] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 8;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = (long)puVar1;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  lVar2 = FUN_005bc6f0();
  puVar1 = PTR_DAT_027143f0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 8;
  param_1[0x47] = 0;
  param_1[0x35] = lVar2;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x3e] = (long)(puVar1 + 0x10);
  lVar2 = FUN_005bc6f0();
  param_1[0x48] = 0;
  param_1[0x3f] = lVar2;
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 5;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  return;
}


