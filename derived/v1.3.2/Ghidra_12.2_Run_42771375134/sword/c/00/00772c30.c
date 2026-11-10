/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00772c30; name: FUN_00772c30
 */


void FUN_00772c30(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  ulong *puVar17;
  uint *puVar18;
  ulong uVar19;
  int *piVar20;
  uint *puVar21;
  ushort *puVar22;
  byte *pbVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  ulong *puVar32;
  ulong *puVar33;
  undefined8 *puVar34;
  long lVar35;
  int *piVar36;
  long lVar37;
  long lVar38;
  uint uVar39;
  long lVar40;
  undefined4 uVar41;
  ulong local_90;
  char *pcStack_88;
  size_t local_80;
  long local_78;
  
  puVar12 = PTR_DAT_02715080;
  puVar11 = PTR_DAT_02715078;
  if (*(long *)(param_1 + 0x88) == 0) {
    piVar36 = (int *)0x0;
  }
  else {
    puVar18 = *(uint **)(*(long *)(param_1 + 0x88) + 400);
    piVar36 = (int *)((long)puVar18 + (ulong)*puVar18);
  }
  if (((4 < *(ushort *)((long)piVar36 - (long)*piVar36)) &&
      (uVar19 = (ulong)((ushort *)((long)piVar36 - (long)*piVar36))[2], uVar19 != 0)) &&
     (4 < *(uint *)((long)piVar36 + uVar19))) {
    lVar37 = *(long *)(param_1 + 0x68);
    if ((lVar37 == 0) || (*(int *)(lVar37 + 0x54) == 0)) {
      lVar35 = 0;
    }
    else {
      piVar20 = (int *)(lVar37 + 0x54);
      iVar14 = *(int *)(lVar37 + 0x54);
      do {
        while( true ) {
          puVar34 = *(undefined8 **)(lVar37 + 0x58);
          if (((*puVar11 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar11), iVar13 != 0)) {
            uVar15 = FUN_00a87090();
            *(undefined8 *)puVar12 = uVar15;
            __cxa_guard_release(puVar11);
          }
          lVar35 = 0;
          if (puVar34 == (undefined8 *)0x0) goto LAB_00772d48;
          while (puVar34 != (undefined8 *)puVar12) {
            puVar34 = (undefined8 *)*puVar34;
            if (puVar34 == (undefined8 *)0x0) {
              lVar35 = 0;
              goto LAB_00772d48;
            }
          }
          iVar13 = *piVar20;
          if (iVar13 != iVar14) break;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar8) {
            *piVar20 = iVar14 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            lVar35 = 0;
            if (*(long *)(lVar37 + 0x60) != 0) {
              lVar35 = *(long *)(lVar37 + 0x60) + -0x50;
            }
            goto LAB_00772d48;
          }
          lVar35 = 0;
          iVar14 = iVar13;
          if (iVar13 == 0) goto LAB_00772d48;
        }
        ClearExclusiveLocal();
        lVar35 = 0;
        iVar14 = iVar13;
      } while (iVar13 != 0);
    }
LAB_00772d48:
    lVar37 = FUN_007959b0(lVar35,&local_90);
    if (*(ushort *)((long)piVar36 - (long)*piVar36) < 0x3f) {
      piVar20 = (int *)0x0;
    }
    else {
      uVar19 = (ulong)((ushort *)((long)piVar36 - (long)*piVar36))[0x1f];
      piVar20 = (int *)0x0;
      if (uVar19 != 0) {
        puVar18 = (uint *)((long)piVar36 + uVar19);
        piVar20 = (int *)((long)puVar18 + (ulong)*puVar18);
      }
    }
    puVar22 = (ushort *)((long)piVar20 - (long)*piVar20);
    if ((((8 < *puVar22) && ((ulong)puVar22[4] != 0)) && (10 < *puVar22)) &&
       ((*(char *)((long)piVar20 + (ulong)puVar22[4]) == '\x02' &&
        (uVar19 = (ulong)puVar22[5], uVar19 != 0)))) {
      uVar24 = (ulong)*(uint *)((long)piVar20 + uVar19);
      puVar18 = (uint *)((long)((long)piVar20 + uVar19) + uVar24);
      if ((puVar18 != (uint *)0x0) && ((uVar39 = *puVar18, uVar39 != 0 && ((ulong)uVar39 != 0)))) {
        puVar18 = puVar18 + 1;
        puVar1 = puVar18 + uVar39;
        uVar39 = 0;
        lVar38 = (long)piVar20 + uVar24 + uVar19 + 0x11;
        do {
          uVar4 = *puVar18;
          piVar36 = (int *)((long)puVar18 + (ulong)uVar4);
          puVar22 = (ushort *)((long)piVar36 - (long)*piVar36);
          uVar6 = puVar22[3];
          puVar21 = (uint *)((long)piVar36 + (ulong)uVar6);
          uVar19 = (ulong)*puVar21;
          piVar20 = (int *)((long)puVar21 + uVar19);
          if (*piVar20 != 0) {
            if ((*puVar22 < 5) || ((ulong)puVar22[2] == 0)) {
              lVar40 = 0;
            }
            else {
              puVar21 = (uint *)((long)piVar36 + (ulong)puVar22[2]);
              lVar40 = (long)puVar21 + (ulong)*puVar21;
            }
            local_80 = strlen((char *)(lVar40 + 4));
            bVar5 = *(byte *)(lVar40 + 4);
            local_90 = 0xcbf29ce484222645;
            if (bVar5 != 0) {
              local_90 = 0xcbf29ce484222645;
              pbVar23 = (byte *)(lVar40 + 5);
              do {
                local_90 = (local_90 ^ bVar5) * 0x100000001b3;
                bVar5 = *pbVar23;
                pbVar23 = pbVar23 + 1;
              } while (bVar5 != 0);
            }
            local_78 = 0;
            pcStack_88 = (char *)(lVar40 + 4);
            iVar14 = FUN_0072c700(lVar37 + 0x210,&local_90);
            if (iVar14 != -1) {
              if (0xf < uVar39) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar25 = (ulong)*(uint *)(param_1 + (long)(int)uVar39 * 4 + 0x198);
              puVar21 = (uint *)(piVar20 + uVar25 + 1);
              uVar29 = (ulong)*puVar21;
              piVar36 = (int *)((long)puVar21 + uVar29);
              uVar30 = (ulong)*(ushort *)((long)piVar36 + (4 - (long)*piVar36));
              puVar2 = (uint *)((long)piVar36 + uVar30);
              uVar27 = (ulong)*puVar2;
              puVar2 = (uint *)((long)puVar2 + uVar27);
              puVar21 = puVar2 + 1;
              uVar24 = (ulong)*puVar2;
              if (uVar24 != 0) {
                uVar26 = (ulong)iVar14;
                lVar28 = *(long *)(*(long *)(lVar37 + 0x108) + 0x290) + uVar26 * 0x4c0;
                puVar2 = puVar21 + uVar24;
                lVar40 = lVar38 + uVar27 + uVar25 * 4 + uVar30 + uVar29 + uVar19 + (ulong)uVar6 +
                                  (ulong)uVar4;
                do {
                  piVar36 = (int *)((long)puVar21 + (ulong)*puVar21);
                  puVar22 = (ushort *)((long)piVar36 - (long)*piVar36);
                  puVar3 = (uint *)((long)piVar36 + (ulong)puVar22[2]);
                  uVar24 = (ulong)*puVar3;
                  bVar5 = *(byte *)((long)puVar3 + uVar24 + 4);
                  uVar19 = 0xcbf29ce484222645;
                  if (bVar5 != 0) {
                    uVar19 = 0xcbf29ce484222645;
                    pbVar23 = (byte *)(lVar40 + uVar24 + puVar22[2] + (ulong)*puVar21);
                    do {
                      uVar19 = (uVar19 ^ bVar5) * 0x100000001b3;
                      bVar5 = *pbVar23;
                      pbVar23 = pbVar23 + 1;
                    } while (bVar5 != 0);
                  }
                  puVar33 = *(ulong **)(lVar28 + 0xa8);
                  puVar32 = *(ulong **)(lVar28 + 0xb0);
                  puVar9 = puVar33;
                  puVar10 = puVar32;
                  if (puVar33 != puVar32) {
                    uVar24 = *puVar33;
                    puVar17 = puVar33;
                    while( true ) {
                      puVar9 = puVar17;
                      puVar10 = puVar17;
                      if (uVar24 == uVar19) break;
                      puVar17 = puVar17 + 4;
                      puVar9 = puVar32;
                      puVar10 = puVar32;
                      if (puVar32 == puVar17) break;
                      uVar24 = *puVar17;
                    }
                  }
                  uVar41 = 0;
                  if (6 < *puVar22) {
                    uVar41 = 0;
                    if ((ulong)puVar22[3] != 0) {
                      uVar41 = *(undefined4 *)((long)piVar36 + (ulong)puVar22[3]);
                    }
                  }
                  if ((ulong)((*(long *)(lVar37 + 0x328) - *(long *)(lVar37 + 800) >> 3) *
                             -0x70a3d70a3d70a3d7) <= uVar26) {
LAB_0077314c:
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_out_of_range();
                  }
                  lVar16 = *(long *)(lVar37 + 800) + uVar26 * 200;
                  lVar31 = *(long *)(lVar16 + 0x50);
                  uVar19 = ((long)puVar9 - (long)puVar33) * 0x8000000 >> 0x20;
                  if (puVar10 == puVar32) {
                    uVar19 = 0xffffffffffffffff;
                  }
                  if ((ulong)(*(long *)(lVar16 + 0x58) - lVar31 >> 2) <= uVar19) goto LAB_0077314c;
                  puVar21 = puVar21 + 1;
                  lVar40 = lVar40 + 4;
                  *(undefined4 *)(lVar31 + uVar19 * 4) = uVar41;
                } while (puVar21 != puVar2);
              }
              uVar39 = uVar39 + 1;
            }
            if (local_78 != 0) {
              (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
              local_78 = 0;
            }
          }
          puVar18 = puVar18 + 1;
          lVar38 = lVar38 + 4;
        } while (puVar18 != puVar1);
      }
    }
    if (lVar35 != 0) {
      (**(code **)(*(long *)(lVar35 + 0x48) + 0x18))((long *)(lVar35 + 0x48));
    }
  }
  return;
}


