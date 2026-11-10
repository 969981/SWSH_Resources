/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f8f50; name: FUN_014f8f50
 */


uint FUN_014f8f50(long param_1)

{
  uint uVar1;
  undefined8 local_18;
  
  local_18 = 0xfd4061d896f29929;
  if (*(long *)(param_1 + 0x2b0) == 0) {
    return 1;
  }
  uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
  return uVar1 & 1;
}


