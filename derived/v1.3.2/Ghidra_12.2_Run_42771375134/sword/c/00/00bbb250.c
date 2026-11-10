/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbb250; name: FUN_00bbb250
 */


undefined8 FUN_00bbb250(long param_1)

{
  ulong uVar1;
  undefined8 local_18;
  
  local_18 = 0x4310f5ece1bce576;
  if (*(long *)(param_1 + 0x2b0) == 0) {
    return 0;
  }
  uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
  if ((uVar1 & 1) != 0) {
    local_18 = 0x630413d3a394d6cb;
    if (*(long *)(param_1 + 0x2b0) == 0) {
      return 0;
    }
    uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
    if ((uVar1 & 1) != 0) {
      return 0;
    }
  }
  return 1;
}


