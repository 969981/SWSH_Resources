/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b89e0; name: FUN_006b89e0
 */


undefined8 FUN_006b89e0(int *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == 0) {
      uVar3 = FUN_006b90b0(*(undefined8 *)(param_1 + 2));
      return uVar3;
    }
    uVar2 = FUN_006b89e0(*(undefined8 *)(param_1 + 10));
    if ((uVar2 & 1) != 0) break;
    param_1 = *(int **)(param_1 + 0x12);
    iVar1 = *param_1;
  }
  return 1;
}


