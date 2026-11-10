/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01462070; name: FUN_01462070
 */


uint FUN_01462070(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_18;
  
  local_18 = 0xf81e7bf3cb040083;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    local_18 = 0xf81e7cf3cb040236;
    if (*(long *)(param_1 + 0x2b0) != 0) {
      uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      local_18 = 0xf81e7df3cb0403e9;
      if (*(long *)(param_1 + 0x2b0) != 0) {
        uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        local_18 = 0x58380bef0218fb26;
        if (*(long *)(param_1 + 0x2b0) != 0) {
          uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          local_18 = 0x58380aef0218f973;
          if (*(long *)(param_1 + 0x2b0) == 0) {
            return 1;
          }
          uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
          return uVar1 & 1;
        }
      }
    }
  }
  return 1;
}


