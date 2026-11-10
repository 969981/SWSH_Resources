/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e2600; name: FUN_004e2600
 */


void FUN_004e2600(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  
  FUN_0048cb60(param_1 + 0x160,param_2,param_3 & 1);
  if (*(uint *)(param_1 + 0x168) == 0) {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  else {
    fVar3 = 1.0;
    lVar1 = (ulong)*(uint *)(param_1 + 0x168) * 0x18;
    pfVar2 = (float *)(*(long *)(param_1 + 0x160) + 0x10);
    do {
      fVar3 = *pfVar2 * fVar3;
      lVar1 = lVar1 + -0x18;
      pfVar2 = pfVar2 + 6;
    } while (lVar1 != 0);
    *(bool *)(param_1 + 0x50) = fVar3 == 0.0;
    if (fVar3 == 0.0) {
      FUN_004c3ac0(*(undefined8 *)(param_1 + 0xb8),param_1);
      return;
    }
  }
  return;
}


