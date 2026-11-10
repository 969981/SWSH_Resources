/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a2190; name: FUN_006a2190
 */


void FUN_006a2190(float param_1,undefined8 *param_2)

{
  int *piVar1;
  ushort *puVar2;
  float fVar3;
  
  piVar1 = (int *)*param_2;
  puVar2 = (ushort *)((long)piVar1 - (long)*piVar1);
  fVar3 = 0.0;
  if ((6 < *puVar2) && ((ulong)puVar2[3] != 0)) {
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar1 + (ulong)puVar2[3]));
  }
  if (param_1 < fVar3) {
    *(undefined4 *)(param_2 + 5) = 0;
    return;
  }
  fVar3 = 0.0;
  if ((8 < *puVar2) && ((ulong)puVar2[4] != 0)) {
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar1 + (ulong)puVar2[4]));
  }
  if (param_1 < fVar3) {
    *(undefined4 *)(param_2 + 5) = 1;
    return;
  }
  *(undefined4 *)(param_2 + 5) = 2;
  return;
}


