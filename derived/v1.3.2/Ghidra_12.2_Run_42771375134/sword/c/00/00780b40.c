/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00780b40; name: FUN_00780b40
 */


void FUN_00780b40(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 3;
  if (*(int *)(param_1 + 0xa8) != 0) {
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  return;
}


