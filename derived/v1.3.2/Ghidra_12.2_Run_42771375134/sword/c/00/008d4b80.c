/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d4b80; name: FUN_008d4b80
 */


void FUN_008d4b80(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)FUN_0076cd80(*(undefined8 *)(param_1 + 0x170),"p_Score");
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  *param_2 = uVar3;
  piVar2 = (int *)FUN_0076cd80(*(undefined8 *)(param_1 + 0x170),"p_PokeChangeEnable");
  if (piVar2 == (int *)0x0) {
    *(undefined1 *)(param_2 + 1) = 0;
    return;
  }
  *(bool *)(param_2 + 1) = *piVar2 != 0;
  return;
}


