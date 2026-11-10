/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f1efe0; name: FUN_00f1efe0
 */


void FUN_00f1efe0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (*(int *)(param_1 + 0x998) <= *(int *)(param_1 + 0x9b0)) {
    return;
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  uVar3 = FUN_010198e0(lVar8);
  puVar1 = PTR_DAT_0271fd60;
  if ((uVar3 & 1) != 0) goto joined_r0x00f1f154;
  if (*(int *)(param_1 + 0x9e4) == 0xb) {
    plVar4 = *(long **)(param_1 + 0x70);
    plVar10 = *(long **)(param_1 + 0x78);
    if (plVar10 != plVar4) {
      iVar2 = *(int *)(param_1 + 0x9b0);
      if (*(int *)(param_1 + 0x760) <= iVar2) {
        uVar9 = 0;
        goto joined_r0x00f1f0a0;
      }
      if (plVar4 != plVar10) {
        lVar7 = param_1 + (long)iVar2 * 0x80;
        uVar9 = 0;
        do {
          lVar11 = *plVar4;
          plVar6 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x50))();
          if (((*PTR_DAT_0271fd58 & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(PTR_DAT_0271fd58), iVar2 != 0)) {
            uVar5 = FUN_01590f40();
            *(undefined8 *)puVar1 = uVar5;
            __cxa_guard_release(PTR_DAT_0271fd58);
          }
          for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            if (plVar6 == (long *)puVar1) goto LAB_00f1f1f8;
          }
          lVar11 = 0;
LAB_00f1f1f8:
          lVar12 = *(long *)(*(long *)(lVar11 + 0x410) + 0x60);
          uVar3 = FUN_00a8cbe0(lVar12);
          auVar14 = *(undefined1 (*) [16])(lVar11 + 0xb0);
          auVar15 = NEON_ext(auVar14,auVar14,8,1);
          lVar12 = lVar12 + -0x50;
          if ((uVar3 & 1) == 0) {
            lVar12 = 0;
          }
          lVar11 = *(long *)(lVar12 + 0x108);
          plVar4 = plVar4 + 1;
          auVar13._0_4_ =
               ((float)*(undefined8 *)(lVar11 + 0x1c0) + auVar14._0_4_) -
               (float)*(undefined8 *)(lVar7 + 0x3b0);
          auVar13._4_4_ =
               ((float)((ulong)*(undefined8 *)(lVar11 + 0x1c0) >> 0x20) + auVar14._4_4_) -
               (float)((ulong)*(undefined8 *)(lVar7 + 0x3b0) >> 0x20);
          auVar13._8_4_ =
               ((float)*(undefined8 *)(lVar11 + 0x1c8) + auVar15._0_4_) -
               (float)*(undefined8 *)(lVar7 + 0x3b8);
          auVar13._12_4_ =
               ((float)((ulong)*(undefined8 *)(lVar11 + 0x1c8) >> 0x20) + 0.0) -
               (float)((ulong)*(undefined8 *)(lVar7 + 0x3b8) >> 0x20);
          auVar16._0_4_ =
               (float)*(undefined8 *)(lVar7 + 0x3c0) - (*(float *)(lVar11 + 0x1b0) + auVar14._0_4_);
          auVar16._4_4_ =
               (float)((ulong)*(undefined8 *)(lVar7 + 0x3c0) >> 0x20) -
               (*(float *)(lVar11 + 0x1b4) + auVar14._4_4_);
          auVar16._8_4_ =
               (float)*(undefined8 *)(lVar7 + 0x3c8) - (*(float *)(lVar11 + 0x1b8) + auVar15._0_4_);
          auVar16._12_4_ =
               (float)((ulong)*(undefined8 *)(lVar7 + 0x3c8) >> 0x20) -
               (*(float *)(lVar11 + 0x1bc) + 0.0);
          auVar14 = NEON_fmin(auVar13,auVar16,4);
          uVar9 = uVar9 + (0.0 <= auVar14._8_4_ && (0.0 <= auVar14._0_4_ && 0.0 <= auVar14._4_4_));
        } while (plVar4 != plVar10);
        goto LAB_00f1f09c;
      }
    }
    uVar9 = 0;
    iVar2 = *(int *)(param_1 + 0x9b0);
  }
  else {
    uVar9 = 0;
LAB_00f1f09c:
    iVar2 = *(int *)(param_1 + 0x9b0);
  }
joined_r0x00f1f0a0:
  if (((-1 < iVar2) && (uVar9 < 100)) && (iVar2 < *(int *)(param_1 + 0x998))) {
    lVar7 = param_1 + (long)iVar2 * 0x28;
    plVar10 = *(long **)(lVar7 + 0x868);
    plVar4 = *(long **)(lVar7 + 0x860);
    if ((int)uVar9 < 10) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)(uVar9 & 0xff) / 10;
      uVar9 = uVar9 + ((uVar9 & 0xff) / 10) * -10 & 0xff;
    }
    (**(code **)(*plVar4 + 400))(plVar4,param_1 + 0xa30,uVar3);
    (**(code **)(*plVar10 + 400))(plVar10,param_1 + 0xa30,uVar9);
  }
joined_r0x00f1f154:
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f1f0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  return;
}


