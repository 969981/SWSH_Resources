/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00128a30; name: FUN_00128a30
 */


float FUN_00128a30(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  
  bVar1 = *(byte *)(param_1 + 0xe) & 0xf;
  bVar2 = *(byte *)(param_2 + 0xe) & 0xf;
  if (bVar2 <= bVar1) {
    bVar2 = bVar1;
  }
  if (3 < bVar2) {
    return 0.0;
  }
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_2 + 8);
  switch(bVar2) {
  case 0:
    return (fVar3 + fVar4) * 0.5;
  case 1:
    if (fVar4 <= fVar3) {
      fVar3 = fVar4;
    }
    break;
  case 2:
    return fVar3 * fVar4;
  case 3:
    if (fVar3 <= fVar4) {
      fVar3 = fVar4;
    }
    return fVar3;
  }
  return fVar3;
}


