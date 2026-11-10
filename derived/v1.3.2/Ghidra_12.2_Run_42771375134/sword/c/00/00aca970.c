/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aca970; name: FUN_00aca970
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00aca970(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar5 = *param_2;
  if (lVar5 == -0x64793ce85744b205) {
    lVar5 = (**(code **)(*param_1 + 0x208))(param_1);
    local_50 = 0x525829bbe8d0ab43;
    local_48 = "Head";
    local_40 = 4;
    local_38 = 0;
    lVar3 = (**(code **)(*param_1 + 0x208))(param_1,&local_50);
    uVar18 = _DAT_01d4b340;
    uVar2 = _UNK_01d4b348;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      uVar18 = _DAT_01d4b340;
      uVar2 = _UNK_01d4b348;
    }
  }
  else if (lVar5 == -0x3eb2348fd3e7ca4e) {
    lVar5 = (**(code **)(*param_1 + 0x208))(param_1);
    local_50 = 0x55c0d7a581349f0f;
    local_48 = "Origin";
    local_40 = 6;
    local_38 = 0;
    lVar3 = (**(code **)(*param_1 + 0x208))(param_1,&local_50);
    uVar18 = _DAT_01d49e20;
    uVar2 = _UNK_01d49e28;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      uVar18 = _DAT_01d49e20;
      uVar2 = _UNK_01d49e28;
    }
  }
  else {
    if (lVar5 != -0x64793be85744b052) {
      return 0;
    }
    lVar5 = (**(code **)(*param_1 + 0x208))(param_1);
    local_50 = 0x525829bbe8d0ab43;
    local_48 = "Head";
    local_40 = 4;
    local_38 = 0;
    lVar3 = (**(code **)(*param_1 + 0x208))(param_1,&local_50);
    uVar18 = _DAT_01d4b710;
    uVar2 = _UNK_01d4b718;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      uVar18 = _DAT_01d4b710;
      uVar2 = _UNK_01d4b718;
    }
  }
  local_38 = 0;
  uVar4 = 0;
  if ((lVar3 != 0) && (uVar4 = 0, lVar5 != 0)) {
    lVar5 = *(long *)(lVar3 + 0x120);
    iVar1 = *(int *)(*(long *)(lVar3 + 0x128) + 0x40);
    FUN_00723030(lVar5,iVar1);
    lVar5 = *(long *)(lVar5 + 0x1b8) + (long)iVar1 * 0x130;
    fVar20 = (float)uVar18;
    fVar6 = (float)*(undefined8 *)(lVar5 + 0xa0);
    fVar7 = (float)((ulong)*(undefined8 *)(lVar5 + 0xa0) >> 0x20);
    fVar8 = (float)*(undefined8 *)(lVar5 + 0xa8);
    fVar9 = (float)((ulong)*(undefined8 *)(lVar5 + 0xa8) >> 0x20);
    fVar21 = (float)((ulong)uVar18 >> 0x20);
    fVar10 = (float)*(undefined8 *)(lVar5 + 0xb0);
    fVar11 = (float)((ulong)*(undefined8 *)(lVar5 + 0xb0) >> 0x20);
    fVar12 = (float)*(undefined8 *)(lVar5 + 0xb8);
    fVar13 = (float)((ulong)*(undefined8 *)(lVar5 + 0xb8) >> 0x20);
    uVar19 = *(undefined8 *)(lVar5 + 0xd8);
    uVar18 = *(undefined8 *)(lVar5 + 0xd0);
    fVar22 = (float)uVar2;
    fVar14 = (float)*(undefined8 *)(lVar5 + 0xc0);
    fVar15 = (float)((ulong)*(undefined8 *)(lVar5 + 0xc0) >> 0x20);
    fVar16 = (float)*(undefined8 *)(lVar5 + 200);
    fVar17 = (float)((ulong)*(undefined8 *)(lVar5 + 200) >> 0x20);
    uVar4 = 1;
    param_3[1] = CONCAT44(fVar9 + fVar13 * 0.0 + fVar17 * 0.0,fVar8 + fVar12 * 0.0 + fVar16 * 0.0);
    *param_3 = CONCAT44(fVar7 + fVar11 * 0.0 + fVar15 * 0.0,fVar6 + fVar10 * 0.0 + fVar14 * 0.0);
    param_3[3] = CONCAT44(fVar13 + fVar9 * 0.0 + fVar17 * 0.0,fVar12 + fVar8 * 0.0 + fVar16 * 0.0);
    param_3[2] = CONCAT44(fVar11 + fVar7 * 0.0 + fVar15 * 0.0,fVar10 + fVar6 * 0.0 + fVar14 * 0.0);
    param_3[5] = CONCAT44(fVar17 + fVar9 * 0.0 + fVar13 * 0.0,fVar16 + fVar8 * 0.0 + fVar12 * 0.0);
    param_3[4] = CONCAT44(fVar15 + fVar7 * 0.0 + fVar11 * 0.0,fVar14 + fVar6 * 0.0 + fVar10 * 0.0);
    param_3[7] = CONCAT44((float)((ulong)uVar19 >> 0x20) +
                          fVar9 * fVar20 + fVar13 * fVar21 + fVar17 * fVar22,
                          (float)uVar19 + fVar8 * fVar20 + fVar12 * fVar21 + fVar16 * fVar22);
    param_3[6] = CONCAT44((float)((ulong)uVar18 >> 0x20) +
                          fVar7 * fVar20 + fVar11 * fVar21 + fVar15 * fVar22,
                          (float)uVar18 + fVar6 * fVar20 + fVar10 * fVar21 + fVar14 * fVar22);
  }
  return uVar4;
}


