/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138be90; name: FUN_0138be90
 */


undefined4 FUN_0138be90(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  int iVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_18 [4];
  int local_14;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar16 == (undefined8 *)0x0)) {
    lVar10 = FUN_0137a500(0,auStack_18);
  }
  else {
    puVar6 = (undefined8 *)(**(code **)*puVar16)(puVar16);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_02715078), iVar5 != 0)) {
      uVar8 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar8;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar9 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      do {
        if (puVar6 == (undefined8 *)PTR_DAT_02715080) {
          puVar9 = puVar16 + -10;
          goto LAB_0138c088;
        }
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)0x0);
      puVar9 = (undefined8 *)0x0;
    }
LAB_0138c088:
    lVar10 = FUN_0137a500(puVar9,auStack_18);
  }
  if (lVar10 == 0) {
    return 0;
  }
  uVar7 = FUN_012dc470();
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  lVar12 = *(long *)(lVar10 + 0x68);
  iVar5 = *(int *)(lVar12 + 0x54);
  piVar1 = (int *)(lVar12 + 0x54);
  puVar16 = (undefined8 *)PTR_DAT_02715080;
  pbVar14 = PTR_DAT_02715078;
  do {
    while( true ) {
      puVar6 = *(undefined8 **)(lVar12 + 0x58);
      iVar15 = iVar5;
      if ((*pbVar14 & 1) != 0) goto LAB_0138bfc0;
      local_14 = iVar5;
      iVar5 = __cxa_guard_acquire(PTR_DAT_02715078);
      puVar16 = (undefined8 *)PTR_DAT_02715080;
      pbVar14 = PTR_DAT_02715078;
      iVar15 = local_14;
      if (iVar5 == 0) goto LAB_0138bfc0;
      uVar8 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar8;
      __cxa_guard_release(PTR_DAT_02715078);
      puVar16 = (undefined8 *)PTR_DAT_02715080;
      pbVar14 = PTR_DAT_02715078;
      iVar15 = local_14;
      if (puVar6 != (undefined8 *)PTR_DAT_02715080) {
        do {
          puVar6 = (undefined8 *)*puVar6;
LAB_0138bfc0:
        } while (puVar6 != puVar16);
      }
      iVar5 = *piVar1;
      if (iVar5 == iVar15) break;
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar15 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar13 = *(long *)(lVar12 + 0x60);
  lVar12 = 0;
  if (lVar13 != 0) {
    lVar12 = lVar13 + -0x50;
  }
  fVar17 = (float)*(undefined8 *)(lVar12 + 0xb0) - *(float *)(lVar10 + 0xb0);
  fVar18 = (float)((ulong)*(undefined8 *)(lVar12 + 0xb0) >> 0x20) - *(float *)(lVar10 + 0xb4);
  fVar19 = (float)*(undefined8 *)(lVar12 + 0xb8) - *(float *)(lVar10 + 0xb8);
  fVar20 = (float)((ulong)*(undefined8 *)(lVar12 + 0xb8) >> 0x20) - *(float *)(lVar10 + 0xbc);
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
  fVar17 = auVar21._0_4_ + fVar17;
  fVar18 = auVar21._4_4_ + fVar18;
  fVar19 = fVar17 + fVar18;
  fVar17 = fVar17 + fVar18;
  auVar22._0_8_ = CONCAT44(SQRT(fVar17),SQRT(fVar19));
  auVar22._8_4_ = SQRT(fVar19);
  auVar22._12_4_ = SQRT(fVar17);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
    auVar22._8_8_ = auVar22._8_8_;
  }
  fVar19 = auVar22._0_4_;
  if (fVar19 < 3.0) {
    return 0;
  }
  if (fVar19 < 5.0) {
    return 1;
  }
  uVar11 = 2;
  if (7.0 <= fVar19) {
    uVar11 = 3;
  }
  return uVar11;
}


