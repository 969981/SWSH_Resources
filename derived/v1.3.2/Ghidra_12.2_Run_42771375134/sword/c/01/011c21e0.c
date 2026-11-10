/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011c21e0; name: FUN_011c21e0
 */


void FUN_011c21e0(long *param_1)

{
  undefined *puVar1;
  undefined *local_38;
  undefined *puStack_30;
  undefined1 local_28;
  
  *param_1 = (long)(PTR_DAT_02725728 + 0x10);
  param_1[1] = 0;
  puVar1 = PTR_DAT_02716d70;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(long *)puVar1 != 2) {
    local_28 = 0;
    local_38 = PTR_DAT_02716670 + 0x10;
    puStack_30 = PTR_LAB_02716d78;
    FUN_00801c10(PTR_DAT_02716d70,&local_38);
    FUN_00801390(&local_38);
  }
  puVar1 = PTR_DAT_02716d10;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = *(long *)puVar1;
  return;
}


