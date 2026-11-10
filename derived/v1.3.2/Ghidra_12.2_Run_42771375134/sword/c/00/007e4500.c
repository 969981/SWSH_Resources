/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e4500; name: FUN_007e4500
 */


int * FUN_007e4500(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  
  if (0 < *(int *)(param_1 + 0x68)) {
    piVar1 = *(int **)(param_1 + 0x70);
    lVar2 = 0;
    do {
      if ((*piVar1 <= param_2) && (param_2 < piVar1[1])) {
        return piVar1;
      }
      lVar2 = lVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (lVar2 < *(int *)(param_1 + 0x68));
  }
  return (int *)0x0;
}


