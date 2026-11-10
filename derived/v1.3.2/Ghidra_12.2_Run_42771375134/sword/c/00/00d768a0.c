/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d768a0; name: FUN_00d768a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d768a0(long param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  int iVar23;
  int iVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  if (*(char *)(param_1 + 0x160) == '\0') {
    plVar5 = *(long **)(param_1 + 0x100);
    if (plVar5 == (long *)0x0) {
      puVar7 = (undefined8 *)(_DAT_000001a8 + 0xf0);
    }
    else {
      lVar6 = plVar5[0xb];
      if (*(long *)(lVar6 + 0x58) == 0) {
        uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x60))();
        *(undefined8 *)(lVar6 + 0x58) = uVar3;
      }
      piVar1 = (int *)(lVar6 + 0x54);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar7 = (undefined8 *)(plVar5[0x35] + 0xf0);
      lVar6 = plVar5[0xb];
      piVar1 = (int *)(lVar6 + 0x54);
      do {
        iVar19 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar19 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x60) = 0;
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    lVar6 = _DAT_000001a8;
    uVar9 = puVar7[1];
    uVar3 = *puVar7;
    fVar14 = (float)*(undefined8 *)(param_1 + 0x170);
    fVar10 = (float)uVar3 - fVar14;
    fVar8 = (float)((ulong)uVar3 >> 0x20);
    fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x170) >> 0x20);
    fVar11 = fVar8 - fVar15;
    fVar16 = (float)*(undefined8 *)(param_1 + 0x178);
    fVar12 = (float)uVar9 - fVar16;
    fVar18 = (float)((ulong)uVar9 >> 0x20);
    fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x178) >> 0x20);
    fVar13 = fVar18 - fVar17;
    fVar10 = fVar10 * fVar10;
    fVar11 = fVar11 * fVar11;
    fVar12 = fVar12 * fVar12;
    fVar13 = fVar13 * fVar13;
    auVar20._4_4_ = fVar11;
    auVar20._0_4_ = fVar10;
    auVar20._8_4_ = fVar12;
    auVar20._12_4_ = fVar13;
    auVar28._4_4_ = fVar11;
    auVar28._0_4_ = fVar10;
    auVar28._8_4_ = fVar12;
    auVar28._12_4_ = fVar13;
    auVar20 = NEON_ext(auVar20,auVar28,8,1);
    fVar12 = *(float *)(param_1 + 0x180);
    if (SQRT(auVar20._0_4_ + fVar10 + auVar20._4_4_ + fVar11) <= fVar12) {
      plVar5 = *(long **)(param_1 + 0x100);
      if (plVar5 == (long *)0x0) {
        *(undefined8 *)(_DAT_000001a8 + 0xf8) = *(undefined8 *)(param_1 + 0x178);
        *(undefined8 *)(lVar6 + 0xf0) = *(undefined8 *)(param_1 + 0x170);
      }
      else {
        lVar6 = plVar5[0xb];
        if (*(long *)(lVar6 + 0x58) == 0) {
          uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x60))();
          *(undefined8 *)(lVar6 + 0x58) = uVar3;
        }
        piVar1 = (int *)(lVar6 + 0x54);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar6 = plVar5[0x35];
        *(undefined8 *)(lVar6 + 0xf8) = *(undefined8 *)(param_1 + 0x178);
        *(undefined8 *)(lVar6 + 0xf0) = *(undefined8 *)(param_1 + 0x170);
        lVar6 = plVar5[0xb];
        piVar1 = (int *)(lVar6 + 0x54);
        do {
          iVar19 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar19 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x60) = 0;
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      *(undefined1 *)(param_1 + 0x160) = 1;
    }
    else {
      fVar14 = fVar14 - (float)uVar3;
      fVar15 = fVar15 - fVar8;
      fVar16 = fVar16 - (float)uVar9;
      fVar17 = fVar17 - fVar18;
      plVar5 = *(long **)(param_1 + 0x100);
      auVar21._0_4_ = fVar14 * fVar14;
      auVar21._4_4_ = fVar15 * fVar15;
      auVar21._8_4_ = fVar16 * fVar16;
      auVar21._12_4_ = fVar17 * fVar17;
      auVar20 = NEON_ext(auVar21,auVar21,8,1);
      fVar18 = auVar20._0_4_ + auVar21._0_4_;
      fVar10 = auVar20._4_4_ + auVar21._4_4_;
      fVar8 = fVar18 + fVar10;
      fVar18 = fVar18 + fVar10;
      auVar22._8_8_ = CONCAT44(fVar18,fVar8);
      auVar22._0_8_ = CONCAT44(fVar18,fVar8);
      auVar20 = NEON_frsqrte(auVar22,4);
      auVar27._0_4_ = auVar20._0_4_ * fVar8;
      auVar27._4_4_ = auVar20._4_4_ * fVar18;
      auVar27._8_4_ = auVar20._8_4_ * fVar8;
      auVar27._12_4_ = auVar20._12_4_ * fVar18;
      auVar28 = NEON_frsqrts(auVar20,auVar27,4);
      auVar26._0_4_ = auVar20._0_4_ * auVar28._0_4_;
      auVar26._4_4_ = auVar20._4_4_ * auVar28._4_4_;
      auVar26._8_4_ = auVar20._8_4_ * auVar28._8_4_;
      auVar26._12_4_ = auVar20._12_4_ * auVar28._12_4_;
      auVar29._0_4_ = fVar8 * auVar26._0_4_;
      auVar29._4_4_ = fVar18 * auVar26._4_4_;
      auVar29._8_4_ = fVar8 * auVar26._8_4_;
      auVar29._12_4_ = fVar18 * auVar26._12_4_;
      iVar19 = -(uint)(fVar8 == 0.0);
      iVar23 = -(uint)(fVar18 == 0.0);
      iVar24 = -(uint)(fVar8 == 0.0);
      iVar25 = -(uint)(fVar18 == 0.0);
      auVar20 = NEON_frsqrts(auVar26,auVar29,4);
      fVar14 = fVar14 * auVar26._0_4_ * auVar20._0_4_;
      fVar15 = fVar15 * auVar26._4_4_ * auVar20._4_4_;
      fVar16 = fVar16 * auVar26._8_4_ * auVar20._8_4_;
      fVar17 = fVar17 * auVar26._12_4_ * auVar20._12_4_;
      fVar8 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                              CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                       CONCAT11((byte)((uint)fVar14 >> 8) &
                                                ~(byte)((uint)iVar19 >> 8),
                                                SUB41(fVar14,0) & ~(byte)iVar19)));
      fVar18 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                               CONCAT12((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar16 >> 8) &
                                                  ~(byte)((uint)iVar24 >> 8),
                                                  SUB41(fVar16,0) & ~(byte)iVar24)));
      if (plVar5 == (long *)0x0) {
        bVar4 = true;
      }
      else {
        lVar6 = plVar5[0xb];
        if (*(long *)(lVar6 + 0x58) == 0) {
          uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x60))();
          *(undefined8 *)(lVar6 + 0x58) = uVar3;
        }
        piVar1 = (int *)(lVar6 + 0x54);
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        fVar12 = *(float *)(param_1 + 0x180);
        uVar9 = puVar7[1];
        uVar3 = *puVar7;
        bVar4 = false;
      }
      lVar6 = plVar5[0x35];
      *(ulong *)(lVar6 + 0xf8) =
           CONCAT44((float)((ulong)uVar9 >> 0x20) +
                    (float)(CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                     CONCAT16((byte)((uint)fVar17 >> 0x10) &
                                              ~(byte)((uint)iVar25 >> 0x10),
                                              CONCAT15((byte)((uint)fVar17 >> 8) &
                                                       ~(byte)((uint)iVar25 >> 8),
                                                       CONCAT14(SUB41(fVar17,0) & ~(byte)iVar25,
                                                                fVar18)))) >> 0x20) * fVar12,
                    (float)uVar9 + fVar18 * fVar12);
      *(ulong *)(lVar6 + 0xf0) =
           CONCAT44((float)((ulong)uVar3 >> 0x20) +
                    (float)(CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                                     CONCAT16((byte)((uint)fVar15 >> 0x10) &
                                              ~(byte)((uint)iVar23 >> 0x10),
                                              CONCAT15((byte)((uint)fVar15 >> 8) &
                                                       ~(byte)((uint)iVar23 >> 8),
                                                       CONCAT14(SUB41(fVar15,0) & ~(byte)iVar23,
                                                                fVar8)))) >> 0x20) * fVar12,
                    (float)uVar3 + fVar8 * fVar12);
      if (!bVar4) {
        lVar6 = plVar5[0xb];
        piVar1 = (int *)(lVar6 + 0x54);
        do {
          iVar19 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar19 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar19 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00d76ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x18))(plVar5);
          return;
        }
      }
    }
  }
  return;
}


