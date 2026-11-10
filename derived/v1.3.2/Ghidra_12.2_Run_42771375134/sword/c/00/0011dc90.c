/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011dc90; name: FUN_0011dc90
 */


void FUN_0011dc90(long param_1,float *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = *(long *)(param_1 + 0xa48);
  uVar1 = *(uint *)(lVar2 + 0x14) & 0x7fffffff;
  if (uVar1 != 0) {
    fVar5 = *param_2;
    fVar6 = param_2[1];
    fVar7 = param_2[2];
    uVar3 = (ulong)uVar1;
    pfVar4 = (float *)(*(long *)(lVar2 + 8) + 0x18);
    do {
      pfVar4[-2] = pfVar4[-2] - fVar5;
      pfVar4[-1] = pfVar4[-1] - fVar6;
      uVar3 = uVar3 - 1;
      *pfVar4 = *pfVar4 - fVar7;
      pfVar4 = pfVar4 + 8;
    } while (uVar3 != 0);
  }
  *(undefined1 *)(lVar2 + 0x1c) = 1;
  fVar5 = *(float *)(param_1 + 0x790);
  if ((((*(float *)(param_1 + 0x78c) == DAT_01d4c150) && (fVar5 == DAT_01d4c150)) &&
      (fVar5 = DAT_01d4c150, *(float *)(param_1 + 0x794) == DAT_01d4c150)) &&
     (((*(float *)(param_1 + 0x798) == DAT_01d4c6a4 && (*(float *)(param_1 + 0x79c) == DAT_01d4c6a4)
       ) && (*(float *)(param_1 + 0x7a0) == DAT_01d4c6a4)))) {
    return;
  }
  *(float *)(param_1 + 0x78c) = *(float *)(param_1 + 0x78c) - *param_2;
  *(float *)(param_1 + 0x790) = fVar5 - param_2[1];
  *(float *)(param_1 + 0x794) = *(float *)(param_1 + 0x794) - param_2[2];
  *(float *)(param_1 + 0x798) = *(float *)(param_1 + 0x798) - *param_2;
  *(float *)(param_1 + 0x79c) = *(float *)(param_1 + 0x79c) - param_2[1];
  *(float *)(param_1 + 0x7a0) = *(float *)(param_1 + 0x7a0) - param_2[2];
  return;
}


