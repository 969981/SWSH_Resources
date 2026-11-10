/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d4da0; name: FUN_007d4da0
 */


undefined8 FUN_007d4da0(long param_1)

{
  ulong uVar1;
  int local_14;
  
  local_14 = FUN_007d7b40(*(undefined8 *)(param_1 + 0x110));
  if (local_14 != *(int *)(param_1 + 0xa8)) {
    uVar1 = FUN_007da3d0(*(undefined8 *)(param_1 + 0xd0),&local_14);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    *(int *)(param_1 + 0xa8) = local_14;
    if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xa0) + 8))();
    }
  }
  return 1;
}


