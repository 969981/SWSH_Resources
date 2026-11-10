/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01385350; name: FUN_01385350
 */


void FUN_01385350(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  uVar10 = FUN_01383bf0();
  if ((uVar10 & 1) == 0) {
    return;
  }
  fVar17 = *(float *)(param_1 + 0x1e0);
  if (0.0 < fVar17) {
    fVar17 = (float)FUN_012dcb90(param_1);
    fVar17 = *(float *)(param_1 + 0x1e0) - fVar17;
    *(float *)(param_1 + 0x1e0) = fVar17;
  }
  if (((fVar17 <= 0.0) &&
      ((*(float *)(param_1 + 0x198) + 0.0 + *(float *)(param_1 + 0x19c) +
        *(float *)(param_1 + 0x1a0) + *(float *)(param_1 + 0x1a4) + *(float *)(param_1 + 0x1a8)) /
       5.0 < 6.0)) &&
     (6.0 <= (*(float *)(param_1 + 0x184) + 0.0 + *(float *)(param_1 + 0x188) +
              *(float *)(param_1 + 0x18c) + *(float *)(param_1 + 400) + *(float *)(param_1 + 0x194))
             / 5.0)) {
    local_50 = 0xfc1dd4986391a947;
    local_48 = "Play_Camp_Cooking_Mix";
    local_40 = 0x15;
    local_38 = 0;
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    *(undefined4 *)(param_1 + 0x1e0) = 0x3e4ccccd;
  }
  uVar10 = FUN_012dc470(param_1);
  puVar7 = PTR_DAT_02715078;
  if ((uVar10 & 1) != 0) {
    lVar16 = *(long *)(param_1 + 0x68);
    piVar1 = (int *)(lVar16 + 0x54);
    puVar13 = (undefined8 *)PTR_DAT_02715080;
    iVar14 = *(int *)(lVar16 + 0x54);
    do {
      while( true ) {
        puVar15 = *(undefined8 **)(lVar16 + 0x58);
        if ((*puVar7 & 1) != 0) goto LAB_01385514;
        iVar8 = __cxa_guard_acquire(puVar7);
        puVar13 = (undefined8 *)PTR_DAT_02715080;
        if (iVar8 == 0) goto LAB_01385514;
        uVar11 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar11;
        __cxa_guard_release(puVar7);
        puVar13 = (undefined8 *)PTR_DAT_02715080;
        if (puVar15 != (undefined8 *)PTR_DAT_02715080) {
          do {
            puVar15 = (undefined8 *)*puVar15;
LAB_01385514:
          } while (puVar15 != puVar13);
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar14) break;
        ClearExclusiveLocal();
        iVar14 = iVar8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      iVar14 = iVar8;
    } while (cVar2 != '\0');
    lVar12 = *(long *)(lVar16 + 0x60);
    lVar16 = 0;
    if (lVar12 != 0) {
      lVar16 = lVar12 + -0x50;
    }
    fVar17 = (float)*(undefined8 *)(lVar16 + 0xb0) - *(float *)(param_1 + 0xb0);
    fVar18 = (float)((ulong)*(undefined8 *)(lVar16 + 0xb0) >> 0x20) - *(float *)(param_1 + 0xb4);
    fVar19 = (float)*(undefined8 *)(lVar16 + 0xb8) - *(float *)(param_1 + 0xb8);
    fVar20 = (float)((ulong)*(undefined8 *)(lVar16 + 0xb8) >> 0x20) - *(float *)(param_1 + 0xbc);
    fVar17 = fVar17 * fVar17;
    fVar18 = fVar18 * fVar18;
    fVar19 = fVar19 * fVar19;
    fVar20 = fVar20 * fVar20;
    auVar21._4_4_ = fVar18;
    auVar21._0_4_ = fVar17;
    auVar21._8_4_ = fVar19;
    auVar21._12_4_ = fVar20;
    auVar4._4_4_ = fVar18;
    auVar4._0_4_ = fVar17;
    auVar4._8_4_ = fVar19;
    auVar4._12_4_ = fVar20;
    auVar21 = NEON_ext(auVar21,auVar4,8,1);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))();
    }
    fVar19 = 22.0;
    if (22.0 < SQRT(auVar21._0_4_ + fVar17 + auVar21._4_4_ + fVar18)) goto LAB_013856ac;
  }
  uVar10 = FUN_012dc470(param_1);
  puVar7 = PTR_DAT_02715078;
  if ((uVar10 & 1) == 0) {
    fVar19 = 0.0;
  }
  else {
    lVar16 = *(long *)(param_1 + 0x68);
    piVar1 = (int *)(lVar16 + 0x54);
    puVar13 = (undefined8 *)PTR_DAT_02715080;
    iVar14 = *(int *)(lVar16 + 0x54);
    do {
      while( true ) {
        puVar15 = *(undefined8 **)(lVar16 + 0x58);
        if ((*puVar7 & 1) != 0) goto LAB_01385634;
        iVar8 = __cxa_guard_acquire(puVar7);
        puVar13 = (undefined8 *)PTR_DAT_02715080;
        if (iVar8 == 0) goto LAB_01385634;
        uVar11 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar11;
        __cxa_guard_release(puVar7);
        puVar13 = (undefined8 *)PTR_DAT_02715080;
        if (puVar15 != (undefined8 *)PTR_DAT_02715080) {
          do {
            puVar15 = (undefined8 *)*puVar15;
LAB_01385634:
          } while (puVar15 != puVar13);
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar14) break;
        ClearExclusiveLocal();
        iVar14 = iVar8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      iVar14 = iVar8;
    } while (cVar2 != '\0');
    lVar12 = *(long *)(lVar16 + 0x60);
    lVar16 = 0;
    if (lVar12 != 0) {
      lVar16 = lVar12 + -0x50;
    }
    fVar17 = (float)*(undefined8 *)(lVar16 + 0xb0) - *(float *)(param_1 + 0xb0);
    fVar18 = (float)((ulong)*(undefined8 *)(lVar16 + 0xb0) >> 0x20) - *(float *)(param_1 + 0xb4);
    fVar19 = (float)*(undefined8 *)(lVar16 + 0xb8) - *(float *)(param_1 + 0xb8);
    fVar20 = (float)((ulong)*(undefined8 *)(lVar16 + 0xb8) >> 0x20) - *(float *)(param_1 + 0xbc);
    fVar17 = fVar17 * fVar17;
    fVar18 = fVar18 * fVar18;
    fVar19 = fVar19 * fVar19;
    fVar20 = fVar20 * fVar20;
    auVar5._4_4_ = fVar18;
    auVar5._0_4_ = fVar17;
    auVar5._8_4_ = fVar19;
    auVar5._12_4_ = fVar20;
    auVar6._4_4_ = fVar18;
    auVar6._0_4_ = fVar17;
    auVar6._8_4_ = fVar19;
    auVar6._12_4_ = fVar20;
    auVar21 = NEON_ext(auVar5,auVar6,8,1);
    fVar19 = SQRT(auVar21._0_4_ + fVar17 + auVar21._4_4_ + fVar18);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))();
    }
  }
