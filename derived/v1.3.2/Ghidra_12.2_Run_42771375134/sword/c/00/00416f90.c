/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00416f90; name: FUN_00416f90
 */


void FUN_00416f90(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    do {
      (**(code **)(**(long **)(lVar1 + 8) + 0x10))();
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != *(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 0x10);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xfe;
  return;
}


