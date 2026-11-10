/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013376d0; name: FUN_013376d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013376d0(long *param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  long local_70;
  long local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar9 = *param_1;
  local_68 = param_2;
  FUN_012e54a0(&local_70,*(undefined8 *)(param_2 + 0x10));
  lVar5 = local_70;
  bVar3 = false;
  if (local_70 != 0) {
    plVar10 = (long *)(local_70 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar5 = FUN_012d5170(lVar5,&local_50);
    if (lVar5 == 0) {
      bVar3 = false;
    }
    else {
      lVar5 = FUN_013098c0();
      bVar3 = lVar5 != 0;
    }
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  puVar6 = (undefined8 *)FUN_01326580(*(undefined8 *)(local_68 + 8));
  uVar4 = FUN_012b6b10(*puVar6,*(undefined4 *)(lVar9 + 0x68),*(undefined4 *)param_1[1],bVar3);
  uVar7 = FUN_012e4720(*(undefined8 *)(local_68 + 0x10));
  FUN_0131b240(uVar7,3);
  local_50 = 0x44d86c6f774e203b;
  uStack_48 = 0;
  uVar7 = FUN_0130fad0(*(undefined8 *)(local_68 + 0x10),&local_50,2);
  lVar5 = local_68;
  puVar2 = PTR_DAT_02710848;
  fVar13 = DAT_01d4bd0c;
  switch(uVar4) {
  case 0:
    uStack_48 = _UNK_01d4aae8;
    local_50 = _DAT_01d4aae0;
    FUN_012dc9c0(*(undefined8 *)(local_68 + 0x10),&local_50);
    *(undefined1 *)(lVar5 + 0x18) = 1;
    local_50 = 0x44d86c6f774e203b;
    uStack_48 = 0;
    FUN_0130fad0(*(undefined8 *)(lVar5 + 0x10),&local_50,0);
    FUN_01310250(*(undefined8 *)(lVar5 + 0x10));
    break;
  case 1:
    do {
      fVar11 = (float)FUN_01029020(DAT_02a6e924 - DAT_02a6e920,
                                   *(undefined8 *)(*(long *)puVar2 + 0x98));
      fVar11 = fVar11 + DAT_02a6e920;
      fVar12 = (float)FUN_01029020(DAT_02a6e92c - DAT_02a6e928,
                                   *(undefined8 *)(*(long *)puVar2 + 0x98));
      fVar14 = (float)*(undefined8 *)(lVar9 + 0xe0) - fVar11;
      fVar15 = (float)((ulong)*(undefined8 *)(lVar9 + 0xe0) >> 0x20) - 0.0;
      fVar16 = (float)*(undefined8 *)(lVar9 + 0xe8) - (fVar12 + DAT_02a6e928);
      fVar17 = (float)((ulong)*(undefined8 *)(lVar9 + 0xe8) >> 0x20) - 0.0;
      fVar14 = fVar14 * fVar14;
      fVar15 = fVar15 * fVar15;
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      auVar18._4_4_ = fVar15;
      auVar18._0_4_ = fVar14;
      auVar18._8_4_ = fVar16;
      auVar18._12_4_ = fVar17;
      auVar1._4_4_ = fVar15;
      auVar1._0_4_ = fVar14;
      auVar1._8_4_ = fVar16;
      auVar1._12_4_ = fVar17;
      auVar18 = NEON_ext(auVar18,auVar1,8,1);
    } while (SQRT(auVar18._0_4_ + fVar14 + auVar18._4_4_ + fVar15) < fVar13);
    local_50 = CONCAT44((float)((ulong)_DAT_02a6e940 >> 0x20) + 0.0,fVar11 + (float)_DAT_02a6e940);
    uStack_48 = CONCAT44((float)((ulong)uRam0000000002a6e948 >> 0x20) + 0.0,
                         fVar12 + DAT_02a6e928 + (float)uRam0000000002a6e948);
    FUN_012dc9c0(*(undefined8 *)(lVar5 + 0x10),&local_50);
    *(undefined1 *)(lVar5 + 0x18) = 1;
    fVar13 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)puVar2 + 0x98));
    uVar7 = *(undefined8 *)(lVar5 + 0x10);
    local_60 = FUN_00a92cd0(fVar13 * DAT_01d4bb38 + fVar13 * DAT_01d4bb38,0,ZEXT816(0));
    FUN_012dc7f0(uVar7,local_60);
    break;
  case 2:
    lVar5 = param_1[2];
    plVar10 = *(long **)(lVar5 + 8);
    if (plVar10 == *(long **)(lVar5 + 0x10)) {
      FUN_0133a560(lVar5,&local_68);
    }
    else {
      uVar7 = *(undefined8 *)(lVar5 + 0x18);
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_01337c6c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar7;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      *plVar10 = local_68;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 8;
    }
    break;
  case 3:
    FUN_01337c70(lVar9,local_68);
    break;
  case 4:
    FUN_01338010(lVar9,local_68);
    break;
  case 5:
    lVar5 = param_1[2];
    plVar10 = *(long **)(lVar5 + 8);
    if (plVar10 == *(long **)(lVar5 + 0x10)) {
      FUN_0133a560(lVar5,&local_68);
    }
    else {
      uVar7 = *(undefined8 *)(lVar5 + 0x18);
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01337c6c;
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar7;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *plVar10 = local_68;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 8;
    }
    if (1 < (ulong)(((long *)param_1[2])[1] - *(long *)param_1[2] >> 3)) {
      FUN_013383b0(lVar9);
LAB_01337c24:
      *(undefined4 *)param_1[1] = 0;
      ((undefined8 *)param_1[2])[1] = *(undefined8 *)param_1[2];
    }
  default:
switchD_013377d4_default:
joined_r0x01337834:
    if (local_70 == 0) {
      return;
    }
    goto LAB_01337c40;
  case 6:
    lVar5 = param_1[2];
    plVar10 = *(long **)(lVar5 + 8);
    if (plVar10 == *(long **)(lVar5 + 0x10)) {
      FUN_0133a560(lVar5,&local_68);
    }
    else {
      uVar7 = *(undefined8 *)(lVar5 + 0x18);
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01337c6c;
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar7;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *plVar10 = local_68;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 8;
    }
    if (2 < (ulong)(((long *)param_1[2])[1] - *(long *)param_1[2] >> 3)) {
      FUN_013388d0(lVar9);
      goto LAB_01337c24;
    }
    goto switchD_013377d4_default;
  case 7:
    FUN_01338f00(lVar9,local_68);
    break;
  case 8:
    FUN_013392a0(lVar9,local_68);
    break;
  case 9:
    FUN_01339640(lVar9,local_68);
    break;
  case 10:
    FUN_01339a20(lVar9,local_68);
    goto joined_r0x01337834;
  case 0xb:
    FUN_01339e00(lVar9,local_68);
    goto joined_r0x01337834;
  case 0xc:
    lVar5 = param_1[2];
    plVar10 = *(long **)(lVar5 + 8);
    if (plVar10 == *(long **)(lVar5 + 0x10)) {
      FUN_0133a560(lVar5,&local_68);
    }
    else {
      uVar7 = *(undefined8 *)(lVar5 + 0x18);
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01337c6c;
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar7;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *plVar10 = local_68;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 8;
    }
    if (3 < (ulong)(((long *)param_1[2])[1] - *(long *)param_1[2] >> 3)) {
      FUN_01336ec0(lVar9);
      goto LAB_01337c24;
    }
    goto switchD_013377d4_default;
  case 0xd:
    FUN_01339f70(uVar7,local_68);
    goto joined_r0x01337834;
  }
  if (local_70 != 0) {
LAB_01337c40:
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  return;
}


