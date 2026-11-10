/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084ac60; name: FUN_0084ac60
 */


void FUN_0084ac60(long *param_1)

{
  undefined *puVar1;
  undefined *local_38;
  undefined *puStack_30;
  undefined1 local_28;
  
  puVar1 = PTR_DAT_02717258 + 0x10;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  puVar1 = PTR_DAT_02716d70;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if (*(long *)puVar1 != 2) {
    local_28 = 0;
    local_38 = PTR_DAT_02716670 + 0x10;
    puStack_30 = PTR_LAB_02716d78;
    FUN_00801c10(PTR_DAT_02716d70,&local_38);
    FUN_00801390(&local_38);
  }
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  param_1[3] = *(long *)PTR_DAT_02716d10;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}


