/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ce960; name: FUN_005ce960
 */


void FUN_005ce960(long param_1)

{
  long lVar1;
  
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0xc0) + lVar1 * 8) + 0x270))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0xa8));
  }
  if (0 < *(int *)(param_1 + 0x1e8)) {
    lVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x200) + lVar1 * 8) + 0x28))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x1e8));
  }
  return;
}


