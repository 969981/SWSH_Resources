/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d76b20; name: FUN_00d76b20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d76b20(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined2 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  if (*(char *)(param_1 + 0x184) == '\0') {
    plVar12 = *(long **)(param_1 + 0x100);
    if (plVar12 == (long *)0x0) {
      puVar14 = (undefined8 *)(*(long *)(_DAT_000001a8 + 0xa0) + 0xf0);
    }
    else {
      lVar13 = plVar12[0xb];
      if (*(long *)(lVar13 + 0x58) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x60))();
        *(undefined8 *)(lVar13 + 0x58) = uVar10;
      }
      piVar1 = (int *)(lVar13 + 0x54);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar14 = (undefined8 *)(*(long *)(plVar12[0x35] + 0xa0) + 0xf0);
      lVar13 = plVar12[0xb];
      piVar1 = (int *)(lVar13 + 0x54);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x60) = 0;
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    uVar11 = *(undefined8 *)(param_1 + 0x188);
    uVar10 = *(undefined8 *)(param_1 + 0x188);
    fVar16 = (float)*puVar14;
    fVar18 = (float)uVar10;
    fVar24 = fVar16 - fVar18;
    fVar17 = (float)((ulong)*puVar14 >> 0x20);
    fVar19 = (float)((ulong)uVar10 >> 0x20);
    fVar26 = fVar17 - fVar19;
    fVar24 = fVar24 * fVar24;
    fVar26 = fVar26 * fVar26;
    auVar28._4_4_ = fVar26;
    auVar28._0_4_ = fVar24;
    auVar28._8_8_ = 0;
    auVar30._4_4_ = fVar26;
    auVar30._0_4_ = fVar24;
    auVar30._8_8_ = 0;
    auVar28 = NEON_ext(auVar28,auVar30,8,1);
    fVar25 = *(float *)(param_1 + 400);
    if (SQRT(auVar28._0_4_ + fVar24 + auVar28._4_4_ + fVar26) <= fVar25) {
      plVar12 = *(long **)(param_1 + 0x100);
      if (plVar12 == (long *)0x0) {
        uVar10 = NEON_fmov(0x3f800000,4);
        lVar13 = *(long *)(_DAT_000001a8 + 0xa0);
        *(undefined8 *)(lVar13 + 0xf8) = uVar10;
        *(undefined8 *)(lVar13 + 0xf0) = uVar11;
      }
      else {
        lVar13 = plVar12[0xb];
        if (*(long *)(lVar13 + 0x58) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x60))();
          *(undefined8 *)(lVar13 + 0x58) = uVar10;
        }
        piVar1 = (int *)(lVar13 + 0x54);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        auVar28 = NEON_fmov(0x3f800000,4);
        lVar13 = *(long *)(plVar12[0x35] + 0xa0);
        uVar10 = *(undefined8 *)(param_1 + 0x188);
        *(long *)(lVar13 + 0xf8) = auVar28._8_8_;
        *(undefined8 *)(lVar13 + 0xf0) = uVar10;
        if (plVar12 != (long *)0x0) {
          lVar13 = plVar12[0xb];
          piVar1 = (int *)(lVar13 + 0x54);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x60) = 0;
            (**(code **)(*plVar12 + 0x18))(plVar12);
          }
        }
      }
      *(undefined1 *)(param_1 + 0x184) = 1;
    }
    else {
      fVar18 = fVar18 - fVar16;
      fVar19 = fVar19 - fVar17;
      plVar12 = *(long **)(param_1 + 0x100);
      fVar24 = fVar18 * fVar18;
      fVar26 = fVar19 * fVar19;
      uVar20 = (undefined1)((uint)fVar26 >> 8);
      uVar21 = (undefined1)((uint)fVar26 >> 0x10);
      uVar22 = (undefined1)((uint)fVar26 >> 0x18);
      auVar5[4] = SUB41(fVar26,0);
      auVar5._0_4_ = fVar24;
      auVar5[5] = uVar20;
      auVar5[6] = uVar21;
      auVar5[7] = uVar22;
      auVar5._8_8_ = 0;
      auVar6[4] = SUB41(fVar26,0);
      auVar6._0_4_ = fVar24;
      auVar6[5] = uVar20;
      auVar6[6] = uVar21;
      auVar6[7] = uVar22;
      auVar6._8_8_ = 0;
      auVar28 = NEON_ext(auVar5,auVar6,8,1);
      fVar24 = auVar28._0_4_ + fVar24;
      fVar26 = auVar28._4_4_ + fVar26;
      fVar15 = fVar24 + fVar26;
      fVar24 = fVar24 + fVar26;
      uVar20 = SUB41(fVar24,0);
      uVar21 = (undefined1)((uint)fVar24 >> 8);
      uVar22 = (undefined1)((uint)fVar24 >> 0x10);
      uVar23 = (undefined1)((uint)fVar24 >> 0x18);
      auVar7[4] = uVar20;
      auVar7._0_4_ = fVar15;
      auVar7[5] = uVar21;
      auVar7[6] = uVar22;
      auVar7[7] = uVar23;
      auVar7[8] = SUB41(fVar15,0);
      auVar7[9] = (char)((uint)fVar15 >> 8);
      auVar7[10] = (char)((uint)fVar15 >> 0x10);
      auVar7[0xb] = (char)((uint)fVar15 >> 0x18);
      auVar7[0xc] = uVar20;
      auVar7[0xd] = uVar21;
      auVar7[0xe] = uVar22;
      auVar7[0xf] = uVar23;
      auVar28 = NEON_frsqrte(auVar7,4);
      auVar29._0_4_ = auVar28._0_4_ * fVar15;
      auVar29._4_4_ = auVar28._4_4_ * fVar24;
      auVar29._8_4_ = auVar28._8_4_ * fVar15;
      uVar8 = (undefined2)(CONCAT15(uVar21,CONCAT14(uVar20,fVar15)) >> 0x20);
      auVar29._12_4_ = auVar28._12_4_ * (float)CONCAT13(uVar23,CONCAT12(uVar22,uVar8));
      auVar30 = NEON_frsqrts(auVar28,auVar29,4);
      auVar27._0_4_ = auVar28._0_4_ * auVar30._0_4_;
      auVar27._4_4_ = auVar28._4_4_ * auVar30._4_4_;
      auVar27._8_4_ = auVar28._8_4_ * auVar30._8_4_;
      auVar27._12_4_ = auVar28._12_4_ * auVar30._12_4_;
      auVar31._0_4_ = fVar15 * auVar27._0_4_;
      auVar31._4_4_ = fVar24 * auVar27._4_4_;
      auVar31._8_4_ = fVar15 * auVar27._8_4_;
      auVar31._12_4_ = (float)CONCAT13(uVar23,CONCAT12(uVar22,uVar8)) * auVar27._12_4_;
      iVar2 = -(uint)(fVar15 == 0.0);
      iVar9 = -(uint)(fVar24 == 0.0);
      auVar28 = NEON_frsqrts(auVar27,auVar31,4);
      fVar18 = fVar18 * auVar27._0_4_ * auVar28._0_4_;
      fVar19 = fVar19 * auVar27._4_4_ * auVar28._4_4_;
      fVar18 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar2 >> 0x18),
                               CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar2 >> 0x10),
                                        CONCAT11((byte)((uint)fVar18 >> 8) &
                                                 ~(byte)((uint)iVar2 >> 8),
                                                 SUB41(fVar18,0) & ~(byte)iVar2)));
      uVar10 = CONCAT44(fVar17 + (float)(CONCAT17((byte)((uint)fVar19 >> 0x18) &
                                                  ~(byte)((uint)iVar9 >> 0x18),
                                                  CONCAT16((byte)((uint)fVar19 >> 0x10) &
                                                           ~(byte)((uint)iVar9 >> 0x10),
                                                           CONCAT15((byte)((uint)fVar19 >> 8) &
                                                                    ~(byte)((uint)iVar9 >> 8),
                                                                    CONCAT14(SUB41(fVar19,0) &
                                                                             ~(byte)iVar9,fVar18))))
                                        >> 0x20) * fVar25,fVar16 + fVar18 * fVar25);
      if (plVar12 == (long *)0x0) {
        uVar11 = NEON_fmov(0x3f800000,4);
        lVar13 = *(long *)(_DAT_000001a8 + 0xa0);
        *(undefined8 *)(lVar13 + 0xf8) = uVar11;
        *(undefined8 *)(lVar13 + 0xf0) = uVar10;
      }
      else {
        lVar13 = plVar12[0xb];
        if (*(long *)(lVar13 + 0x58) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x60))();
          *(undefined8 *)(lVar13 + 0x58) = uVar11;
        }
        piVar1 = (int *)(lVar13 + 0x54);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uVar11 = NEON_fmov(0x3f800000,4);
        lVar13 = *(long *)(plVar12[0x35] + 0xa0);
        *(undefined8 *)(lVar13 + 0xf8) = uVar11;
        *(undefined8 *)(lVar13 + 0xf0) = uVar10;
        lVar13 = plVar12[0xb];
        piVar1 = (int *)(lVar13 + 0x54);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00d76cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar12 + 0x18))(plVar12);
          return;
        }
      }
    }
  }
  return;
}


