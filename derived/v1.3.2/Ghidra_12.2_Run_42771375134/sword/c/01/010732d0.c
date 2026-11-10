/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010732d0; name: FUN_010732d0
 */


void FUN_010732d0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  if ((((param_2 & 1) == 0) || (*(int *)(*(long *)(param_1 + 0x5f0) + 0xe8) == 0)) ||
     ((*(char *)(param_1 + 0x690) != '\0' && (*(int *)(param_1 + 0x5dc) == 1)))) {
    local_18 = 0xde84e9d037549cec;
    uVar1 = FUN_00ffdfb0(param_1 + 0x100,&local_18);
    FUN_016b2da0(uVar1,0);
    return;
  }
  local_18 = 0xde84e9d037549cec;
  uVar1 = FUN_00ffdfb0(param_1 + 0x100,&local_18);
  FUN_016b2da0(uVar1,1);
  return;
}


