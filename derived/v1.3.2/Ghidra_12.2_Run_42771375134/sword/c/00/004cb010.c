/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cb010; name: FUN_004cb010
 */


void FUN_004cb010(float param_1,undefined8 param_2,long *param_3,byte param_4,float *param_5,
                 long param_6,long param_7,undefined2 param_8)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = (ulong)param_4;
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      fVar3 = *param_5 * *(float *)(param_6 + lVar2);
      FUN_004cb940(fVar3,(param_5[1] * *(float *)(param_7 + lVar2) - fVar3) * param_1,param_2,
                   *param_3 + lVar2 * (ulong)*(ushort *)(param_3 + 2),param_8);
      lVar2 = lVar2 + 4;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}


