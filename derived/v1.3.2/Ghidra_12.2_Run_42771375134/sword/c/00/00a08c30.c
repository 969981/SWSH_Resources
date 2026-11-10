/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a08c30; name: FUN_00a08c30
 */


void FUN_00a08c30(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x380) + 0x8b0))();
  if ((uVar1 & 1) == 0) {
    FUN_00a24530(*(undefined8 *)(param_1 + 0x20),param_2);
    return;
  }
  FUN_00a19370(*(undefined8 *)(param_1 + 0x38),param_2);
  return;
}


