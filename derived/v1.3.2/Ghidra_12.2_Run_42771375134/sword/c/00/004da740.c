/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004da740; name: FUN_004da740
 */


undefined8 FUN_004da740(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x70) + 0x18);
  iVar2 = FUN_004ddd90(*(long *)(param_1 + 0x70),*(undefined8 *)(lVar4 + 0x290),
                       *(undefined4 *)(lVar4 + 0x298));
  if (iVar2 == 1) {
    fVar6 = *(float *)(param_2 + 0x214) *
            (float)((uint)*(ushort *)PTR_DAT_02712ac0 * (*(int *)(PTR_DAT_02712b90 + 0x20) + 1));
    fVar7 = 0.5;
    if (fVar6 <= 0.0) {
      fVar7 = -0.5;
    }
    if ((int)(fVar7 + fVar6) <= *(int *)(param_2 + 0x288)) {
      return 0x3f;
    }
    if ((*(int *)(param_2 + 0x288) < 0) &&
       ((*(byte *)(*(long *)(param_1 + 0x70) + 0x20) >> 1 & 1) == 0)) {
      *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) | 1;
      lVar4 = 0;
      if (*(long *)(param_1 + 0x20) != 0) {
        lVar4 = *(long *)(param_1 + 0x20) + -0x18;
      }
      uVar5 = *(undefined8 *)PTR_DAT_02712ad0;
      uVar1 = *(undefined4 *)(lVar4 + 0x1d8);
      uVar3 = FUN_0044fc40(lVar4 + 0x18);
      FUN_0048f8a0(uVar5,uVar1,uVar3);
    }
    return 1;
  }
  if (iVar2 != 0x3f) {
    return 2;
  }
  if (-1 < *(int *)(param_2 + 0x288)) {
    return 0x3f;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x70) + 0x20) >> 1 & 1) != 0) {
    return 0x3f;
  }
  *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) | 1;
  lVar4 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar4 = *(long *)(param_1 + 0x20) + -0x18;
  }
  uVar5 = *(undefined8 *)PTR_DAT_02712ad0;
  uVar1 = *(undefined4 *)(lVar4 + 0x1d8);
  uVar3 = FUN_0044fc40(lVar4 + 0x18);
  FUN_0048f8a0(uVar5,uVar1,uVar3);
  return 0x3f;
}


