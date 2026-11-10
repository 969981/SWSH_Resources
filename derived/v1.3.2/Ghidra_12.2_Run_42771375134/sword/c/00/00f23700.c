/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f23700; name: FUN_00f23700
 */


void FUN_00f23700(float param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 auStack_d0 [48];
  uint local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_60;
  undefined4 local_58;
  float local_54;
  
  puVar2 = PTR_DAT_02710848;
  if (*(char *)(param_2 + 0x4c6) != '\0') {
    return;
  }
  if (*(char *)(param_2 + 0x4c4) == '\0') {
    uVar17 = *(undefined8 *)(param_2 + 0x4d8);
    uVar16 = *(undefined8 *)(param_2 + 0x4d0);
    uVar13 = *(undefined8 *)(param_2 + 0x4e8);
    uVar9 = *(undefined8 *)(param_2 + 0x4e0);
  }
  else {
    uVar17 = *(undefined8 *)(param_2 + 0x4f8);
    uVar16 = *(undefined8 *)(param_2 + 0x4f0);
    uVar13 = *(undefined8 *)(param_2 + 0x508);
    uVar9 = *(undefined8 *)(param_2 + 0x500);
  }
  fVar10 = (float)((ulong)uVar9 >> 0x20);
  fVar14 = (float)((ulong)uVar13 >> 0x20);
  fVar4 = (float)uVar9 + (float)*param_3;
  fVar11 = fVar10 + (float)((ulong)*param_3 >> 0x20);
  fVar12 = (float)uVar13 + (float)param_3[1];
  fVar15 = fVar14 + (float)((ulong)param_3[1] >> 0x20);
  if (*(char *)(param_2 + 0x4c5) == '\0') {
    fStack_f8 = 0.0;
    fStack_f4 = 0.0;
    local_100 = 0.0;
    fStack_fc = 0.0;
  }
  else {
    fVar5 = *(float *)(&DAT_01cd5328 + (ulong)(*(char *)(param_2 + 0x4c4) == '\0') * 4) * param_1;
    fStack_f4 = 1.0;
    if ((*(uint *)(param_2 + 0x4c0) & 1) != 0) {
      fStack_f4 = -1.0;
    }
    fVar6 = (float)FUN_01029020(0x40000000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
    fVar6 = fVar6 + -1.0 + DAT_01d4c4a8;
    fVar7 = (float)FUN_01029020(DAT_01d4c0e4,*(undefined8 *)(*(long *)puVar2 + 0x98));
    fVar7 = fVar7 + DAT_01d4c6e4 + DAT_01d4c554;
    fVar8 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)puVar2 + 0x98));
    iVar1 = *(int *)(param_2 + 0x4c0);
    fVar8 = fVar8 + -0.5 + DAT_01d4bec4;
    *(int *)(param_2 + 0x4c0) = iVar1 + 1;
    local_100 = fVar6 * fVar5 * fStack_f4;
    fStack_fc = fVar7 * fVar5 * fStack_f4;
    fStack_f8 = fVar8 * fVar5 * fStack_f4;
    fStack_f4 = fVar5 * 0.0 * fStack_f4;
    if (10 < iVar1) {
      *(undefined1 *)(param_2 + 0x4c5) = 0;
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_027194e8;
  FUN_00dfb4a0(auStack_d0,uVar3);
  local_54 = 1.0 / param_1;
  local_80 = CONCAT44(fVar11 + fStack_fc,fVar4 + local_100);
  uStack_78 = CONCAT44(fVar15 + fStack_f4,fVar12 + fStack_f8);
  local_90 = CONCAT44(fVar11 + ((float)((ulong)uVar16 >> 0x20) - fVar10) + fStack_fc,
                      fVar4 + ((float)uVar16 - (float)uVar9) + local_100);
  uStack_88 = CONCAT44(fVar15 + ((float)((ulong)uVar17 >> 0x20) - fVar14) + fStack_f4,
                       fVar12 + ((float)uVar17 - (float)uVar13) + fStack_f8);
  local_60 = (ulong)local_a0;
  local_58 = param_4;
  FUN_00dfdde0(uVar3,&local_90);
  return;
}


