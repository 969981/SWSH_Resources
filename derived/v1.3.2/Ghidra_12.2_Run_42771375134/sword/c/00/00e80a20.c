/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e80a20; name: FUN_00e80a20
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00e80a20(undefined1 *param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  float fVar37;
  undefined *local_c0 [2];
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  long *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*param_2 == 0) {
    return;
  }
  if (*(int *)(*param_2 + 0x54) == 0) {
    return;
  }
  lVar20 = *(long *)PTR_DAT_027194d8;
  FUN_00deff50(&local_a0);
  uVar30 = local_a0[0x17];
  uVar26 = local_a0[0x16];
  if (local_a0 != (undefined8 *)0x0) {
    (**(code **)(local_a0[9] + 0x18))();
  }
  local_88 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
  local_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  local_a0 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_78 = 0;
  FUN_00e81250(&local_a0,0x800);
  puVar10 = PTR_DAT_0271fe28;
  puVar9 = PTR_DAT_0271fe20;
  puVar8 = PTR_DAT_0271f7d0;
  puVar7 = PTR_DAT_027196b8;
  puVar24 = *(undefined8 **)(lVar20 + 0xb0);
  puVar19 = *(undefined8 **)(lVar20 + 0xb8);
  if (puVar24 != puVar19) {
    bVar6 = false;
LAB_00e80e84:
    uVar13 = (**(code **)(*(long *)*puVar24 + 0x88))();
    if ((uVar13 & 1) == 0) {
      puVar23 = (undefined *)*puVar24;
      uVar1 = *(uint *)(puVar23 + 0x38c);
      if ((uVar1 >> 1 & 1) != 0) {
        plVar21 = (long *)(*(code *)**(undefined8 **)(puVar23 + 0x50))(puVar23 + 0x50);
        if (((*PTR_DAT_027196b0 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_027196b0), iVar12 != 0)) {
          uVar14 = FUN_0156b190();
          *(undefined8 *)puVar7 = uVar14;
          __cxa_guard_release(PTR_DAT_027196b0);
        }
        for (; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
          if (plVar21 == (long *)puVar7) goto LAB_00e80bd8;
        }
        goto joined_r0x00e80d04;
      }
      if ((uVar1 >> 2 & 1) != 0) {
        plVar21 = (long *)(*(code *)**(undefined8 **)(puVar23 + 0x50))(puVar23 + 0x50);
        if (((*PTR_DAT_0271f7c8 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_0271f7c8), iVar12 != 0)) {
          uVar14 = FUN_0156b190();
          *(undefined8 *)puVar8 = uVar14;
          __cxa_guard_release(PTR_DAT_0271f7c8);
        }
        for (; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
          if (plVar21 == (long *)puVar8) {
            cVar2 = puVar23[0x528];
            goto joined_r0x00e80be8;
          }
        }
        goto joined_r0x00e80d04;
      }
      if ((uVar1 >> 7 & 1) != 0) {
        plVar21 = (long *)(*(code *)**(undefined8 **)(puVar23 + 0x50))(puVar23 + 0x50);
        if (((*PTR_DAT_0271fe30 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_0271fe30), iVar12 != 0)) {
          uVar14 = FUN_0156b190();
          *(undefined8 *)puVar10 = uVar14;
          __cxa_guard_release(PTR_DAT_0271fe30);
        }
        for (; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
          if (plVar21 == (long *)puVar10) goto LAB_00e80bd8;
        }
        goto joined_r0x00e80d04;
      }
      if ((uVar1 >> 0x17 & 1) != 0) {
        plVar21 = (long *)(*(code *)**(undefined8 **)(puVar23 + 0x50))(puVar23 + 0x50);
        if (((*PTR_DAT_0271fe38 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_0271fe38), iVar12 != 0)) {
          if (((*PTR_DAT_0271ed78 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_0271ed78), iVar12 != 0)) {
            if (((*PTR_DAT_0271ed88 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_0271ed88), iVar12 != 0)) {
              uVar14 = FUN_0156b190();
              *(undefined8 *)PTR_DAT_0271ed90 = uVar14;
              __cxa_guard_release(PTR_DAT_0271ed88);
            }
            *(undefined **)PTR_DAT_0271ed80 = PTR_DAT_0271ed90;
            __cxa_guard_release(PTR_DAT_0271ed78);
          }
          *(undefined **)puVar9 = PTR_DAT_0271ed80;
          __cxa_guard_release(PTR_DAT_0271fe38);
        }
        for (; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
          if (plVar21 == (long *)puVar9) {
            uVar13 = FUN_00eb6660(puVar23);
            if ((uVar13 & 1) != 0) {
              uVar27 = *(undefined8 *)(puVar23 + 0xb0);
              uVar14 = *(undefined8 *)(puVar23 + 0xb90);
              *(ulong *)(param_1 + 0x18) =
                   CONCAT44((float)((ulong)*(undefined8 *)(puVar23 + 0xb8) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(puVar23 + 0xb98) >> 0x20),
                            (float)*(undefined8 *)(puVar23 + 0xb8) +
                            (float)*(undefined8 *)(puVar23 + 0xb98));
              *(ulong *)(param_1 + 0x10) =
                   CONCAT44((float)((ulong)uVar27 >> 0x20) + (float)((ulong)uVar14 >> 0x20),
                            (float)uVar27 + (float)uVar14);
              *param_1 = 1;
              bVar6 = true;
              *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(puVar23 + 0x1a0);
            }
            break;
          }
        }
        goto joined_r0x00e80d04;
      }
      if ((uVar1 >> 4 & 1) == 0) {
        if (((uVar1 >> 5 & 1) != 0) && (uVar13 = FUN_00e87e30(puVar23 + 0x50), (uVar13 & 1) != 0))
        goto LAB_00e80c38;
        goto joined_r0x00e80d04;
      }
      uVar13 = FUN_00e87d40(puVar23 + 0x50);
      if ((uVar13 & 1) == 0) goto joined_r0x00e80d04;
      goto LAB_00e80c38;
    }
    goto joined_r0x00e80d04;
  }
