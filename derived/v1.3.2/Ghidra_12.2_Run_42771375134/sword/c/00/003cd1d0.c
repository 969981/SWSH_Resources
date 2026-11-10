/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cd1d0; name: FUN_003cd1d0
 */


long FUN_003cd1d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ushort local_58;
  undefined2 local_56;
  uint local_54;
  int local_4c;
  undefined2 local_48 [4];
  
  local_4c = 0;
  FUN_003cc600(&local_58);
  if ((local_58 & 1) == 0) {
    if ((local_58 >> 1 & 1) == 0) {
      if (local_4c == 0) {
        local_48[0] = local_56;
        lVar1 = FUN_003ce0f0(param_1,param_2,param_3,local_48,param_4,param_5);
      }
      else {
        local_48[0] = local_56;
        lVar1 = FUN_003ce2e0(param_1,param_2,param_3,local_48);
      }
    }
    else {
      lVar1 = FUN_003ce460(param_1,param_2,param_3,param_6);
    }
    if (local_54 != 0xffffffff) {
      *(byte *)(lVar1 + 0x25) = *(byte *)(lVar1 + 0x25) | 0x20;
      *(long *)(**(long **)(param_1 + 0x98) + (ulong)local_54 * 8) = lVar1;
      *(uint *)(lVar1 + 0x38) = local_54;
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}


