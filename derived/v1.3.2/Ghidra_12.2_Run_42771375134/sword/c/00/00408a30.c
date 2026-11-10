/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00408a30; name: FUN_00408a30
 */


void FUN_00408a30(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x30) == 0) {
    *(long *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_2 + 8) = 0;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    return;
  }
  *(long *)(param_2 + 8) = *(long *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = param_2;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}


