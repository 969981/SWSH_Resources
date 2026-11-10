/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008797a0; name: FUN_008797a0
 */


void FUN_008797a0(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0086ecb0(*(undefined8 *)(param_1 + 0x98),param_2);
  FUN_00879500(param_1,1);
  return;
}