LAB_013856ac:
  local_50 = 0x1150316d2e0921fa;
  local_48 = "Camp_MixVelocity";
  local_40 = 0x10;
  local_38 = 0;
  FUN_008962a0((fVar19 * DAT_01d4c6b8) / 22.0,*(long *)PTR_DAT_027107a8 + 0x108,&local_50,0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar16 = *(long *)PTR_DAT_02710840 + 0x390;
  local_48 = (char *)CONCAT44(local_48._4_4_,fVar19 / 22.0);
  local_50 = CONCAT44(local_50._4_4_,fVar19 / 22.0);
  cVar2 = *(char *)(param_1 + 0x201);
  if (*(char *)(param_1 + 0x202) == '\0') {
    if (cVar2 == '\0') {
      cVar2 = *(char *)(param_1 + 0x200);
      uVar9 = FUN_010247a0(lVar16,&DAT_0216c5b0);
      if (cVar2 == '\0') {
        FUN_01023c30(lVar16,uVar9,1);
        uVar9 = FUN_010247a0(lVar16,&DAT_0216c5b0);
        uVar11 = 2;
      }
      else {
        FUN_01023c30(lVar16,uVar9,2);
        uVar9 = FUN_010247a0(lVar16,&DAT_0216c5b0);
        uVar11 = 1;
      }
      FUN_010239f0(0x3f800000,lVar16,uVar9,&local_50,uVar11);
      return;
    }
    uVar9 = FUN_010247a0(lVar16,&DAT_0216c5b0);
    FUN_01023c30(lVar16,uVar9,1);
    uVar9 = FUN_010247a0(lVar16,&DAT_0216c5b0);
    uVar11 = 2;
  }
  else {
    uVar9 = FUN_010247a0(lVar16,&DAT_0216c5b0);
    if (cVar2 == '\0') {
      FUN_01023c30(lVar16,uVar9,2);
      uVar9 = FUN_010247a0(lVar16,&DAT_0216c5b0);
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
  }
  FUN_010239f0(0x3f800000,lVar16,uVar9,&local_50,uVar11);
  *(undefined2 *)(param_1 + 0x201) = 0;
  return;
}


