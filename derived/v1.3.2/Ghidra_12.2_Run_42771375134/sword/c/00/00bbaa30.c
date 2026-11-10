/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbaa30; name: FUN_00bbaa30
 */


undefined8 FUN_00bbaa30(long param_1)

{
  ulong uVar1;
  undefined8 local_18;
  
  local_18 = 0x81cae6c1bd03d3a6;
  if (*(long *)(param_1 + 0x2b0) == 0) {
    return 0;
  }
  uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
  if ((uVar1 & 1) != 0) {
    local_18 = 0x824bc2d1741eeefb;
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


