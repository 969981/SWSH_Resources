/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010367c0; name: FUN_010367c0
 */


undefined8 FUN_010367c0(long param_1)

{
  ulong uVar1;
  undefined8 local_18;
  
  local_18 = 0x8e89686f5660e8f;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
    if ((uVar1 & 1) == 0) {
      return 1;
    }
    local_18 = 0xbf2bb2531b7cde14;
    if ((*(long *)(param_1 + 0x2b0) != 0) &&
       (uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18), (uVar1 & 1) == 0)) {
      return 1;
    }
  }
  local_18 = 0xd5a646e9eb5de80c;
  if (*(long *)(param_1 + 0x2b0) == 0) {
    return 0;
  }
  uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
  if ((uVar1 & 1) != 0) {
    local_18 = 0x31b5f77ad1a1d139;
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


