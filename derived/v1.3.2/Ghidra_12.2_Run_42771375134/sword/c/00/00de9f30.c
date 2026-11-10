/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de9f30; name: FUN_00de9f30
 */


void FUN_00de9f30(long param_1,byte param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined2 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  byte bVar31;
  int iVar32;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x600) + 0x80);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x600) + 0x80);
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
      piVar1 = (int *)(lVar11 + 0x54);
      iVar32 = *(int *)(lVar11 + 0x54);
      do {
        while( true ) {
          plVar13 = *(long **)(lVar11 + 0x58);
          lVar10 = FUN_006cbb10();
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_00de9ff8;
            if (plVar13 == (long *)lVar10) break;
            plVar13 = (long *)*plVar13;
          }
          iVar7 = *piVar1;
          if (iVar7 != iVar32) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar32 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = *(long *)(lVar11 + 0x60);
            if (lVar11 != 0) {
              *(byte *)(lVar11 + 0x10) = param_2 & 1;
              (**(code **)(*(long *)(lVar11 + -8) + 0x18))();
              lVar11 = *(long *)(*(long *)(param_1 + 0x600) + 0x80);
              goto joined_r0x00de9ff0;
            }
            goto LAB_00de9ff8;
          }
          iVar32 = iVar7;
          if (iVar7 == 0) goto LAB_00de9ff8;
        }
        ClearExclusiveLocal();
        iVar32 = iVar7;
      } while (iVar7 != 0);
    }
LAB_00de9ff8:
    DAT_00000060 = param_2 & 1;
  }
  lVar11 = *(long *)(*(long *)(param_1 + 0x600) + 0x80);
