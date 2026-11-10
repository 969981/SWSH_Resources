/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b8a70; name: FUN_006b8a70
 */


void FUN_006b8a70(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    FUN_006b8a70(*(undefined8 *)(param_1 + 10));
    param_1 = *(int **)(param_1 + 0x12);
    iVar1 = *param_1;
  }
  FUN_006b9130(*(undefined8 *)(param_1 + 2));
  return;
}


