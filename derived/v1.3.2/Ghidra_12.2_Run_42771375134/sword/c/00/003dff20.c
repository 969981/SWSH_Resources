/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dff20; name: FUN_003dff20
 */


void FUN_003dff20(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_18;
  
  uVar1 = *(uint *)(param_1 + 0x960);
  if (uVar1 < (*(uint *)(param_1 + 0x964) & 0x7fffffff)) {
    *(undefined8 *)(*(long *)(param_1 + 0x958) + (ulong)uVar1 * 8) = param_2;
    *(uint *)(param_1 + 0x960) = uVar1 + 1;
    return;
  }
  local_18 = param_2;
  FUN_003f4480(param_1 + 0x958,&local_18);
  return;
}


