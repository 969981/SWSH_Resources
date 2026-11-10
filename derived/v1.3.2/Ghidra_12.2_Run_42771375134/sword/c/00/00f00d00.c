/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f00d00; name: FUN_00f00d00
 */


void FUN_00f00d00(long param_1)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ushort *puVar18;
  ulong uVar19;
  code *pcVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  undefined1 auVar29 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  ulong local_b0;
  int *local_a8;
  size_t local_a0;
  long local_98;
  
  puVar8 = PTR_DAT_027150b0;
  fVar7 = DAT_01d4c284;
  uVar6 = DAT_01d4bfc8;
  fVar5 = DAT_01d4bb38;
  if (0 < *(int *)(param_1 + 0x214)) {
    lVar26 = 0;
    do {
      lVar25 = param_1 + lVar26 * 8;
      if (*(long *)(lVar25 + 0x198) == 0) {
        return;
      }
      plVar15 = (long *)(lVar25 + 0x198);
      uVar9 = FUN_00eaa240();
      uVar10 = FUN_00eaa250(*plVar15);
      piVar12 = (int *)FUN_00fa9400(*(undefined8 *)(param_1 + 0x88),uVar9,uVar10,
                                    *(undefined4 *)(*plVar15 + 0x5d4));
      uVar32 = *(undefined8 *)(*(long *)(lVar25 + 0x168) + 0xb8);
      uVar16 = *(undefined8 *)(*(long *)(lVar25 + 0x168) + 0xb0);
      puVar18 = (ushort *)((long)piVar12 - (long)*piVar12);
      if (*puVar18 < 0x11) {
        uVar19 = 0;
        fVar39 = 0.0;
        if (0xe < *puVar18) goto LAB_00f00dfc;
      }
      else {
        if ((ulong)puVar18[8] == 0) {
LAB_00f00dfc:
          uVar19 = 0;
          uVar4 = puVar18[7];
        }
        else {
          uVar19 = (ulong)*(uint *)((long)piVar12 + (ulong)puVar18[8]);
          uVar4 = puVar18[7];
        }
        if ((ulong)uVar4 == 0) {
          fVar39 = 0.0;
        }
        else {
          fVar39 = *(float *)((long)piVar12 + (ulong)uVar4);
        }
      }
      local_b0 = 0xef9edd532fb85bc3;
      local_a8 = (int *)0x1cebdf8;
      local_a0 = 5;
      local_98 = 0;
      uVar22 = (ulong)*(ushort *)((long)piVar12 + (4 - (long)*piVar12));
      puVar1 = (uint *)((long)piVar12 + uVar22);
      uVar23 = (ulong)*puVar1;
      piVar2 = (int *)((long)puVar1 + uVar23);
      if (*piVar2 != 0) {
        local_a0 = strlen((char *)(piVar2 + 1));
        bVar3 = *(byte *)(piVar2 + 1);
        local_b0 = 0xcbf29ce484222645;
        if (bVar3 != 0) {
          local_b0 = 0xcbf29ce484222645;
          pbVar21 = (byte *)((long)piVar12 + uVar23 + uVar22 + 5);
          do {
            local_b0 = (local_b0 ^ bVar3) * 0x100000001b3;
            bVar3 = *pbVar21;
            pbVar21 = pbVar21 + 1;
          } while (bVar3 != 0);
        }
        local_a8 = piVar2 + 1;
      }
      local_98 = 0;
      lVar25 = *(long *)(*(long *)(*plVar15 + 0x410) + 0x60);
      uVar22 = FUN_00a8cbe0(lVar25);
      lVar25 = lVar25 + -0x50;
      if ((uVar22 & 1) == 0) {
        lVar25 = 0;
      }
      lVar25 = *(long *)(lVar25 + 0x350);
      iVar11 = FUN_00722fb0(lVar25,&local_b0);
      fVar31 = 0.0;
      fVar34 = 0.0;
      fVar27 = 0.0;
      fVar30 = 0.0;
      fVar38 = (float)uVar19;
      if (-1 < iVar11) {
        lVar25 = *(long *)(lVar25 + 0x1b8);
        fVar31 = 0.0;
        fVar34 = 0.0;
        fVar27 = 0.0;
        fVar30 = 0.0;
        if (lVar25 + (long)iVar11 * 0x130 != 0) {
          lVar25 = lVar25 + (long)iVar11 * 0x130;
          uVar33 = *(undefined8 *)(lVar25 + 0x58);
          uVar28 = *(undefined8 *)(lVar25 + 0x50);
          fVar27 = (float)uVar28 * fVar38 + 0.0;
          fVar30 = (float)((ulong)uVar28 >> 0x20) * fVar38 + 0.0;
          fVar31 = (float)uVar33 * fVar38 + 0.0;
          fVar34 = (float)((ulong)uVar33 >> 0x20) * fVar38 + 0.0;
        }
      }
      fVar36 = 0.0;
      puVar18 = (ushort *)((long)piVar12 - (long)*piVar12);
      uVar4 = *puVar18;
      fVar35 = 0.0;
      fVar37 = 0.0;
      if (8 < uVar4) {
        fVar35 = 0.0;
        if ((ulong)puVar18[4] != 0) {
          fVar35 = *(float *)((long)piVar12 + (ulong)puVar18[4]);
        }
        if (uVar4 < 0xb) {
          fVar36 = 0.0;
        }
        else {
          fVar36 = 0.0;
          if ((ulong)puVar18[5] != 0) {
            fVar36 = *(float *)((long)piVar12 + (ulong)puVar18[5]);
          }
          if ((0xc < uVar4) && ((ulong)puVar18[6] != 0)) {
            fVar37 = *(float *)((long)piVar12 + (ulong)puVar18[6]);
            goto LAB_00f00f8c;
          }
        }
        fVar37 = 0.0;
      }
LAB_00f00f8c:
      lVar25 = param_1 + lVar26 * 0x10;
      *(ulong *)(lVar25 + 0x98) =
           CONCAT44(((float)((ulong)uVar32 >> 0x20) - fVar34) + 0.0,
                    ((float)uVar32 - fVar31) + fVar37);
      *(ulong *)(lVar25 + 0x90) =
           CONCAT44(((float)((ulong)uVar16 >> 0x20) - fVar30) + fVar36,
                    ((float)uVar16 - fVar27) + fVar35);
      lVar25 = *plVar15;
      *(undefined1 *)(lVar25 + 0xc0) = 1;
      *(ulong *)(lVar25 + 0xd8) = uVar19;
      *(ulong *)(lVar25 + 0xd0) = CONCAT44(fVar38,fVar38);
      lVar25 = *plVar15;
      auVar29 = FUN_00a92cd0((fVar39 * fVar5) / fVar7,0,0,fVar37,0);
      *(undefined1 (*) [16])(lVar25 + 0xa0) = auVar29;
      *(undefined1 *)(lVar25 + 0xc0) = 1;
      if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 7) ||
         (uVar19 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3], uVar19 == 0)) {
        plVar13 = (long *)*plVar15;
        pcVar20 = *(code **)(*plVar13 + 400);
LAB_00f01098:
        (*pcVar20)(plVar13,PTR_DAT_0271fcb8,2);
        plVar13 = *(long **)(*plVar15 + 0x418);
        if (plVar13 != *(long **)(*plVar15 + 0x420)) {
          lVar25 = *plVar13;
          if (lVar25 != 0) {
            puVar24 = *(undefined8 **)(lVar25 + 0x60);
            if (puVar24 != (undefined8 *)0x0) {
              plVar15 = (long *)(**(code **)*puVar24)(puVar24);
              puVar17 = PTR_DAT_0271fc70;
              if ((*PTR_DAT_027150a8 & 1) == 0) {
                iVar11 = __cxa_guard_acquire(PTR_DAT_027150a8);
                puVar17 = PTR_DAT_0271fc70;
                if (iVar11 != 0) {
                  uVar16 = FUN_00706e40();
                  *(undefined8 *)puVar8 = uVar16;
                  __cxa_guard_release(PTR_DAT_027150a8);
                  puVar17 = PTR_DAT_0271fc70;
                }
              }
              while( true ) {
                PTR_DAT_0271fc70 = puVar17;
                if (plVar15 == (long *)0x0) break;
                if (plVar15 == (long *)puVar8) goto LAB_00f01110;
                plVar15 = (long *)*plVar15;
              }
            }
          }
        }
      }
      else {
        plVar13 = (long *)*plVar15;
        pcVar20 = *(code **)(*plVar13 + 400);
        if (*(int *)((long)piVar12 + uVar19) == 0) goto LAB_00f01098;
        (*pcVar20)(plVar13,PTR_DAT_0271fcb8,1);
        plVar13 = *(long **)(*plVar15 + 0x418);
        if (plVar13 != *(long **)(*plVar15 + 0x420)) {
          lVar25 = *plVar13;
          if (lVar25 != 0) {
            puVar24 = *(undefined8 **)(lVar25 + 0x60);
            if (puVar24 != (undefined8 *)0x0) {
              puVar14 = (undefined8 *)(**(code **)*puVar24)(puVar24);
              puVar17 = PTR_DAT_0271fc68;
              if ((*PTR_DAT_027150a8 & 1) == 0) {
                iVar11 = __cxa_guard_acquire(PTR_DAT_027150a8);
                puVar17 = PTR_DAT_0271fc68;
                if (iVar11 != 0) {
                  uVar16 = FUN_00706e40();
                  *(undefined8 *)puVar8 = uVar16;
                  __cxa_guard_release(PTR_DAT_027150a8);
                  puVar17 = PTR_DAT_0271fc68;
                }
              }
              PTR_DAT_0271fc68 = puVar17;
              if (puVar14 != (undefined8 *)0x0) {
LAB_00f01078:
                if (puVar14 != (undefined8 *)puVar8) goto code_r0x00f01080;
LAB_00f01110:
                FUN_0069c820(uVar6,0x40c00000,puVar24 + -10,puVar17);
              }
            }
          }
        }
      }
LAB_00f01120:
      if (local_98 != 0) {
        (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
        local_98 = 0;
      }
      lVar26 = lVar26 + 1;
    } while (lVar26 < *(int *)(param_1 + 0x214));
  }
  return;
code_r0x00f01080:
  puVar14 = (undefined8 *)*puVar14;
  if (puVar14 == (undefined8 *)0x0) goto LAB_00f01120;
  goto LAB_00f01078;
}


