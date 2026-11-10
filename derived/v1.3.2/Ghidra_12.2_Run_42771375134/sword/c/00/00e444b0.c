/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e444b0; name: FUN_00e444b0
 */


/* WARNING: Removing unreachable block (ram,0x00e4454c) */
/* WARNING: Removing unreachable block (ram,0x00e445bc) */

void FUN_00e444b0(long *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  FUN_00dbdb70();
  if ((char)param_1[0xb3] != '\0') {
    fVar9 = *(float *)((long)param_1 + 0x59c) + *(float *)(param_1 + 0xb4);
    *(float *)(param_1 + 0xb4) = fVar9;
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
      *(undefined1 *)(param_1 + 0xb3) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
    }
    local_50 = 0x2b3f1c238029affa;
    local_48 = "eye_move_u";
    local_40 = 10;
    local_38 = 0;
    fVar10 = *(float *)((long)param_1 + 0x5a4) +
             (*(float *)(param_1 + 0xb5) - *(float *)((long)param_1 + 0x5a4)) * fVar9;
    fVar9 = -1.0;
    if (-1.0 <= fVar10) {
      fVar9 = fVar10;
    }
    (**(code **)(*param_1 + 0x180))(fVar9,param_1,&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    local_50 = 0x2b3f1b238029ae47;
    local_48 = "eye_move_v";
    local_40 = 10;
    local_38 = 0;
    fVar10 = *(float *)((long)param_1 + 0x5ac) +
             (*(float *)(param_1 + 0xb6) - *(float *)((long)param_1 + 0x5ac)) *
             *(float *)(param_1 + 0xb4);
    fVar9 = -1.0;
    if (-1.0 <= fVar10) {
      fVar9 = fVar10;
    }
    (**(code **)(*param_1 + 0x180))(fVar9,param_1,&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (((char)param_1[0xb3] == '\0') && (*(int *)((long)param_1 + 0x5b4) != 0)) {
      FUN_00e45710(0,ZEXT816(0),param_1,*(int *)((long)param_1 + 0x5b4),0);
      *(undefined4 *)((long)param_1 + 0x5b4) = 0;
    }
  }
  if ((char)param_1[0xb9] == '\0') goto LAB_00e44790;
  if ((*(int *)((long)param_1 + 0x21c) != 0) || ((*(byte *)((long)param_1 + 0x37c) & 1) == 0)) {
    if (*(float *)((long)param_1 + 0x5c4) < 1.0) {
      param_1[0xb8] = 0x3f80000000000000;
      *(undefined1 *)((long)param_1 + 0x5c9) = 1;
    }
    goto LAB_00e44790;
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_027194d8 + 0x98);
  if (lVar5 == 0) goto LAB_00e44790;
  plVar6 = (long *)(lVar5 + 0x48);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  lVar5 = *(long *)(*(long *)(lVar5 + 0x128) + 0x270);
  uVar3 = *(undefined8 *)(lVar5 + 0xb8);
  uVar2 = *(undefined8 *)(lVar5 + 0xb0);
  fVar9 = (float)uVar2 - *(float *)(param_1 + 0x16);
  fVar10 = (float)((ulong)uVar2 >> 0x20) - *(float *)((long)param_1 + 0xb4);
  fVar7 = (float)uVar3 - *(float *)(param_1 + 0x17);
  fVar8 = (float)((ulong)uVar3 >> 0x20) - *(float *)((long)param_1 + 0xbc);
  fVar9 = fVar9 * fVar9;
  fVar10 = fVar10 * fVar10;
  fVar7 = fVar7 * fVar7;
  fVar8 = fVar8 * fVar8;
  auVar11._4_4_ = fVar10;
  auVar11._0_4_ = fVar9;
  auVar11._8_4_ = fVar7;
  auVar11._12_4_ = fVar8;
  auVar1._4_4_ = fVar10;
  auVar1._0_4_ = fVar9;
  auVar1._8_4_ = fVar7;
  auVar1._12_4_ = fVar8;
  auVar11 = NEON_ext(auVar11,auVar1,8,1);
  fVar7 = *(float *)(param_1 + 0x6e);
  fVar9 = auVar11._0_4_ + fVar9 + auVar11._4_4_ + fVar10;
  fVar8 = fVar7 + DAT_01d4bde4;
  fVar10 = *(float *)((long)param_1 + 0x5c4);
  if ((fVar7 * fVar7 < fVar9) && (0.0 < fVar10)) {
    fVar10 = 0.0;
    param_1[0xb8] = 0;
    *(undefined1 *)((long)param_1 + 0x5c9) = 1;
  }
  bVar4 = false;
  if ((fVar9 < fVar8 * fVar8) && (bVar4 = false, !NAN(fVar10))) {
    bVar4 = fVar10 < 1.0;
  }
  if (bVar4) {
    *(undefined4 *)(param_1 + 0xb8) = 1;
LAB_00e44720:
    fVar10 = fVar10 + DAT_01d4bb84;
    *(float *)((long)param_1 + 0x5c4) = fVar10;
    if (1.0 <= fVar10) {
      param_1[0xb8] = 0x3f80000000000000;
    }
LAB_00e44778:
    *(undefined1 *)((long)param_1 + 0x5c9) = 1;
  }
  else {
    if (((fVar7 + DAT_01d4c344) * (fVar7 + DAT_01d4c344) < fVar9) && (0.0 < fVar10)) {
      *(undefined4 *)(param_1 + 0xb8) = 2;
LAB_00e4475c:
      fVar10 = fVar10 + DAT_01d4bd78;
      *(float *)((long)param_1 + 0x5c4) = fVar10;
      if (fVar10 <= 0.0) {
        param_1[0xb8] = 0;
      }
      goto LAB_00e44778;
    }
    if ((int)param_1[0xb8] == 2) goto LAB_00e4475c;
    if ((int)param_1[0xb8] == 1) goto LAB_00e44720;
  }
  (**(code **)(*plVar6 + 0x18))(plVar6);
LAB_00e44790:
  (**(code **)(*param_1 + 0x268))(param_1);
  return;
}


