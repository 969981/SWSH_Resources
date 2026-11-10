/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109ca10; name: FUN_0109ca10
 */


uint FUN_0109ca10(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_18;
  
  local_18 = 0x87b70e51b082a953;
  if (*(long *)(param_1 + 0x2b0) != 0) {
    uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    local_18 = 0xf4d4c581bc2cd1c7;
    if (*(long *)(param_1 + 0x2b0) != 0) {
      uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
      if ((uVar2 & 1) == 0) {
        return 1;
      }
      local_18 = 0xa971260b6d35975b;
      if (*(long *)(param_1 + 0x2b0) != 0) {
        uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
        if ((uVar2 & 1) == 0) {
          return 1;
        }
        local_18 = 0xe7b7c6a875bf6a8;
        if (*(long *)(param_1 + 0x2b0) == 0) {
          return 0;
        }
        uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18);
        return (uVar1 ^ 1) & 1;
      }
    }
  }
  return 0;
}


