/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00631b40; name: FUN_00631b40
 */


void FUN_00631b40(long *param_1,long param_2,byte param_3)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_027145a8 + 0x10);
  param_1[1] = param_2;
  puVar1 = PTR_DAT_027145b0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[2] = (long)puVar1;
  param_1[3] = param_2;
  param_1[4] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[3] = lVar2;
    param_1[7] = (long)puVar1;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  else {
    param_1[7] = (long)puVar1;
    param_1[8] = param_2;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    if (param_2 != 0) goto LAB_00631b98;
  }
  lVar2 = FUN_005bc6f0();
  param_1[8] = lVar2;
LAB_00631b98:
  puVar1 = PTR_DAT_027145b8;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 8;
  param_1[0x11] = 0;
  param_1[0xc] = (long)(puVar1 + 0x10);
  param_1[0xd] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0xd] = lVar2;
  }
  param_1[0x16] = param_2;
  param_1[0x17] = 0;
  puVar1 = PTR_DAT_027145c0 + 0x10;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0x58;
  param_1[0x1d] = 0;
  param_1[0x18] = (long)puVar1;
  param_1[0x19] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    *(undefined1 *)(param_1 + 0x24) = 0;
    param_1[0x19] = lVar2;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    *(byte *)((long)param_1 + 0x121) = param_3 & 1;
    *(undefined2 *)((long)param_1 + 0x126) = 0;
    *(undefined4 *)((long)param_1 + 0x122) = 0;
    lVar2 = FUN_005bc6f0();
    param_1[1] = lVar2;
    return;
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(byte *)((long)param_1 + 0x121) = param_3 & 1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined2 *)((long)param_1 + 0x126) = 0;
  *(undefined4 *)((long)param_1 + 0x122) = 0;
  return;
}


