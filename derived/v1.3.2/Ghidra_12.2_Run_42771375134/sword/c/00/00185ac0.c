/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00185ac0; name: FUN_00185ac0
 */


undefined8
FUN_00185ac0(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
            long param_5,long param_6,long *param_7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined2 uVar23;
  undefined4 uVar24;
  ulong uVar25;
  void *pvVar26;
  void *__dest;
  void *__dest_00;
  undefined8 uVar27;
  void *pvVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  int *piVar32;
  uint uVar33;
  uint uVar34;
  undefined8 *puVar35;
  int iVar36;
  ulong uVar37;
  int iVar38;
  undefined4 *puVar39;
  uint *puVar40;
  int iVar41;
  int iVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  long local_848;
  uint local_750;
  undefined8 local_6f8;
  uint local_6f0;
  void *local_130;
  short local_f4 [2];
  short local_f0;
  short local_ec;
  short local_e8;
  uint local_e4;
  undefined4 local_e0 [4];
  undefined4 local_d0 [4];
  undefined4 local_c0 [4];
  undefined4 local_b0 [4];
  
  uVar27 = param_4._8_8_;
  *(undefined8 *)(param_5 + 0x1c04) = 0;
  uVar24 = DAT_01d4c5a4;
  uVar30 = 0;
  uVar37 = 0;
  do {
    puVar39 = (undefined4 *)(param_6 + uVar37 * 0xd0);
    local_b0[uVar37] = *puVar39;
    local_c0[uVar37] = puVar39[2];
    local_d0[uVar37] = puVar39[1];
    local_e0[uVar37] = puVar39[3];
    puVar40 = puVar39 + 0x2e;
    *puVar40 = uVar30;
    if (*(char *)((long)puVar39 + 0x95) == '\0') {
      lVar31 = param_6 + uVar37 * 0xd0;
      auVar43._8_8_ = uVar27;
      auVar43._0_8_ = param_4._0_8_;
      uVar25 = FUN_00181a60(auVar43,param_5,*(undefined8 *)(lVar31 + 0xa0),
                            *(undefined1 *)(lVar31 + 0xa8),lVar31 + 0x38,lVar31 + 0x54);
      if ((uVar25 & 1) == 0) {
        return 1;
      }
    }
    lVar31 = param_6 + uVar37 * 0xd0;
    *(undefined4 *)(lVar31 + 0xc0) = *(undefined4 *)(param_5 + 0x1c04);
    puVar35 = (undefined8 *)(lVar31 + 0x88);
    uVar25 = FUN_00181fa0(uVar24,param_5,*puVar35,*(undefined4 *)(lVar31 + 0x90));
    if ((uVar25 & 1) == 0) {
      return 1;
    }
    uVar3 = *(undefined4 *)(lVar31 + 0xc0);
    lVar31 = param_6 + uVar37 * 0xd0;
    *(short *)(lVar31 + 0xc4) = (short)*(undefined4 *)(param_5 + 0x1c04) - (short)uVar3;
    uVar25 = FUN_001821c0(uVar24,param_5,*puVar35,lVar31 + 0x38,lVar31 + 0x54,uVar3,*puVar40);
    if ((uVar25 & 1) != 0) {
      return 1;
    }
    auVar44._8_8_ = uVar27;
    auVar44._0_8_ = param_4._0_8_;
    FUN_001825b0(auVar44,*(float *)(param_6 + uVar37 * 0xd0 + 0x98) + param_3,param_5,*puVar35,
                 lVar31 + 0x38,lVar31 + 0x54,*puVar40);
    uVar30 = *(uint *)(param_5 + 0x1c08);
    uVar34 = *puVar40;
    uVar33 = uVar30;
    if (uVar34 < uVar30) {
      do {
        uVar29 = uVar33 - 1;
        if (*(int *)(param_5 + (ulong)uVar29 * 4 + 0x1b00) == 0xffff) {
          if (uVar33 < uVar30) {
            uVar34 = uVar33 - 1;
            puVar39 = (undefined4 *)(param_5 + 0x1b00 + (ulong)uVar33 * 4);
            do {
              lVar31 = param_5 + (ulong)uVar34 * 4;
              uVar34 = uVar34 + 1;
              *(undefined4 *)(lVar31 + 0x1b00) = *puVar39;
              *(undefined4 *)(lVar31 + 0x1a80) = puVar39[-0x20];
              uVar30 = *(uint *)(param_5 + 0x1c08);
              uVar33 = uVar33 + 1;
              puVar39 = puVar39 + 1;
            } while (uVar33 < uVar30);
            uVar34 = *puVar40;
          }
          uVar30 = uVar30 - 1;
          *(uint *)(param_5 + 0x1c08) = uVar30;
        }
        uVar33 = uVar29;
      } while (uVar34 < uVar29);
    }
    lVar31 = uVar37 * 0xd0;
    uVar37 = uVar37 + 1;
    *(uint *)(param_6 + lVar31 + 0xbc) = uVar30 - uVar34;
  } while (uVar37 < 4);
  uVar33 = *(uint *)(param_6 + 0xb8);
  uVar37 = (ulong)uVar33;
  uVar30 = *(int *)(param_6 + 0xbc) + uVar33;
  if (uVar33 < uVar30) {
    if ((ulong)uVar30 - 1 == uVar37) {
      iVar38 = 0;
    }
    else {
      lVar31 = -uVar37;
      iVar38 = 0;
      piVar32 = (int *)(param_5 + uVar37 * 4 + 0x1b04);
      do {
        piVar1 = piVar32 + -1;
        iVar41 = *piVar32;
        piVar32 = piVar32 + 2;
        if (*piVar1 != 0xffff) {
          iVar38 = iVar38 + 1;
        }
        lVar31 = lVar31 + -2;
        if (iVar41 != 0xffff) {
          iVar38 = iVar38 + 1;
        }
      } while (((ulong)(uVar30 - uVar33) & 1) - (ulong)uVar30 != lVar31);
      uVar37 = -lVar31;
    }
    if (((uVar30 - uVar33 & 1) != 0) && (*(int *)(param_5 + uVar37 * 4 + 0x1b00) != 0xffff)) {
      iVar38 = iVar38 + 1;
    }
    uVar30 = iVar38 * 0x58 + 0xfU & 0xfffffff0;
    if (uVar30 == 0) goto LAB_00185db4;
    pvVar26 = (void *)(**(code **)(*param_7 + 8))(param_7,uVar30);
    if (1 < (long)pvVar26 + 1U) goto LAB_00185db8;
LAB_001860b0:
    uVar27 = 0;
  }
  else {
    iVar38 = 0;
LAB_00185db4:
    pvVar26 = (void *)0x0;
LAB_00185db8:
    uVar33 = *(uint *)(param_6 + 0x188);
    uVar37 = (ulong)uVar33;
    uVar30 = *(int *)(param_6 + 0x18c) + uVar33;
    if (uVar33 < uVar30) {
      if ((ulong)uVar30 - 1 == uVar37) {
        iVar41 = 0;
      }
      else {
        lVar31 = -uVar37;
        iVar41 = 0;
        piVar32 = (int *)(param_5 + uVar37 * 4 + 0x1b04);
        do {
          piVar1 = piVar32 + -1;
          iVar42 = *piVar32;
          piVar32 = piVar32 + 2;
          if (*piVar1 != 0xffff) {
            iVar41 = iVar41 + 1;
          }
          lVar31 = lVar31 + -2;
          if (iVar42 != 0xffff) {
            iVar41 = iVar41 + 1;
          }
        } while (((ulong)(uVar30 - uVar33) & 1) - (ulong)uVar30 != lVar31);
        uVar37 = -lVar31;
      }
      if (((uVar30 - uVar33 & 1) != 0) && (*(int *)(param_5 + uVar37 * 4 + 0x1b00) != 0xffff)) {
        iVar41 = iVar41 + 1;
      }
      uVar30 = iVar41 * 0x58 + 0xfU & 0xfffffff0;
      if (uVar30 == 0) goto LAB_00185e94;
      local_130 = (void *)(**(code **)(*param_7 + 8))(param_7,uVar30);
      if ((long)local_130 + 1U < 2) goto LAB_001860b0;
    }
    else {
      iVar41 = 0;
LAB_00185e94:
      local_130 = (void *)0x0;
    }
    uVar33 = *(uint *)(param_6 + 600);
    uVar37 = (ulong)uVar33;
    uVar30 = *(int *)(param_6 + 0x25c) + uVar33;
    if (uVar33 < uVar30) {
      if ((ulong)uVar30 - 1 == uVar37) {
        iVar42 = 0;
      }
      else {
        lVar31 = -uVar37;
        iVar42 = 0;
        piVar32 = (int *)(param_5 + uVar37 * 4 + 0x1b04);
        do {
          piVar1 = piVar32 + -1;
          iVar36 = *piVar32;
          piVar32 = piVar32 + 2;
          if (*piVar1 != 0xffff) {
            iVar42 = iVar42 + 1;
          }
          lVar31 = lVar31 + -2;
          if (iVar36 != 0xffff) {
            iVar42 = iVar42 + 1;
          }
        } while (((ulong)(uVar30 - uVar33) & 1) - (ulong)uVar30 != lVar31);
        uVar37 = -lVar31;
      }
      if (((uVar30 - uVar33 & 1) != 0) && (*(int *)(param_5 + uVar37 * 4 + 0x1b00) != 0xffff)) {
        iVar42 = iVar42 + 1;
      }
      uVar30 = iVar42 * 0x58 + 0xfU & 0xfffffff0;
      if (uVar30 == 0) goto LAB_00185f74;
      __dest = (void *)(**(code **)(*param_7 + 8))(param_7,uVar30);
      if ((long)__dest + 1U < 2) goto LAB_001860b0;
    }
    else {
      iVar42 = 0;
LAB_00185f74:
      __dest = (void *)0x0;
    }
    uVar33 = *(uint *)(param_6 + 0x328);
    uVar37 = (ulong)uVar33;
    uVar30 = *(int *)(param_6 + 0x32c) + uVar33;
    if (uVar33 < uVar30) {
      if ((ulong)uVar30 - 1 == uVar37) {
        iVar36 = 0;
      }
      else {
        lVar31 = -uVar37;
        iVar36 = 0;
        piVar32 = (int *)(param_5 + uVar37 * 4 + 0x1b04);
        do {
          piVar1 = piVar32 + -1;
          iVar2 = *piVar32;
          piVar32 = piVar32 + 2;
          if (*piVar1 != 0xffff) {
            iVar36 = iVar36 + 1;
          }
          lVar31 = lVar31 + -2;
          if (iVar2 != 0xffff) {
            iVar36 = iVar36 + 1;
          }
        } while (((ulong)(uVar30 - uVar33) & 1) - (ulong)uVar30 != lVar31);
        uVar37 = -lVar31;
      }
      if (((uVar30 - uVar33 & 1) != 0) && (*(int *)(param_5 + uVar37 * 4 + 0x1b00) != 0xffff)) {
        iVar36 = iVar36 + 1;
      }
      uVar30 = iVar36 * 0x58 + 0xf;
      if ((uVar30 & 0xfffffff0) == 0) goto LAB_00186004;
      __dest_00 = (void *)(**(code **)(*param_7 + 8))(param_7,uVar30 & 0xfffffff0);
      if ((long)__dest_00 + 1U < 2) goto LAB_001860b0;
    }
    else {
      iVar36 = 0;
LAB_00186004:
      __dest_00 = (void *)0x0;
    }
    local_e4 = 0;
    FUN_001855c0(param_6,&local_e4,local_f4,param_5);
    uVar30 = local_e4;
    uVar37 = (ulong)local_e4;
    if (local_e4 == 0) {
      local_848 = 0;
    }
    else {
      if (0x4000 < local_e4 + 0x10) {
        return 1;
      }
      local_848 = (**(code **)*param_7)();
      if (local_848 + 1U < 2) goto LAB_001860b0;
    }
    lVar31 = *(long *)(param_6 + 0x10);
    *(void **)(param_6 + 0xa0) = pvVar26;
    *(char *)(param_6 + 0xa8) = (char)iVar38;
    if (pvVar26 != (void *)0x0) {
      Hint_Prefetch(pvVar26,0,0,0);
      Hint_Prefetch((long)pvVar26 + 0x80,0,0,0);
      Hint_Prefetch((long)pvVar26 + 0x100,0,0,0);
      uVar33 = *(uint *)(param_6 + 0xbc);
      if (uVar33 != 0) {
        uVar34 = 0;
        do {
          uVar25 = (ulong)(uVar34 + *(int *)(param_6 + 0xb8));
          pvVar28 = pvVar26;
          if (*(int *)(param_5 + uVar25 * 4 + 0x1b00) != 0xffff) {
            pvVar28 = (void *)((long)pvVar26 + 0x58);
            memcpy(pvVar26,(void *)(param_5 + uVar25 * 0x58 + 0xb00),0x58);
            uVar33 = *(uint *)(param_6 + 0xbc);
          }
          uVar34 = uVar34 + 1;
          pvVar26 = pvVar28;
        } while (uVar34 < uVar33);
      }
    }
    uVar23 = (undefined2)(uVar30 >> 4);
    *(short *)(param_6 + 0xc6) = local_f4[0] + *(short *)(param_6 + 0xc6);
    *(undefined2 *)(lVar31 + 0x1e) = uVar23;
    *(long *)(lVar31 + 0x20) = local_848;
    *(short *)(lVar31 + 0x1c) = (short)*(undefined4 *)(param_6 + 0x90);
    *(undefined8 *)(lVar31 + 0x28) = *(undefined8 *)(param_6 + 0xb0);
    lVar31 = *(long *)(param_6 + 0xe0);
    *(void **)(param_6 + 0x170) = local_130;
    *(char *)(param_6 + 0x178) = (char)iVar41;
    if (local_130 != (void *)0x0) {
      Hint_Prefetch(local_130,0,0,0);
      Hint_Prefetch((long)local_130 + 0x80,0,0,0);
      Hint_Prefetch((long)local_130 + 0x100,0,0,0);
      uVar30 = *(uint *)(param_6 + 0x18c);
      if (uVar30 != 0) {
        uVar33 = 0;
        do {
          uVar25 = (ulong)(uVar33 + *(int *)(param_6 + 0x188));
          pvVar26 = local_130;
          if (*(int *)(param_5 + uVar25 * 4 + 0x1b00) != 0xffff) {
            pvVar26 = (void *)((long)local_130 + 0x58);
            memcpy(local_130,(void *)(param_5 + uVar25 * 0x58 + 0xb00),0x58);
            uVar30 = *(uint *)(param_6 + 0x18c);
          }
          uVar33 = uVar33 + 1;
          local_130 = pvVar26;
        } while (uVar33 < uVar30);
      }
    }
    *(short *)(param_6 + 0x196) = local_f0 + *(short *)(param_6 + 0x196);
    *(long *)(lVar31 + 0x20) = local_848;
    *(undefined2 *)(lVar31 + 0x1e) = uVar23;
    *(short *)(lVar31 + 0x1c) = (short)*(undefined4 *)(param_6 + 0x160);
    *(undefined8 *)(lVar31 + 0x28) = *(undefined8 *)(param_6 + 0x180);
    lVar31 = *(long *)(param_6 + 0x1b0);
    *(void **)(param_6 + 0x240) = __dest;
    *(char *)(param_6 + 0x248) = (char)iVar42;
    if (__dest != (void *)0x0) {
      Hint_Prefetch(__dest,0,0,0);
      Hint_Prefetch((long)__dest + 0x80,0,0,0);
      Hint_Prefetch((long)__dest + 0x100,0,0,0);
      uVar30 = *(uint *)(param_6 + 0x25c);
      if (uVar30 != 0) {
        uVar33 = 0;
        do {
          uVar25 = (ulong)(uVar33 + *(int *)(param_6 + 600));
          pvVar26 = __dest;
          if (*(int *)(param_5 + uVar25 * 4 + 0x1b00) != 0xffff) {
            pvVar26 = (void *)((long)__dest + 0x58);
            memcpy(__dest,(void *)(param_5 + uVar25 * 0x58 + 0xb00),0x58);
            uVar30 = *(uint *)(param_6 + 0x25c);
          }
          uVar33 = uVar33 + 1;
          __dest = pvVar26;
        } while (uVar33 < uVar30);
      }
    }
    *(short *)(param_6 + 0x266) = local_ec + *(short *)(param_6 + 0x266);
    *(long *)(lVar31 + 0x20) = local_848;
    *(undefined2 *)(lVar31 + 0x1e) = uVar23;
    *(short *)(lVar31 + 0x1c) = (short)*(undefined4 *)(param_6 + 0x230);
    *(undefined8 *)(lVar31 + 0x28) = *(undefined8 *)(param_6 + 0x250);
    lVar31 = *(long *)(param_6 + 0x280);
    *(void **)(param_6 + 0x310) = __dest_00;
    *(char *)(param_6 + 0x318) = (char)iVar36;
    if (__dest_00 != (void *)0x0) {
      Hint_Prefetch(__dest_00,0,0,0);
      Hint_Prefetch((long)__dest_00 + 0x80,0,0,0);
      Hint_Prefetch((long)__dest_00 + 0x100,0,0,0);
      uVar30 = *(uint *)(param_6 + 0x32c);
      if (uVar30 != 0) {
        uVar33 = 0;
        do {
          uVar25 = (ulong)(uVar33 + *(int *)(param_6 + 0x328));
          pvVar26 = __dest_00;
          if (*(int *)(param_5 + uVar25 * 4 + 0x1b00) != 0xffff) {
            pvVar26 = (void *)((long)__dest_00 + 0x58);
            memcpy(__dest_00,(void *)(param_5 + uVar25 * 0x58 + 0xb00),0x58);
            uVar30 = *(uint *)(param_6 + 0x32c);
          }
          uVar33 = uVar33 + 1;
          __dest_00 = pvVar26;
        } while (uVar33 < uVar30);
      }
    }
    *(short *)(param_6 + 0x336) = local_e8 + *(short *)(param_6 + 0x336);
    *(long *)(lVar31 + 0x20) = local_848;
    *(undefined2 *)(lVar31 + 0x1e) = uVar23;
    *(short *)(lVar31 + 0x1c) = (short)*(undefined4 *)(param_6 + 0x300);
    *(undefined8 *)(lVar31 + 0x28) = *(undefined8 *)(param_6 + 800);
    uVar4 = *(undefined1 *)(param_6 + 0x166);
    uVar5 = *(undefined1 *)(param_6 + 0x236);
    uVar6 = *(undefined1 *)(param_6 + 0x306);
    Hint_Prefetch(param_5 + 0x1b84,0,0,0);
    Hint_Prefetch(param_5 + 0x1c04,0,0,0);
    uVar30 = *(uint *)(param_6 + 0x32c);
    if (*(uint *)(param_6 + 0x32c) <= *(uint *)(param_6 + 0x25c)) {
      uVar30 = *(uint *)(param_6 + 0x25c);
    }
    if (uVar30 <= *(uint *)(param_6 + 0x18c)) {
      uVar30 = *(uint *)(param_6 + 0x18c);
    }
    if (uVar30 <= *(uint *)(param_6 + 0xbc)) {
      uVar30 = *(uint *)(param_6 + 0xbc);
    }
    if (uVar30 != 0) {
      local_6f0 = 0;
      local_6f8 = 0;
      local_750 = 0;
      auVar13._4_4_ = *(undefined4 *)(*(long *)(param_6 + 0xf8) + 0x44);
      auVar13._0_4_ = *(undefined4 *)(*(long *)(param_6 + 0x28) + 0x44);
      auVar13._8_4_ = *(undefined4 *)(*(long *)(param_6 + 0x1c8) + 0x44);
      auVar13._12_4_ = *(undefined4 *)(*(long *)(param_6 + 0x298) + 0x44);
      auVar14._4_4_ = *(undefined4 *)(*(long *)(param_6 + 0x100) + 0x44);
      auVar14._0_4_ = *(undefined4 *)(*(long *)(param_6 + 0x30) + 0x44);
      auVar14._8_4_ = *(undefined4 *)(*(long *)(param_6 + 0x1d0) + 0x44);
      auVar14._12_4_ = *(undefined4 *)(*(long *)(param_6 + 0x2a0) + 0x44);
      NEON_fmax(auVar13,auVar14,4);
      auVar45._0_12_ = SUB1612(*(undefined1 (*) [16])(param_6 + 0x38),0);
      auVar45._12_4_ = 0;
      NEON_ext(auVar45,auVar45,8,1);
      auVar7._12_4_ = 0;
      auVar7._0_12_ = *(undefined1 (*) [12])(param_6 + 0x108);
      auVar8._12_4_ = 0;
      auVar8._0_12_ = *(undefined1 (*) [12])(param_6 + 0x108);
      NEON_ext(auVar7,auVar8,8,1);
      auVar9._12_4_ = 0;
      auVar9._0_12_ = *(undefined1 (*) [12])(param_6 + 0x1d8);
      auVar10._12_4_ = 0;
      auVar10._0_12_ = *(undefined1 (*) [12])(param_6 + 0x1d8);
      NEON_ext(auVar9,auVar10,8,1);
      auVar11._12_4_ = 0;
      auVar11._0_12_ = *(undefined1 (*) [12])(param_6 + 0x2a8);
      auVar12._12_4_ = 0;
      auVar12._0_12_ = *(undefined1 (*) [12])(param_6 + 0x2a8);
      NEON_ext(auVar11,auVar12,8,1);
      auVar15._12_4_ = 0;
      auVar15._0_12_ = *(undefined1 (*) [12])(param_6 + 0x54);
      auVar16._12_4_ = 0;
      auVar16._0_12_ = *(undefined1 (*) [12])(param_6 + 0x54);
      NEON_ext(auVar15,auVar16,8,1);
      auVar17._12_4_ = 0;
      auVar17._0_12_ = *(undefined1 (*) [12])(param_6 + 0x124);
      auVar18._12_4_ = 0;
      auVar18._0_12_ = *(undefined1 (*) [12])(param_6 + 0x124);
      NEON_ext(auVar17,auVar18,8,1);
      auVar19._12_4_ = 0;
      auVar19._0_12_ = *(undefined1 (*) [12])(param_6 + 500);
      auVar20._12_4_ = 0;
      auVar20._0_12_ = *(undefined1 (*) [12])(param_6 + 500);
      NEON_ext(auVar19,auVar20,8,1);
      auVar21._12_4_ = 0;
      auVar21._0_12_ = *(undefined1 (*) [12])(param_6 + 0x2c4);
      auVar22._12_4_ = 0;
      auVar22._0_12_ = *(undefined1 (*) [12])(param_6 + 0x2c4);
      NEON_ext(auVar21,auVar22,8,1);
      if (*(int *)(param_6 + 0xbc) != 0) {
        local_6f0 = *(uint *)(param_6 + 0xb8);
      }
      if (*(int *)(param_6 + 0x18c) != 0) {
        local_6f8 = (ulong)*(uint *)(param_6 + 0x188) << 0x20;
      }
      if (*(int *)(param_6 + 0x25c) != 0) {
        uVar37 = local_6f8 >> 0x20;
        local_6f8 = CONCAT44((int)uVar37,*(undefined4 *)(param_6 + 600));
      }
      if (*(int *)(param_6 + 0x32c) != 0) {
        local_750 = *(uint *)(param_6 + 0x328);
      }
      if (*(int *)(param_6 + 0xbc) == 0) {
        uVar30 = 0;
      }
      else {
        uVar30 = *(uint *)(param_5 + (ulong)local_6f0 * 4 + 0x1a80);
      }
      if (*(int *)(param_6 + 0x18c) == 0) {
        uVar33 = 0;
      }
      else {
        uVar33 = *(uint *)(param_5 + (local_6f8 >> 0x20) * 4 + 0x1a80);
      }
      if (*(int *)(param_6 + 0x25c) == 0) {
        uVar34 = 0;
      }
      else {
        uVar34 = *(uint *)(param_5 + (local_6f8 & 0xffffffff) * 4 + 0x1a80);
      }
      if (*(int *)(param_6 + 0x32c) == 0) {
        uVar29 = 0;
      }
      else {
        uVar29 = *(uint *)(param_5 + (ulong)local_750 * 4 + 0x1a80);
      }
      *(undefined1 *)(local_848 + 4) = *(undefined1 *)(param_6 + 0x96);
      *(undefined1 *)(local_848 + 5) = uVar4;
      *(undefined1 *)(local_848 + 6) = uVar5;
      *(undefined1 *)(local_848 + 7) = uVar6;
      if (uVar29 <= uVar34) {
        uVar29 = uVar34;
      }
      if (uVar29 <= uVar33) {
        uVar29 = uVar33;
      }
      if (uVar29 <= uVar30) {
        uVar29 = uVar30;
      }
      *(undefined1 *)(local_848 + 3) = 0;
                    /* WARNING: Subroutine does not return */
      memset((void *)(local_848 + 0xd0),0,((ulong)uVar29 & 0xfffffff) << 4);
    }
    uVar27 = 2;
    *(undefined4 *)(local_848 + uVar37) = 0;
  }
  return uVar27;
}


