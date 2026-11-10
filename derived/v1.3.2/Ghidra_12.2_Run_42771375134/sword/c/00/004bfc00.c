/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bfc00; name: FUN_004bfc00
 */


undefined4 FUN_004bfc00(float param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ushort uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_74 [4];
  
  uVar1 = *(ushort *)(PTR_DAT_02712df8 + 0x10);
  if ((uint)uVar1 < (uint)((*(int *)PTR_DAT_027134a8 + 1) - *(int *)PTR_DAT_027132c8)) {
    fVar11 = DAT_01d4bee4;
    if (*(uint *)(PTR_DAT_02712df8 + 8) == 0) {
      lVar5 = 0;
      bVar2 = 0;
      iVar8 = 2;
      if (uVar1 == 0) goto LAB_004bfd24;
    }
    else {
      plVar9 = *(long **)PTR_DAT_02712df8;
      uVar7 = 0;
      bVar2 = 0;
      lVar5 = 0;
      lVar10 = (ulong)*(uint *)(PTR_DAT_02712df8 + 8) << 3;
      iVar8 = 2;
      do {
        lVar6 = *plVar9;
        if ((*(uint *)(lVar6 + 0x26b) & 0x16010000) == 0) {
          fVar12 = *(float *)(lVar6 + 0x270);
          uVar7 = uVar7 + 1;
          if (fVar12 <= param_1) {
            iVar3 = FUN_0048d230(lVar6,auStack_74);
            if (iVar3 != 0) {
              lVar5 = lVar6;
              iVar8 = iVar3;
              fVar11 = fVar12;
            }
            bVar2 = bVar2 | (uVar7 <= uVar1 && iVar3 == 0);
          }
        }
        plVar9 = plVar9 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
      if (uVar1 <= uVar7) {
LAB_004bfd24:
        if (param_1 <= fVar11) {
          lVar5 = 0;
        }
        else if ((lVar5 != 0) && (iVar8 == 1)) {
          FUN_0048e060(lVar5,2);
        }
        uVar4 = 0x50;
        if ((bool)(bVar2 | lVar5 != 0)) {
          uVar4 = 1;
        }
        return uVar4;
      }
    }
  }
  return 1;
}


