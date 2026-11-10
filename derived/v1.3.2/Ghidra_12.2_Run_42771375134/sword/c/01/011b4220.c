/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b4220; name: FUN_011b4220
 */


void FUN_011b4220(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if ((((iVar1 == 3) || (iVar1 == 2)) || (iVar1 == 1)) &&
     (*(long **)(param_1 + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


