/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b8940; name: FUN_006b8940
 */


undefined8 FUN_006b8940(int *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 != 1) goto LAB_006b8970;
  do {
    uVar1 = FUN_006b8940(*(undefined8 *)(param_1 + 10));
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    while( true ) {
      param_1 = *(int **)(param_1 + 0x12);
      iVar3 = *param_1;
      if (iVar3 == 1) break;
LAB_006b8970:
      if (iVar3 != 2) {
        if (iVar3 == 0) {
          uVar2 = FUN_006b8c00(*(undefined8 *)(param_1 + 2));
          return uVar2;
        }
        return 0;
      }
      uVar1 = FUN_006b8940(*(undefined8 *)(param_1 + 10));
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
  } while( true );
}


