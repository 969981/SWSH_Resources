/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dee160; name: FUN_00dee160
 */


undefined1  [16] FUN_00dee160(long *param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar14 [16];
  float local_50;
  
  if ((param_2 & 1) == 0) {
    lVar7 = *(long *)(*param_1 + 0x290);
    fVar10 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    local_50 = 0.0;
    if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x80), lVar7 == 0)) goto LAB_00dee574;
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(0,plVar8);
    fVar10 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    local_50 = 0.0;
    if (*(int *)(lVar7 + 0x54) != 0) {
      puVar9 = *(undefined8 **)(lVar7 + 0x60);
      plVar5 = (long *)(**(code **)*puVar9)(puVar9);
      puVar3 = PTR_DAT_02715290;
      puVar2 = (undefined8 *)PTR_DAT_02715298;
      if (((*PTR_DAT_02715290 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_02715290), puVar2 = (undefined8 *)PTR_DAT_02715298,
         iVar4 != 0)) {
        uVar6 = FUN_01590a70();
        *(undefined8 *)PTR_DAT_02715298 = uVar6;
        __cxa_guard_release(PTR_DAT_02715290);
        puVar2 = (undefined8 *)PTR_DAT_02715298;
      }
      for (; plVar5 != puVar2; plVar5 = (long *)*plVar5) {
      }
      fVar10 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
      local_50 = 0.0;
      PTR_DAT_02715298 = (undefined *)puVar2;
      if (*(int *)(puVar9 + 8) == 2) {
        puVar9 = *(undefined8 **)(lVar7 + 0x60);
        plVar5 = (long *)(**(code **)*puVar9)(puVar9);
        if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02715290), iVar4 != 0)) {
          uVar6 = FUN_01590a70();
          *puVar2 = uVar6;
          __cxa_guard_release(PTR_DAT_02715290);
        }
        for (; plVar5 != puVar2; plVar5 = (long *)*plVar5) {
        }
        local_50 = *(float *)(puVar9 + 0x16);
        puVar9 = *(undefined8 **)(lVar7 + 0x60);
        plVar5 = (long *)(**(code **)*puVar9)(puVar9);
        if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02715290), iVar4 != 0)) {
          uVar6 = FUN_01590a70();
          *puVar2 = uVar6;
          __cxa_guard_release(PTR_DAT_02715290);
        }
        for (; plVar5 != puVar2; plVar5 = (long *)*plVar5) {
        }
        goto LAB_00dee530;
      }
      if (*(int *)(puVar9 + 8) == 1) {
        puVar9 = *(undefined8 **)(lVar7 + 0x60);
        plVar5 = (long *)(**(code **)*puVar9)(puVar9);
        if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02715290), iVar4 != 0)) {
          uVar6 = FUN_01590a70();
          *puVar2 = uVar6;
          __cxa_guard_release(PTR_DAT_02715290);
        }
        for (; plVar5 != puVar2; plVar5 = (long *)*plVar5) {
        }
        goto LAB_00dee374;
      }
    }
  }
  else {
    lVar7 = *(long *)(*param_1 + 0x298);
    fVar10 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    local_50 = 0.0;
    if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x80), lVar7 == 0)) goto LAB_00dee574;
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(0,plVar8);
    fVar10 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    local_50 = 0.0;
    if (*(int *)(lVar7 + 0x54) != 0) {
      puVar9 = *(undefined8 **)(lVar7 + 0x60);
      plVar5 = (long *)(**(code **)*puVar9)(puVar9);
      puVar3 = PTR_DAT_02715280;
      puVar2 = (undefined8 *)PTR_DAT_02715288;
      if (((*PTR_DAT_02715280 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_02715280), puVar2 = (undefined8 *)PTR_DAT_02715288,
         iVar4 != 0)) {
        uVar6 = FUN_01590a70();
        *(undefined8 *)PTR_DAT_02715288 = uVar6;
        __cxa_guard_release(PTR_DAT_02715280);
        puVar2 = (undefined8 *)PTR_DAT_02715288;
      }
      for (; plVar5 != puVar2; plVar5 = (long *)*plVar5) {
      }
      fVar10 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
      local_50 = 0.0;
      PTR_DAT_02715288 = (undefined *)puVar2;
      if (*(int *)(puVar9 + 8) == 2) {
        puVar9 = *(undefined8 **)(lVar7 + 0x60);
        plVar5 = (long *)(**(code **)*puVar9)(puVar9);
        if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02715280), iVar4 != 0)) {
          uVar6 = FUN_01590a70();
          *puVar2 = uVar6;
          __cxa_guard_release(PTR_DAT_02715280);
        }
        for (; plVar5 != puVar2; plVar5 = (long *)*plVar5) {
        }
        local_50 = *(float *)(puVar9 + 0x16);
        puVar9 = *(undefined8 **)(lVar7 + 0x60);
        plVar5 = (long *)(**(code **)*puVar9)(puVar9);
        if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02715280), iVar4 != 0)) {
          uVar6 = FUN_01590a70();
          *puVar2 = uVar6;
          __cxa_guard_release(PTR_DAT_02715280);
        }
        for (; plVar5 != puVar2; plVar5 = (long *)*plVar5) {
        }
LAB_00dee530:
        local_50 = local_50 * local_50;
        fVar13 = *(float *)(puVar9 + 0x17) * *(float *)(puVar9 + 0x17);
        auVar14._4_4_ = 0;
        auVar14._0_4_ = local_50;
        auVar14._8_4_ = fVar13;
        auVar14._12_4_ = 0;
        auVar1._4_4_ = 0;
        auVar1._0_4_ = local_50;
        auVar1._8_4_ = fVar13;
        auVar1._12_4_ = 0;
        auVar14 = NEON_ext(auVar14,auVar1,8,1);
        local_50 = auVar14._0_4_ + local_50;
        fVar10 = auVar14._4_4_ + 0.0;
        fVar13 = local_50 + fVar10;
        local_50 = local_50 + fVar10;
        fVar10 = SQRT(fVar13);
        fVar12 = SQRT(local_50);
        fVar13 = SQRT(fVar13);
        local_50 = SQRT(local_50);
      }
      else if (*(int *)(puVar9 + 8) == 1) {
        puVar9 = *(undefined8 **)(lVar7 + 0x60);
        plVar5 = (long *)(**(code **)*puVar9)(puVar9);
        if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02715280), iVar4 != 0)) {
          uVar6 = FUN_01590a70();
          *puVar2 = uVar6;
          __cxa_guard_release(PTR_DAT_02715280);
        }
        for (; plVar5 != puVar2; plVar5 = (long *)*plVar5) {
        }
LAB_00dee374:
        fVar10 = *(float *)(puVar9 + 0xc);
        fVar12 = 0.0;
        fVar13 = 0.0;
        local_50 = 0.0;
      }
    }
  }
  (**(code **)(*plVar8 + 0x18))(plVar8);
LAB_00dee574:
  auVar11._4_4_ = fVar12;
  auVar11._0_4_ = fVar10;
  auVar11._8_4_ = fVar13;
  auVar11._12_4_ = local_50;
  return auVar11;
}