LAB_00e80eb0:
  FUN_00deff50(local_c0,param_2);
  lVar20 = FUN_00e813b0(local_c0[0] + 0x50);
  if (local_c0[0] != (undefined *)0x0) {
    (**(code **)(*(long *)(local_c0[0] + 0x48) + 0x18))();
    local_c0[0] = (undefined *)0x0;
  }
  puVar24 = local_98;
  puVar10 = PTR_DAT_0271fe28;
  puVar9 = PTR_DAT_0271f7d0;
  puVar8 = PTR_DAT_0271e968;
  puVar7 = PTR_DAT_027196b8;
  if (local_a0 != local_98) {
    plVar21 = (long *)((ulong)local_c0 | 8);
    puVar19 = local_a0;
    fVar37 = DAT_01d4c18c;
LAB_00e81044:
    plVar22 = (long *)*puVar19;
    uVar1 = *(uint *)((long)plVar22 + 0x38c);
    fVar32 = (float)uVar26;
    fVar33 = (float)((ulong)uVar26 >> 0x20);
    fVar34 = (float)uVar30;
    fVar35 = (float)((ulong)uVar30 >> 0x20);
    if ((uVar1 >> 1 & 1) == 0) {
      if ((uVar1 >> 2 & 1) == 0) {
        if ((uVar1 >> 7 & 1) == 0) {
          if ((uVar1 >> 4 & 1) == 0) {
            if ((uVar1 >> 5 & 1) == 0) goto joined_r0x00e80fb0;
            uVar13 = FUN_00e87e30(plVar22 + 10);
          }
          else {
            uVar13 = FUN_00e87d40(plVar22 + 10);
          }
          if ((((uVar13 & 1) != 0) &&
              (uVar13 = (**(code **)(*plVar22 + 0x228))(plVar22), (uVar13 & 1) != 0)) &&
             ((lVar20 == 0 || (uVar13 = FUN_00e9b700(lVar20,plVar22 + 0x16,0), (uVar13 & 1) != 0))))
          {
            lVar17 = plVar22[0x17];
            lVar16 = plVar22[0x16];
            fVar32 = fVar32 - (float)lVar16;
            fVar33 = fVar33 - (float)((ulong)lVar16 >> 0x20);
            fVar34 = fVar34 - (float)lVar17;
            fVar35 = fVar35 - (float)((ulong)lVar17 >> 0x20);
            fVar32 = fVar32 * fVar32;
            fVar33 = fVar33 * fVar33;
            fVar34 = fVar34 * fVar34;
            fVar35 = fVar35 * fVar35;
            auVar3._4_4_ = fVar33;
            auVar3._0_4_ = fVar32;
            auVar3._8_4_ = fVar34;
            auVar3._12_4_ = fVar35;
            auVar4._4_4_ = fVar33;
            auVar4._0_4_ = fVar32;
            auVar4._8_4_ = fVar34;
            auVar4._12_4_ = fVar35;
            auVar36 = NEON_ext(auVar3,auVar4,8,1);
            fVar32 = auVar36._0_4_ + fVar32 + auVar36._4_4_ + fVar33;
            if (fVar32 < fVar37) {
              *param_1 = 1;
              *(long *)(param_1 + 0x18) = lVar17;
              *(long *)(param_1 + 0x10) = lVar16;
              *(long *)(param_1 + 0x20) = plVar22[0x34];
              fVar37 = fVar32;
            }
          }
        }
        else {
          plVar15 = (long *)(**(code **)plVar22[10])(plVar22 + 10);
          if (((*PTR_DAT_0271fe30 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_0271fe30), iVar12 != 0)) {
            uVar14 = FUN_0156b190();
            *(undefined8 *)puVar10 = uVar14;
            __cxa_guard_release(PTR_DAT_0271fe30);
          }
          for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
            puVar23 = puVar8;
            if (plVar15 == (long *)puVar10) goto LAB_00e810f8;
          }
        }
      }
      else {
        plVar15 = (long *)(**(code **)plVar22[10])(plVar22 + 10);
        if (((*PTR_DAT_0271f7c8 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_0271f7c8), iVar12 != 0)) {
          uVar14 = FUN_0156b190();
          *(undefined8 *)puVar9 = uVar14;
          __cxa_guard_release(PTR_DAT_0271f7c8);
        }
        for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
          if (plVar15 == (long *)puVar9) {
            lVar16 = plVar22[0xa5];
            lVar17 = plVar22[0xa6];
            lVar18 = plVar22[0xa7];
            puVar23 = PTR_DAT_0271e968;
            goto LAB_00e81164;
          }
        }
      }
    }
    else {
      plVar15 = (long *)(**(code **)plVar22[10])(plVar22 + 10);
      if (((*PTR_DAT_027196b0 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_027196b0), iVar12 != 0)) {
        uVar14 = FUN_0156b190();
        *(undefined8 *)puVar7 = uVar14;
        __cxa_guard_release(PTR_DAT_027196b0);
      }
      for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        puVar23 = PTR_DAT_0271e968;
        if (plVar15 == (long *)puVar7) goto LAB_00e810f8;
      }
    }
    goto joined_r0x00e80fb0;
  }
