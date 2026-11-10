/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01511a60; name: FUN_01511a60
 */


undefined8 FUN_01511a60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0x4a8) == 0) {
    return 0xffffffff;
  }
  local_18 = param_2;
  uVar1 = FUN_006e7220(*(long *)(param_1 + 0x4a8),&local_18);
  return uVar1;
}


