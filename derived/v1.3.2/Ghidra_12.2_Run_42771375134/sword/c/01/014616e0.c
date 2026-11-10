/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014616e0; name: FUN_014616e0
 */


uint FUN_014616e0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_18;
  
  local_18 = 0x8e89686f5660e8f;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    local_18 = 0xbf2bb2531b7cde14;
    if (*(long *)(param_1 + 0x2b0) != 0) {
      uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      local_18 = 0xd5a646e9eb5de80c;
      if (*(long *)(param_1 + 0x2b0) != 0) {
        uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        local_18 = 0x31b5f77ad1a1d139;
        if (*(long *)(param_1 + 0x2b0) == 0) {
          return 1;
        }
        uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
        return uVar1 & 1;
      }
    }
  }
  return 1;
}


