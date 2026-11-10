/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7e7a0; name: FUN_00d7e7a0
 */


void FUN_00d7e7a0(long param_1,char *param_2)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(long *)(param_1 + 0x5d0) + 0x280);
  if (*piVar2 == 2) {
    bVar1 = (char)piVar2[2] == '\0';
  }
  else {
    bVar1 = true;
  }
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5f8),bVar1 & *param_2 != '\0');
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x600),bVar1 & *param_2 != '\0');
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x660),*param_2,1);
  return;
}


