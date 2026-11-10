/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00782950; name: FUN_00782950
 */


void FUN_00782950(float param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  ulong uVar3;
  float fVar4;
  
  piVar2 = (int *)*param_2;
  fVar4 = 0.0;
  if ((10 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
     (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar3 != 0)) {
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar2 + uVar3));
  }
  uVar1 = 0;
  if (fVar4 <= param_1) {
    uVar1 = 3;
  }
  *(undefined4 *)(param_2 + 9) = uVar1;
  return;
}


