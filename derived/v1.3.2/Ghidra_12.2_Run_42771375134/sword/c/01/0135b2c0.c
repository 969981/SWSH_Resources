/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0135b2c0; name: FUN_0135b2c0
 */


undefined1  [16] FUN_0135b2c0(undefined8 param_1)

{
  ulong uVar1;
  long local_18;
  
  local_18 = FUN_01346e80();
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  FUN_012f2890(&local_18);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    local_18 = 0;
  }
  FUN_01346e80(param_1);
  uVar1 = FUN_012e49d0();
  if ((uVar1 & 1) != 0) {
    FUN_01346e80(param_1);
    FUN_012e55f0();
  }
  return ZEXT816(0x44d86c6f774e203b);
}