joined_r0x00de9ff0:
  if ((lVar11 != 0) && (puVar12 = *(undefined8 **)(lVar11 + 0x60), puVar12 != (undefined8 *)0x0)) {
    plVar13 = (long *)(**(code **)*puVar12)(puVar12);
    lVar11 = FUN_006cbb10();
    for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      if (plVar13 == (long *)lVar11) {
        FUN_006cb420(puVar12 + -10);
        fVar16 = (float)*(undefined8 *)(param_1 + 0x340);
        fVar15 = fVar16 * fVar16;
        fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x340) >> 0x20);
        fVar18 = fVar17 * fVar17;
        uVar22 = (undefined1)((uint)fVar18 >> 8);
        uVar23 = (undefined1)((uint)fVar18 >> 0x10);
        uVar24 = (undefined1)((uint)fVar18 >> 0x18);
        fVar19 = (float)*(undefined8 *)(param_1 + 0x348);
        fVar14 = fVar19 * fVar19;
        uVar25 = (undefined1)((uint)fVar14 >> 8);
        uVar26 = (undefined1)((uint)fVar14 >> 0x10);
        uVar27 = (undefined1)((uint)fVar14 >> 0x18);
        fVar20 = (float)((ulong)*(undefined8 *)(param_1 + 0x348) >> 0x20);
        fVar21 = fVar20 * fVar20;
        uVar28 = (undefined1)((uint)fVar21 >> 8);
        uVar29 = (undefined1)((uint)fVar21 >> 0x10);
        uVar30 = (undefined1)((uint)fVar21 >> 0x18);
        auVar33[4] = SUB41(fVar18,0);
        auVar33._0_4_ = fVar15;
        auVar33[5] = uVar22;
        auVar33[6] = uVar23;
        auVar33[7] = uVar24;
        auVar33[8] = SUB41(fVar14,0);
        auVar33[9] = uVar25;
        auVar33[10] = uVar26;
        auVar33[0xb] = uVar27;
        auVar33[0xc] = SUB41(fVar21,0);
        auVar33[0xd] = uVar28;
        auVar33[0xe] = uVar29;
        auVar33[0xf] = uVar30;
        auVar39[4] = SUB41(fVar18,0);
        auVar39._0_4_ = fVar15;
        auVar39[5] = uVar22;
        auVar39[6] = uVar23;
        auVar39[7] = uVar24;
        auVar39[8] = SUB41(fVar14,0);
        auVar39[9] = uVar25;
        auVar39[10] = uVar26;
        auVar39[0xb] = uVar27;
        auVar39[0xc] = SUB41(fVar21,0);
        auVar39[0xd] = uVar28;
        auVar39[0xe] = uVar29;
        auVar39[0xf] = uVar30;
        auVar33 = NEON_ext(auVar33,auVar39,8,1);
        fVar15 = auVar33._0_4_ + fVar15;
        fVar18 = auVar33._4_4_ + fVar18;
        fVar14 = fVar15 + fVar18;
        fVar15 = fVar15 + fVar18;
        uVar22 = SUB41(fVar15,0);
        uVar23 = (undefined1)((uint)fVar15 >> 8);
        uVar24 = (undefined1)((uint)fVar15 >> 0x10);
        uVar25 = (undefined1)((uint)fVar15 >> 0x18);
        iVar32 = -(uint)(fVar14 == 0.0);
        bVar31 = ~(byte)iVar32;
        bVar34 = ~(byte)((uint)iVar32 >> 8);
        bVar35 = ~(byte)((uint)iVar32 >> 0x10);
        bVar36 = ~(byte)((uint)iVar32 >> 0x18);
        auVar4[4] = uVar22;
        auVar4._0_4_ = fVar14;
        auVar4[5] = uVar23;
        auVar4[6] = uVar24;
        auVar4[7] = uVar25;
        auVar4[8] = SUB41(fVar14,0);
        auVar4[9] = (char)((uint)fVar14 >> 8);
        auVar4[10] = (char)((uint)fVar14 >> 0x10);
        auVar4[0xb] = (char)((uint)fVar14 >> 0x18);
        auVar4[0xc] = uVar22;
        auVar4[0xd] = uVar23;
        auVar4[0xe] = uVar24;
        auVar4[0xf] = uVar25;
        auVar33 = NEON_frsqrte(auVar4,4);
        auVar38._0_4_ = auVar33._0_4_ * fVar14;
        auVar38._4_4_ = auVar33._4_4_ * fVar15;
        auVar38._8_4_ = auVar33._8_4_ * fVar14;
        uVar5 = (undefined2)(CONCAT15(uVar23,CONCAT14(uVar22,fVar14)) >> 0x20);
        auVar38._12_4_ = auVar33._12_4_ * (float)CONCAT13(uVar25,CONCAT12(uVar24,uVar5));
        auVar39 = NEON_frsqrts(auVar33,auVar38,4);
        auVar37._0_4_ = auVar33._0_4_ * auVar39._0_4_;
        auVar37._4_4_ = auVar33._4_4_ * auVar39._4_4_;
        auVar37._8_4_ = auVar33._8_4_ * auVar39._8_4_;
        auVar37._12_4_ = auVar33._12_4_ * auVar39._12_4_;
        auVar40._0_4_ = fVar14 * auVar37._0_4_;
        auVar40._4_4_ = fVar15 * auVar37._4_4_;
        auVar40._8_4_ = fVar14 * auVar37._8_4_;
        auVar40._12_4_ = (float)CONCAT13(uVar25,CONCAT12(uVar24,uVar5)) * auVar37._12_4_;
        iVar32 = -(uint)(fVar14 == 0.0);
        iVar7 = -(uint)(fVar15 == 0.0);
        iVar8 = -(uint)(fVar14 == 0.0);
        iVar9 = -(uint)((float)CONCAT13(uVar25,CONCAT12(uVar24,uVar5)) == 0.0);
        auVar33 = NEON_frsqrts(auVar37,auVar40,4);
        fVar15 = fVar16 * auVar37._0_4_ * auVar33._0_4_ * 0.1;
        fVar18 = fVar17 * auVar37._4_4_ * auVar33._4_4_ * 0.1;
        fVar14 = fVar19 * auVar37._8_4_ * auVar33._8_4_ * 0.1;
        fVar21 = fVar20 * auVar37._12_4_ * auVar33._12_4_ * 0.1;
        uVar6 = *(undefined8 *)(param_1 + 0x610);
        fVar15 = (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18) &
                                 bVar36,CONCAT12((byte)((uint)fVar15 >> 0x10) &
                                                 ~(byte)((uint)iVar32 >> 0x10) & bVar35,
                                                 CONCAT11((byte)((uint)fVar15 >> 8) &
                                                          ~(byte)((uint)iVar32 >> 8) & bVar34,
                                                          SUB41(fVar15,0) & ~(byte)iVar32 & bVar31))
                                );
        fVar14 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18) &
                                 bVar36,CONCAT12((byte)((uint)fVar14 >> 0x10) &
                                                 ~(byte)((uint)iVar8 >> 0x10) & bVar35,
                                                 CONCAT11((byte)((uint)fVar14 >> 8) &
                                                          ~(byte)((uint)iVar8 >> 8) & bVar34,
                                                          SUB41(fVar14,0) & ~(byte)iVar8 & bVar31)))
        ;
        puVar12[5] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x618) >> 0x20) +
                              (float)(CONCAT17((byte)((uint)fVar21 >> 0x18) &
                                               ~(byte)((uint)iVar9 >> 0x18) & bVar36,
                                               CONCAT16((byte)((uint)fVar21 >> 0x10) &
                                                        ~(byte)((uint)iVar9 >> 0x10) & bVar35,
                                                        CONCAT15((byte)((uint)fVar21 >> 8) &
                                                                 ~(byte)((uint)iVar9 >> 8) & bVar34,
                                                                 CONCAT14(SUB41(fVar21,0) &
                                                                          ~(byte)iVar9 & bVar31,
                                                                          fVar14)))) >> 0x20),
                              (float)*(undefined8 *)(param_1 + 0x618) + fVar14);
        puVar12[4] = CONCAT44((float)((ulong)uVar6 >> 0x20) +
                              (float)(CONCAT17((byte)((uint)fVar18 >> 0x18) &
                                               ~(byte)((uint)iVar7 >> 0x18) & bVar36,
                                               CONCAT16((byte)((uint)fVar18 >> 0x10) &
                                                        ~(byte)((uint)iVar7 >> 0x10) & bVar35,
                                                        CONCAT15((byte)((uint)fVar18 >> 8) &
                                                                 ~(byte)((uint)iVar7 >> 8) & bVar34,
                                                                 CONCAT14(SUB41(fVar18,0) &
                                                                          ~(byte)iVar7 & bVar31,
                                                                          fVar15)))) >> 0x20),
                              (float)uVar6 + fVar15);
        return;
      }
    }
  }
  return;
}


