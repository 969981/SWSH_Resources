/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109cb70; name: FUN_0109cb70
 */


uint FUN_0109cb70(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_18;
  
  local_18 = 0x8e89686f5660e8f;
  if (*(long *)(param_1 + 0x2b0) == 0) {
    return 1;
  }
  uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  local_18 = 0xbf2bb2531b7cde14;
  if (*(long *)(param_1 + 0x2b0) == 0) {
    return 1;
  }
  uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
  return uVar1 & 1;
}


