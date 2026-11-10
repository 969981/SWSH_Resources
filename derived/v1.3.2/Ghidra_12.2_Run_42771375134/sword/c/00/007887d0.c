/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007887d0; name: FUN_007887d0
 */


undefined8 FUN_007887d0(float param_1,long param_2)

{
  ushort uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((*(long *)(param_2 + 8) != 0) && (*(char *)(param_2 + 3) != '\0')) {
    fVar5 = *(float *)(*(long *)(param_2 + 8) + 0x20);
    uVar1 = FUN_019a9320();
    fVar6 = (float)uVar1;
    uVar2 = FUN_019a9350(*(undefined8 *)(param_2 + 8));
    if ((uVar2 & 1) == 0) {
      if (((0.0 < param_1) && (fVar5 == fVar6)) || ((param_1 < 0.0 && (fVar5 == 0.0)))) {
        return 1;
      }
      fVar5 = fVar5 + param_1;
      fVar4 = fVar5;
      if (fVar6 < fVar5) {
        fVar4 = fVar6;
      }
      fVar3 = 0.0;
      if (0.0 <= fVar5) {
        fVar3 = fVar4;
      }
    }
    else {
      fVar5 = fVar5 + param_1;
      fVar3 = fVar5;
      if (fVar6 <= fVar5) {
        fVar3 = fVar5 - fVar6;
      }
      if (fVar5 <= 0.0) {
        fVar3 = fVar5 + fVar6;
      }
    }
    *(float *)(*(long *)(param_2 + 8) + 0x20) = fVar3;
  }
  return 0;
}


