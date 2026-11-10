/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01395710; name: FUN_01395710
 */


void FUN_01395710(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float local_2b4;
  undefined1 *local_2b0;
  code *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  long alStack_290 [13];
  long local_228;
  float local_220 [72];
  undefined *local_100;
  code *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined1 **local_e0 [14];
  
  if (*(char *)(param_1 + 0x33c) != '\0') {
    return;
  }
  fVar10 = *(float *)(param_1 + 0x340) + DAT_01d4c554;
  fVar9 = (float)FUN_012dcb90();
  fVar3 = DAT_01d4c6ac;
  fVar9 = *(float *)(param_1 + 0x3d0) + fVar9 * fVar10;
  local_2b4 = fVar9 * DAT_01d4bd94 + DAT_01d4c6ac;
  *(float *)(param_1 + 0x3d0) = fVar9;
  local_220[0] = 1.0;
  pfVar1 = local_220;
  if (local_2b4 <= 1.0) {
    pfVar1 = &local_2b4;
  }
  pfVar2 = &DAT_01d4c6ac;
  if (fVar3 <= local_2b4) {
    pfVar2 = pfVar1;
  }
  fVar3 = *pfVar2;
  local_2b4 = fVar3;
  fVar9 = (float)FUN_01029020(*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
  if (fVar9 < fVar3) {
    FUN_0132a990(local_220,param_1 + 0x80);
    puVar5 = PTR_LAB_02727800;
    puVar4 = PTR_LAB_027277f8;
    lVar8 = 0;
    do {
      alStack_290[0] = (long)local_220 + lVar8;
      local_298 = &LAB_01396450;
      local_2b0 = &LAB_01396390;
      local_2a8 = FUN_01396430;
      local_2a0 = &LAB_01396440;
      local_100 = PTR_LAB_027277e8;
      local_f8 = (code *)PTR_FUN_027277f0;
      local_f0 = puVar4;
      local_e8 = puVar5;
      local_e0[0] = &local_2b0;
      FUN_01307150(&local_228,*(undefined8 *)(param_1 + 0x330),&local_100);
      pcVar6 = local_f8;
      if (local_f8 != (code *)0x0) {
        local_f0 = (undefined *)0x0;
        local_e8 = (undefined *)0x0;
        local_100 = (undefined *)0x0;
        local_f8 = (code *)0x0;
        (*pcVar6)(local_e0);
      }
      lVar7 = local_228;
      if (local_228 != 0) {
        (**(code **)(*(long *)(local_228 + 0x48) + 0x18))();
        local_228 = 0;
      }
      pcVar6 = local_2a8;
      if (local_2a8 != (code *)0x0) {
        local_2a0 = (undefined1 *)0x0;
        local_298 = (undefined1 *)0x0;
        local_2b0 = (undefined1 *)0x0;
        local_2a8 = (code *)0x0;
        (*pcVar6)(alStack_290);
      }
    } while ((lVar8 != 0x100) && (lVar8 = lVar8 + 0x20, lVar7 == 0));
    *(undefined4 *)(param_1 + 0x3d0) = 0xbf000000;
  }
  return;
}