LAB_00e811f8:
  if (local_a0 != (undefined8 *)0x0) {
    local_98 = local_a0;
    (**(code **)(*local_88 + 0x18))(local_88,local_a0,(long)local_90 - (long)local_a0,8);
  }
  return;
LAB_00e80bd8:
  cVar2 = puVar23[0x548];
joined_r0x00e80be8:
  if (cVar2 != '\0') {
LAB_00e80c38:
    plVar21 = local_88;
    puVar11 = local_98;
    local_c0[0] = puVar23;
    if (local_98 < local_90) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar20 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar21;
      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
      *puVar11 = local_c0[0];
      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
      local_98 = local_98 + 1;
    }
    else {
      FUN_00dbbe90(&local_a0,local_c0);
    }
  }
joined_r0x00e80d04:
  puVar24 = puVar24 + 1;
  if (puVar24 == puVar19) goto LAB_00e80ea4;
  goto LAB_00e80e84;
LAB_00e80ea4:
  if (bVar6) goto LAB_00e811f8;
  goto LAB_00e80eb0;
LAB_00e810f8:
  lVar16 = plVar22[0xa9];
  lVar17 = plVar22[0xaa];
  lVar18 = plVar22[0xab];
LAB_00e81164:
  local_c0[0] = puVar23 + 0x10;
  plVar21[1] = lVar17;
  plVar21[2] = lVar18;
  *plVar21 = lVar16;
  uVar13 = (**(code **)(*plVar22 + 0x228))();
  if (((uVar13 & 1) != 0) &&
     ((lVar20 == 0 || (uVar13 = FUN_00e9b700(lVar20,plVar22 + 0x16,0), (uVar13 & 1) != 0)))) {
    lVar16 = plVar22[0x16];
    fVar25 = (float)lVar16;
    fVar32 = fVar32 - fVar25;
    fVar28 = (float)((ulong)lVar16 >> 0x20);
    fVar33 = fVar33 - fVar28;
    fVar29 = (float)plVar22[0x17];
    fVar34 = fVar34 - fVar29;
    fVar31 = (float)((ulong)plVar22[0x17] >> 0x20);
    fVar35 = fVar35 - fVar31;
    fVar32 = fVar32 * fVar32;
    fVar33 = fVar33 * fVar33;
    fVar34 = fVar34 * fVar34;
    fVar35 = fVar35 * fVar35;
    auVar36._4_4_ = fVar33;
    auVar36._0_4_ = fVar32;
    auVar36._8_4_ = fVar34;
    auVar36._12_4_ = fVar35;
    auVar5._4_4_ = fVar33;
    auVar5._0_4_ = fVar32;
    auVar5._8_4_ = fVar34;
    auVar5._12_4_ = fVar35;
    auVar36 = NEON_ext(auVar36,auVar5,8,1);
    fVar32 = auVar36._0_4_ + fVar32 + auVar36._4_4_ + fVar33;
    if (fVar32 < fVar37) {
      *param_1 = 1;
      *(long *)(param_1 + 0x20) = plVar22[0x34];
      *(ulong *)(param_1 + 0x18) = CONCAT44(fVar31 + fStack_a4,fVar29 + fStack_a8);
      *(ulong *)(param_1 + 0x10) = CONCAT44(fVar28 + fStack_ac,fVar25 + local_b0);
      fVar37 = fVar32;
    }
  }
  FUN_00dc9c20(local_c0);
joined_r0x00e80fb0:
  puVar19 = puVar19 + 1;
  if (puVar19 == puVar24) goto LAB_00e811f8;
  goto LAB_00e81044;
}


