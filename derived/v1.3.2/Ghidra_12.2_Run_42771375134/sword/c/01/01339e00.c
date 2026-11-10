/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01339e00; name: FUN_01339e00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01339e00(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_02710848;
  fVar8 = DAT_01d4bd0c;
  do {
    fVar6 = (float)FUN_01029020(DAT_02a6e924 - DAT_02a6e920,*(undefined8 *)(*(long *)puVar2 + 0x98))
    ;
    fVar6 = fVar6 + DAT_02a6e920;
    fVar7 = (float)FUN_01029020(DAT_02a6e92c - DAT_02a6e928,*(undefined8 *)(*(long *)puVar2 + 0x98))
    ;
    fVar9 = (float)*(undefined8 *)(param_1 + 0xe0) - fVar6;
    fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 0x20) - 0.0;
    fVar11 = (float)*(undefined8 *)(param_1 + 0xe8) - (fVar7 + DAT_02a6e928);
    fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20) - 0.0;
    fVar9 = fVar9 * fVar9;
    fVar10 = fVar10 * fVar10;
    fVar11 = fVar11 * fVar11;
    fVar12 = fVar12 * fVar12;
    auVar13._4_4_ = fVar10;
    auVar13._0_4_ = fVar9;
    auVar13._8_4_ = fVar11;
    auVar13._12_4_ = fVar12;
    auVar1._4_4_ = fVar10;
    auVar1._0_4_ = fVar9;
    auVar1._8_4_ = fVar11;
    auVar1._12_4_ = fVar12;
    auVar13 = NEON_ext(auVar13,auVar1,8,1);
  } while (SQRT(auVar13._0_4_ + fVar9 + auVar13._4_4_ + fVar10) < fVar8);
  local_50 = CONCAT44((float)((ulong)_DAT_02a6e940 >> 0x20) + 0.0,fVar6 + (float)_DAT_02a6e940);
  uStack_48 = CONCAT44((float)((ulong)uRam0000000002a6e948 >> 0x20) + 0.0,
                       fVar7 + DAT_02a6e928 + (float)uRam0000000002a6e948);
  FUN_012dc9c0(*(undefined8 *)(param_2 + 0x10),&local_50);
  *(undefined1 *)(param_2 + 0x18) = 1;
  fVar8 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)puVar2 + 0x98));
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  local_60 = FUN_00a92cd0(fVar8 * DAT_01d4bb38 + fVar8 * DAT_01d4bb38,0,ZEXT816(0));
  FUN_012dc7f0(uVar5,local_60);
  puVar4 = (undefined8 *)FUN_012e3520(*(undefined8 *)(param_2 + 0x10));
  FUN_012b65a0(*puVar4);
  iVar3 = FUN_0087b560();
  if (iVar3 == 2) {
    FUN_012e6620(*(undefined8 *)(param_2 + 0x10));
  }
  else if (iVar3 == 3) {
    FUN_012e69e0(*(undefined8 *)(param_2 + 0x10));
  }
  return;
}


