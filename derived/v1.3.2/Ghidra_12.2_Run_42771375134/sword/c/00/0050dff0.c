/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0050dff0; name: FUN_0050dff0
 */


/* WARNING: Removing unreachable block (ram,0x0050e1b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0050dff0(long param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  byte bVar23;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  undefined8 uVar24;
  byte bVar31;
  byte bVar32;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  undefined8 uVar33;
  byte bVar40;
  byte bVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  byte bVar46;
  int iVar47;
  int iVar48;
  byte bVar49;
  int iVar50;
  int iVar51;
  byte bVar52;
  uint auStack_70 [4];
  
  lVar16 = *(long *)(param_1 + 0x18);
  iVar19 = *(int *)(lVar16 + (long)*(int *)(param_1 + 0x3c) * 4);
  auStack_70[3] = iVar19;
  iVar5 = *(int *)(param_1 + 0x10);
  uVar8 = (long)iVar5 * 8 + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)auStack_70 - uVar8;
  uVar11 = (long)iVar5 * 4 + 0xfU & 0xfffffffffffffff0;
  lVar15 = lVar6 - uVar11;
  puVar18 = (uint *)(lVar15 - uVar11);
  plVar17 = (long *)((long)puVar18 - uVar8);
  if (0 < iVar5) {
    lVar6 = FUN_00509480(param_1);
    *plVar17 = lVar6;
    *puVar18 = (uint)(lVar6 != 0);
                    /* WARNING: Subroutine does not return */
    memset((void *)**(undefined8 **)(param_1 + 0x20),0,(ulong)(uint)(iVar19 << 1));
  }
  iVar19 = param_2[6];
  if (0 < iVar19) {
    lVar9 = 0;
    pbVar12 = (byte *)(*(long *)(param_2 + 8) + 1);
    do {
      bVar23 = *pbVar12;
      if ((puVar18[pbVar12[-1]] != 0) || (puVar18[bVar23] != 0)) {
        puVar18[pbVar12[-1]] = 1;
        puVar18[bVar23] = 1;
      }
      lVar9 = lVar9 + 1;
      pbVar12 = pbVar12 + 2;
    } while (lVar9 < iVar19);
  }
  if (*param_2 < 1) {
LAB_0050e2ac:
    if (((DAT_0275b430 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0275b430), iVar5 != 0)) {
      DAT_0275b440 = 0;
      DAT_0275b448 = 0;
      __cxa_guard_release(&DAT_0275b430);
    }
    if (((DAT_0275b438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(), iVar5 != 0)) {
      uRam000000000275b458 = 0xffffffffffffffff;
      _DAT_0275b450 = 0xffffffffffffffff;
      __cxa_guard_release(&DAT_0275b438);
      iVar5 = param_2[6];
      uVar1 = auStack_70[3];
    }
    else {
      iVar5 = param_2[6];
      uVar1 = auStack_70[3];
    }
    if ((0 < iVar5) && (lVar6 = (long)iVar5, 7 < (int)uVar1)) {
      iVar5 = uVar1 + 7;
      if (-1 < (int)uVar1) {
        iVar5 = uVar1;
      }
      do {
        lVar6 = lVar6 + -1;
        pbVar12 = (byte *)(*(long *)(param_2 + 8) + lVar6 * 2);
        puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x20) + (ulong)*pbVar12 * 8);
        puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x20) + (ulong)pbVar12[1] * 8);
        uVar8 = (ulong)(uint)(iVar5 >> 3);
        do {
          iVar19 = (int)*puVar10;
          iVar42 = -(uint)(iVar19 < (int)DAT_0275b440);
          iVar20 = (int)((ulong)*puVar10 >> 0x20);
          iVar44 = -(uint)(iVar20 < (int)((ulong)DAT_0275b440 >> 0x20));
          iVar21 = (int)puVar10[1];
          iVar47 = -(uint)(iVar21 < (int)DAT_0275b448);
          iVar22 = (int)((ulong)puVar10[1] >> 0x20);
          iVar50 = -(uint)(iVar22 < (int)((ulong)DAT_0275b448 >> 0x20));
          uVar33 = puVar13[1];
          uVar24 = *puVar13;
          bVar23 = (byte)uVar24;
          bVar25 = (byte)((ulong)uVar24 >> 8);
          bVar26 = (byte)((ulong)uVar24 >> 0x10);
          bVar27 = (byte)((ulong)uVar24 >> 0x18);
          iVar43 = CONCAT13(bVar27 & (byte)((uint)iVar42 >> 0x18),
                            CONCAT12(bVar26 & (byte)((uint)iVar42 >> 0x10),
                                     CONCAT11(bVar25 & (byte)((uint)iVar42 >> 8),
                                              bVar23 & (byte)iVar42)));
          bVar28 = (byte)((ulong)uVar24 >> 0x20);
          bVar29 = (byte)((ulong)uVar24 >> 0x28);
          bVar30 = (byte)((ulong)uVar24 >> 0x30);
          bVar31 = (byte)((ulong)uVar24 >> 0x38);
          bVar32 = (byte)uVar33;
          bVar34 = (byte)((ulong)uVar33 >> 8);
          bVar35 = (byte)((ulong)uVar33 >> 0x10);
          bVar36 = (byte)((ulong)uVar33 >> 0x18);
          iVar48 = CONCAT13(bVar36 & (byte)((uint)iVar47 >> 0x18),
                            CONCAT12(bVar35 & (byte)((uint)iVar47 >> 0x10),
                                     CONCAT11(bVar34 & (byte)((uint)iVar47 >> 8),
                                              bVar32 & (byte)iVar47)));
          bVar37 = (byte)((ulong)uVar33 >> 0x20);
          bVar38 = (byte)((ulong)uVar33 >> 0x28);
          bVar39 = (byte)((ulong)uVar33 >> 0x30);
          bVar40 = (byte)((ulong)uVar33 >> 0x38);
          bVar52 = -((int)((ulong)_DAT_0275b450 >> 0x20) < (int)((ulong)uVar24 >> 0x20)) ^
                   (byte)iVar44;
          iVar45 = (int)(CONCAT17(bVar31 & (byte)((uint)iVar44 >> 0x18),
                                  CONCAT16(bVar30 & (byte)((uint)iVar44 >> 0x10),
                                           CONCAT15(bVar29 & (byte)((uint)iVar44 >> 8),
                                                    CONCAT14(bVar28 & (byte)iVar44,iVar43)))) >>
                        0x20);
          iVar51 = (int)(CONCAT17(bVar40 & (byte)((uint)iVar50 >> 0x18),
                                  CONCAT16(bVar39 & (byte)((uint)iVar50 >> 0x10),
                                           CONCAT15(bVar38 & (byte)((uint)iVar50 >> 8),
                                                    CONCAT14(bVar37 & (byte)iVar50,iVar48)))) >>
                        0x20);
          bVar41 = (byte)((int)((uint)CONCAT12(bVar52,(ushort)(byte)(-((int)_DAT_0275b450 <
                                                                      (int)uVar24) ^ (byte)iVar42))
                               << 0x1f) >> 0x1f);
          bVar52 = (byte)((int)((uint)bVar52 << 0x1f) >> 0x1f);
          uVar11 = (ulong)_DAT_0275b450 >> 0x20;
          uVar2 = (ulong)_DAT_0275b450 >> 0x28;
          uVar3 = (ulong)_DAT_0275b450 >> 0x30;
          uVar4 = (ulong)_DAT_0275b450 >> 0x38;
          bVar46 = (byte)((int)((uint)(byte)(-((int)uRam000000000275b458 < (int)uVar33) ^
                                            (byte)iVar47) << 0x1f) >> 0x1f);
          bVar49 = (byte)((int)((uint)(byte)(-((int)((ulong)uRam000000000275b458 >> 0x20) <
                                              (int)((ulong)uVar33 >> 0x20)) ^ (byte)iVar50) << 0x1f)
                         >> 0x1f);
          iVar47 = CONCAT13(((byte)((ulong)_DAT_0275b450 >> 0x18) ^ bVar41) & bVar27,
                            CONCAT12(((byte)((ulong)_DAT_0275b450 >> 0x10) ^ bVar41) & bVar26,
                                     CONCAT11(((byte)((ulong)_DAT_0275b450 >> 8) ^ bVar41) & bVar25,
                                              ((byte)_DAT_0275b450 ^ bVar41) & bVar23)));
          iVar50 = CONCAT13(((byte)((ulong)uRam000000000275b458 >> 0x18) ^ bVar46) & bVar36,
                            CONCAT12(((byte)((ulong)uRam000000000275b458 >> 0x10) ^ bVar46) & bVar35
                                     ,CONCAT11(((byte)((ulong)uRam000000000275b458 >> 8) ^ bVar46) &
                                               bVar34,((byte)uRam000000000275b458 ^ bVar46) & bVar32
                                              )));
          iVar42 = CONCAT13(bVar27 & bVar41,
                            CONCAT12(bVar26 & bVar41,CONCAT11(bVar25 & bVar41,bVar23 & bVar41)));
          iVar44 = CONCAT13(bVar36 & bVar46,
                            CONCAT12(bVar35 & bVar46,CONCAT11(bVar34 & bVar46,bVar32 & bVar46)));
          puVar10[1] = CONCAT44((iVar22 - iVar51) +
                                (int)(CONCAT17(((byte)((ulong)uRam000000000275b458 >> 0x38) ^ bVar49
                                               ) & bVar40,
                                               CONCAT16(((byte)((ulong)uRam000000000275b458 >> 0x30)
                                                        ^ bVar49) & bVar39,
                                                        CONCAT15(((byte)((ulong)uRam000000000275b458
                                                                        >> 0x28) ^ bVar49) & bVar38,
                                                                 CONCAT14(((byte)((ulong)
                                                  uRam000000000275b458 >> 0x20) ^ bVar49) & bVar37,
                                                  iVar50)))) >> 0x20),(iVar21 - iVar48) + iVar50);
          *puVar10 = CONCAT44((iVar20 - iVar45) +
                              (int)(CONCAT17(((byte)uVar4 ^ bVar52) & bVar31,
                                             CONCAT16(((byte)uVar3 ^ bVar52) & bVar30,
                                                      CONCAT15(((byte)uVar2 ^ bVar52) & bVar29,
                                                               CONCAT14(((byte)uVar11 ^ bVar52) &
                                                                        bVar28,iVar47)))) >> 0x20),
                              (iVar19 - iVar43) + iVar47);
          uVar8 = uVar8 - 1;
          puVar13[1] = CONCAT44((iVar51 + iVar22) -
                                (int)(CONCAT17(bVar40 & bVar49,
                                               CONCAT16(bVar39 & bVar49,
                                                        CONCAT15(bVar38 & bVar49,
                                                                 CONCAT14(bVar37 & bVar49,iVar44))))
                                     >> 0x20),(iVar48 + iVar21) - iVar44);
          *puVar13 = CONCAT44((iVar45 + iVar20) -
                              (int)(CONCAT17(bVar31 & bVar52,
                                             CONCAT16(bVar30 & bVar52,
                                                      CONCAT15(bVar29 & bVar52,
                                                               CONCAT14(bVar28 & bVar52,iVar42))))
                                   >> 0x20),(iVar43 + iVar19) - iVar42);
          puVar10 = puVar10 + 2;
          puVar13 = puVar13 + 2;
        } while (uVar8 != 0);
      } while (0 < lVar6);
    }
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar6 = 0;
      auStack_70[3] = uVar1;
      do {
        if (*param_2 < 2) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulong)*(byte *)(*(long *)(param_2 + 2) + lVar6);
        }
        FUN_005097e0(param_1,*(long *)(lVar16 + 0x30) +
                             (ulong)*(byte *)(*(long *)(param_2 + 4) + uVar8 * 2) * 0x40,
                     plVar17[lVar6],*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0x10));
      if (0 < *(int *)(param_1 + 0x10)) {
        lVar6 = 0;
        do {
          thunk_FUN_00507260(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar6 * 8));
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_1 + 0x10));
      }
    }
    *(undefined1 *)(param_1 + 0x44) = 0;
    return 0;
  }
  uVar8 = 0;
  do {
    if (iVar5 < 1) {
      iVar19 = 0;
    }
    else {
      lVar9 = *(long *)(param_2 + 2);
      uVar11 = (long)iVar5 & 1;
      if (iVar5 == 1) {
        lVar7 = 0;
        iVar19 = 0;
      }
      else {
        lVar7 = 0;
        iVar19 = 0;
        puVar14 = puVar18 + 1;
        do {
          if ((lVar9 == 0) || (uVar8 == *(byte *)(lVar9 + lVar7))) {
            *(uint *)(lVar15 + (long)iVar19 * 4) = (uint)(puVar14[-1] != 0);
            *(undefined8 *)(lVar6 + (long)iVar19 * 8) =
                 *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7 * 8);
            iVar19 = iVar19 + 1;
          }
          if ((lVar9 == 0) || (uVar8 == *(byte *)(lVar9 + lVar7 + 1))) {
            *(uint *)(lVar15 + (long)iVar19 * 4) = (uint)(*puVar14 != 0);
            *(undefined8 *)(lVar6 + (long)iVar19 * 8) =
                 *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7 * 8 + 8);
            iVar19 = iVar19 + 1;
          }
          lVar7 = lVar7 + 2;
          puVar14 = puVar14 + 2;
        } while ((long)iVar5 - uVar11 != lVar7);
        if (uVar11 == 0) goto LAB_0050e278;
      }
      if ((lVar9 == 0) || (uVar8 == *(byte *)(lVar9 + lVar7))) {
        *(uint *)(lVar15 + (long)iVar19 * 4) = (uint)(puVar18[lVar7] != 0);
        *(undefined8 *)(lVar6 + (long)iVar19 * 8) =
             *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar7 * 8);
        iVar19 = iVar19 + 1;
      }
    }
LAB_0050e278:
    FUN_0050ec90(param_1,*(long *)(lVar16 + 0x38) +
                         (ulong)*(byte *)(*(long *)(param_2 + 4) + uVar8 * 2 + 1) * 0x28,lVar6,
                 lVar15,iVar19);
    uVar8 = uVar8 + 1;
    if ((long)*param_2 <= (long)uVar8) goto LAB_0050e2ac;
    iVar5 = *(int *)(param_1 + 0x10);
  } while( true );
}


