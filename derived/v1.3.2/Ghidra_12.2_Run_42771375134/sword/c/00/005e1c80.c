/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e1c80; name: FUN_005e1c80
 */


void FUN_005e1c80(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_027142a0 + 0x10);
  FUN_005bf710(param_1 + 1);
  *(undefined2 *)(param_1 + 4) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0x4160000042700000;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x4120000040a00000;
  *(undefined8 *)((long)param_1 + 0x44) = 0x13f000000;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0xffffffff;
  puVar1 = PTR_DAT_027142a8 + 0x10;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xc] = (long)puVar1;
  param_1[0xd] = param_2;
  param_1[0x10] = 0xc;
  param_1[0x11] = 0;
  if (param_2 == 0) {
    lVar3 = FUN_005bc6f0();
    param_1[0xd] = lVar3;
  }
  puVar1 = PTR_DAT_027142b0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0x88;
  param_1[0x1b] = 0;
  param_1[0x16] = (long)(puVar1 + 0x10);
  param_1[0x17] = param_2;
  if (param_2 == 0) {
    lVar3 = FUN_005bc6f0();
    param_1[0x17] = lVar3;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0x400000000;
  param_1[0x24] = 0;
  puVar2 = PTR_DAT_027142b8;
  puVar1 = PTR_DAT_027142b8 + 0x10;
  param_1[0x31] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = (long)puVar1;
  param_1[0x2d] = param_2;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x68;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  if (param_2 == 0) {
    lVar3 = FUN_005bc6f0();
    param_1[0x2d] = lVar3;
  }
  puVar1 = PTR_DAT_027142c0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0x68;
  param_1[0x3b] = 0;
  param_1[0x36] = (long)(puVar1 + 0x10);
  param_1[0x37] = param_2;
  if (param_2 == 0) {
    lVar3 = FUN_005bc6f0();
    param_1[0x37] = lVar3;
  }
  param_1[0x40] = (long)(puVar2 + 0x10);
  param_1[0x41] = param_2;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0x68;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  if (param_2 == 0) {
    lVar3 = FUN_005bc6f0();
    param_1[0x41] = lVar3;
  }
  param_1[0x4a] = (long)(puVar1 + 0x10);
  param_1[0x4b] = param_2;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4e] = 0x68;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  if (param_2 == 0) {
    lVar3 = FUN_005bc6f0();
    param_1[0x4b] = lVar3;
    return;
  }
  return;
}


