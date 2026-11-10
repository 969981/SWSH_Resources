/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c7d10; name: FUN_008c7d10
 */


void FUN_008c7d10(long param_1)

{
  undefined *puVar1;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_02717ae0;
  if (*(int *)(param_1 + 0x648) != 0) {
    local_28 = *(undefined8 *)
                (PTR_DAT_02717ae0 +
                (long)*(int *)(param_1 + (long)*(int *)(param_1 + 0x640) * 4 + 0x64c) * 0x20 + 0x10)
    ;
    FUN_00ffd010(param_1 + 0x100,&local_28);
    if (*(int *)(param_1 + 0x644) != -1) {
      local_28 = *(undefined8 *)
                  (puVar1 + (long)*(int *)(param_1 + (long)*(int *)(param_1 + 0x644) * 4 + 0x64c) *
                            0x20 + 0x18);
      FUN_00ffd010(param_1 + 0x100,&local_28);
    }
  }
  return;
}


