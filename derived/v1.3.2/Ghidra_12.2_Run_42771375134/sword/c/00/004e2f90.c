/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e2f90; name: FUN_004e2f90
 */


void FUN_004e2f90(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = param_2 - *(long *)(param_1 + 8);
    if (*(long *)(param_1 + 0x28) != 0) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lVar1;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + lVar1;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + lVar1;
    }
    *(long *)(param_1 + 8) = param_2;
  }
  return;
}


