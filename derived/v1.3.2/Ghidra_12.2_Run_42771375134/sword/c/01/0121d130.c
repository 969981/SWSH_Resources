/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121d130; name: FUN_0121d130
 */


undefined8 FUN_0121d130(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0077d930();
  if (((((uVar1 & 1) == 0) || (*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c))) ||
      (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20))) ||
     ((*(char *)(param_1 + 0x24) != *(char *)(param_2 + 0x24) ||
      (*(char *)(param_1 + 0x25) != *(char *)(param_2 + 0x25))))) {
    return 0;
  }
  uVar2 = FUN_0121dee0(param_1 + 0x26,param_2 + 0x26);
  return uVar2;
}


