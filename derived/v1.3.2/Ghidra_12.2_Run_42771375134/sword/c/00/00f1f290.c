/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f1f290; name: FUN_00f1f290
 */


void FUN_00f1f290(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fStack_68;
  
  puVar4 = PTR_DAT_0271fd60;
  puVar3 = PTR_DAT_0271fd58;
  if (*(int *)(param_1 + 0x9e4) == 0xb) {
    plVar13 = *(long **)(param_1 + 0x70);
    plVar14 = *(long **)(param_1 + 0x78);
    if ((plVar14 != plVar13) &&
       (iVar6 = *(int *)(param_1 + 0x9b0), iVar6 < *(int *)(param_1 + 0x760))) {
      if (plVar13 == plVar14) {
        fVar18 = 0.0;
      }
      else {
        lVar16 = param_1 + (long)iVar6 * 0x80;
        iVar17 = 0;
        do {
          lVar15 = *plVar13;
          plVar8 = (long *)(*(code *)**(undefined8 **)(lVar15 + 0x50))();
          if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
            uVar7 = FUN_01590f40();
            *(undefined8 *)puVar4 = uVar7;
            __cxa_guard_release(puVar3);
          }
          for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            if (plVar8 == (long *)puVar4) goto LAB_00f1f37c;
          }
          lVar15 = 0;
LAB_00f1f37c:
          lVar12 = *(long *)(*(long *)(lVar15 + 0x410) + 0x60);
          uVar9 = FUN_00a8cbe0(lVar12);
          auVar20 = *(undefined1 (*) [16])(lVar15 + 0xb0);
          auVar22 = NEON_ext(auVar20,auVar20,8,1);
          lVar12 = lVar12 + -0x50;
          if ((uVar9 & 1) == 0) {
            lVar12 = 0;
          }
          lVar15 = *(long *)(lVar12 + 0x108);
          plVar13 = plVar13 + 1;
          auVar19._0_4_ =
               ((float)*(undefined8 *)(lVar15 + 0x1c0) + auVar20._0_4_) -
               (float)*(undefined8 *)(lVar16 + 0x3b0);
          auVar19._4_4_ =
               ((float)((ulong)*(undefined8 *)(lVar15 + 0x1c0) >> 0x20) + auVar20._4_4_) -
               (float)((ulong)*(undefined8 *)(lVar16 + 0x3b0) >> 0x20);
          auVar19._8_4_ =
               ((float)*(undefined8 *)(lVar15 + 0x1c8) + auVar22._0_4_) -
               (float)*(undefined8 *)(lVar16 + 0x3b8);
          auVar19._12_4_ =
               ((float)((ulong)*(undefined8 *)(lVar15 + 0x1c8) >> 0x20) + 0.0) -
               (float)((ulong)*(undefined8 *)(lVar16 + 0x3b8) >> 0x20);
          auVar23._0_4_ =
               (float)*(undefined8 *)(lVar16 + 0x3c0) - (*(float *)(lVar15 + 0x1b0) + auVar20._0_4_)
          ;
          auVar23._4_4_ =
               (float)((ulong)*(undefined8 *)(lVar16 + 0x3c0) >> 0x20) -
               (*(float *)(lVar15 + 0x1b4) + auVar20._4_4_);
          auVar23._8_4_ =
               (float)*(undefined8 *)(lVar16 + 0x3c8) - (*(float *)(lVar15 + 0x1b8) + auVar22._0_4_)
          ;
          auVar23._12_4_ =
               (float)((ulong)*(undefined8 *)(lVar16 + 0x3c8) >> 0x20) -
               (*(float *)(lVar15 + 0x1bc) + 0.0);
          auVar20 = NEON_fmin(auVar19,auVar23,4);
          iVar17 = iVar17 + (uint)(0.0 <= auVar20._8_4_ &&
                                  (0.0 <= auVar20._0_4_ && 0.0 <= auVar20._4_4_));
        } while (plVar13 != plVar14);
        fVar18 = (float)iVar17;
        plVar13 = *(long **)(param_1 + 0x70);
        plVar14 = *(long **)(param_1 + 0x78);
      }
      puVar4 = PTR_DAT_0271fd60;
      puVar3 = PTR_DAT_0271fd58;
      param_1 = param_1 + (long)iVar6 * 0x80;
      fVar18 = fVar18 / (float)(int)((ulong)((long)plVar14 - (long)plVar13) >> 3);
      uVar7 = *(undefined8 *)(param_1 + 0x3b0);
      uVar1 = *(undefined8 *)(param_1 + 0x3b8);
      uVar26 = *(undefined8 *)(param_1 + 0x3c8);
      uVar25 = *(undefined8 *)(param_1 + 0x3c0);
      fVar27 = DAT_01d4c4a8;
      if ((fVar18 < DAT_01d4c3b4) ||
         (fVar27 = DAT_01d4bee0, fVar2 = DAT_01d4bf50, DAT_01d4c540 <= fVar18)) {
        fVar2 = fVar27;
      }
      if (plVar13 != plVar14) {
        fStack_68 = (float)uVar1;
        fVar27 = (float)uVar26;
        fVar18 = (fStack_68 + fVar27) * 0.5;
        do {
          lVar16 = *plVar13;
          plVar8 = (long *)(*(code *)**(undefined8 **)(lVar16 + 0x50))();
          if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
            uVar10 = FUN_01590f40();
            *(undefined8 *)puVar4 = uVar10;
            __cxa_guard_release(puVar3);
          }
          for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            if (plVar8 == (long *)puVar4) goto LAB_00f1f524;
          }
          lVar16 = 0;
LAB_00f1f524:
          lVar15 = *(long *)(*(long *)(lVar16 + 0x410) + 0x60);
          uVar9 = FUN_00a8cbe0(lVar15);
          auVar20 = *(undefined1 (*) [16])(lVar16 + 0xb0);
          auVar22 = NEON_ext(auVar20,auVar20,8,1);
          lVar15 = lVar15 + -0x50;
          if ((uVar9 & 1) == 0) {
            lVar15 = 0;
          }
          lVar15 = *(long *)(lVar15 + 0x108);
          uVar11 = 0;
          auVar21._0_4_ = ((float)*(undefined8 *)(lVar15 + 0x1c0) + auVar20._0_4_) - (float)uVar7;
          auVar21._4_4_ =
               ((float)((ulong)*(undefined8 *)(lVar15 + 0x1c0) >> 0x20) + auVar20._4_4_) -
               (float)((ulong)uVar7 >> 0x20);
          auVar21._8_4_ = ((float)*(undefined8 *)(lVar15 + 0x1c8) + auVar22._0_4_) - fStack_68;
          auVar21._12_4_ =
               ((float)((ulong)*(undefined8 *)(lVar15 + 0x1c8) >> 0x20) + 0.0) -
               (float)((ulong)uVar1 >> 0x20);
          auVar24._0_4_ = (float)uVar25 - (*(float *)(lVar15 + 0x1b0) + auVar20._0_4_);
          auVar24._4_4_ =
               (float)((ulong)uVar25 >> 0x20) - (*(float *)(lVar15 + 0x1b4) + auVar20._4_4_);
          auVar24._8_4_ =
               (fVar18 + (fVar27 - fVar18) * fVar2) - (*(float *)(lVar15 + 0x1b8) + auVar22._0_4_);
          auVar24._12_4_ = (float)((ulong)uVar26 >> 0x20) - (*(float *)(lVar15 + 0x1bc) + 0.0);
          auVar20 = NEON_fmin(auVar21,auVar24,4);
          if (((0.0 <= auVar20._8_4_) && (0.0 <= auVar20._4_4_)) && (0.0 <= auVar20._0_4_)) {
            if (*(char *)(lVar16 + 0x990) == '\0') {
              *(undefined8 *)(lVar16 + 0x8d8) = *(undefined8 *)(lVar16 + 0xb8);
              *(undefined8 *)(lVar16 + 0x8d0) = *(undefined8 *)(lVar16 + 0xb0);
            }
            uVar11 = 1;
          }
          plVar13 = plVar13 + 1;
          *(undefined1 *)(lVar16 + 0x990) = uVar11;
        } while (plVar13 != plVar14);
      }
    }
  }
  return;
}


