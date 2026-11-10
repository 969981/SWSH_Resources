/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bc540; name: FUN_003bc540
 */


void FUN_003bc540(undefined8 param_1,long param_2)

{
  ulong uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_003ba9c0(*(undefined8 *)(param_2 + 0x10));
  if ((fVar2 < (float)param_1) &&
     (FUN_003ba9d0(param_1,*(undefined8 *)(param_2 + 0x10)), *(int *)(param_2 + 0x20) != 0)) {
    uVar1 = 0;
    do {
      FUN_003c01f0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x28) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_2 + 0x20));
  }
  return;
}


