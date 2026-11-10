/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c0070; name: FUN_006c0070
 */


void FUN_006c0070(undefined8 *param_1,long *param_2,int *param_3)

{
  long *plVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  uint *puVar15;
  
  *param_1 = param_3;
  plVar14 = param_1 + 1;
  *plVar14 = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = param_2;
  if (((param_3 != (int *)0x0) && (4 < *(ushort *)((long)param_3 - (long)*param_3))) &&
     (uVar7 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2], uVar7 != 0)) {
    puVar2 = (uint *)((long)param_3 + uVar7);
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    if (*puVar2 != 0) {
      FUN_006c0620(plVar14,(long)(float)*puVar2);
      puVar15 = puVar2 + 1;
      if ((ulong)*puVar2 != 0) {
        puVar2 = puVar15 + *puVar2;
        plVar1 = param_1 + 6;
        do {
          while( true ) {
            uVar7 = (ulong)*puVar15;
            lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x160,0x10);
            lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_006c04a4;
            *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
            FUN_006c09f0(lVar4,(long)puVar15 + uVar7);
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
            puVar6 = (ulong *)FUN_006c0b50(lVar4);
            uVar13 = *puVar6;
            uVar12 = param_1[2];
            if (uVar12 != 0) break;
LAB_006c0288:
            plVar8 = (long *)(**(code **)(*(long *)param_1[7] + 0x10))((long *)param_1[7],0x50,8);
            if (plVar8 == (long *)0x0) {
              (**(code **)(*(long *)param_1[7] + 0xb8))();
            }
            uVar11 = param_1[7];
            lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_006c04a4:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar11;
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
            plVar8[2] = *puVar6;
            plVar8[3] = puVar6[1];
            plVar8[4] = puVar6[2];
            uVar10 = puVar6[3];
            plVar8[5] = uVar10;
            if (uVar10 != 0) {
              (**(code **)(*(long *)(uVar10 + 0x48) + 0x10))();
            }
            plVar8[8] = 0x160;
            plVar8[9] = 0x10;
            plVar8[6] = lVar4;
            plVar8[7] = (long)param_2;
            *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
            *plVar8 = 0;
            plVar8[1] = uVar13;
            if ((uVar12 == 0) ||
               (*(float *)(param_1 + 0xb) * (float)uVar12 < (float)(param_1[10] + 1))) {
              if (uVar12 < 3) {
                uVar7 = 1;
              }
              else {
                uVar7 = (ulong)((uVar12 - 1 & uVar12) != 0);
              }
              uVar10 = (ulong)((float)(param_1[10] + 1) / *(float *)(param_1 + 0xb));
              uVar7 = uVar7 | uVar12 << 1;
              if (uVar10 <= uVar7) {
                uVar10 = uVar7;
              }
              FUN_006c0620(plVar14,uVar10);
              uVar12 = param_1[2];
              if ((uVar12 - 1 & uVar12) == 0) {
                uVar7 = uVar12 - 1 & uVar13;
                plVar9 = *(long **)(*plVar14 + uVar7 * 8);
                goto joined_r0x006c03e4;
              }
              if (uVar13 < uVar12) {
                plVar9 = *(long **)(*plVar14 + uVar13 * 8);
                uVar7 = uVar13;
                goto joined_r0x006c03e4;
              }
              uVar7 = 0;
              if (uVar12 != 0) {
                uVar7 = uVar13 / uVar12;
              }
              uVar7 = uVar13 - uVar7 * uVar12;
              plVar9 = *(long **)(*plVar14 + uVar7 * 8);
              if (plVar9 != (long *)0x0) goto LAB_006c0378;
LAB_006c03fc:
              *plVar8 = *plVar1;
              *plVar1 = (long)plVar8;
              *(long **)(*plVar14 + uVar7 * 8) = plVar1;
              if (*plVar8 != 0) {
                uVar7 = *(ulong *)(*plVar8 + 8);
                if ((uVar12 - 1 & uVar12) == 0) {
                  uVar7 = uVar7 & uVar12 - 1;
                }
                else if (uVar12 <= uVar7) {
                  uVar13 = 0;
                  if (uVar12 != 0) {
                    uVar13 = uVar7 / uVar12;
                  }
                  uVar7 = uVar7 - uVar13 * uVar12;
                }
                plVar9 = (long *)(*plVar14 + uVar7 * 8);
                goto LAB_006c0464;
              }
            }
            else {
              plVar9 = *(long **)(*plVar14 + uVar7 * 8);
joined_r0x006c03e4:
              if (plVar9 == (long *)0x0) goto LAB_006c03fc;
LAB_006c0378:
              *plVar8 = *plVar9;
LAB_006c0464:
              *plVar9 = (long)plVar8;
            }
            param_1[10] = param_1[10] + 1;
            puVar15 = puVar15 + 1;
            if (puVar15 == puVar2) {
              return;
            }
          }
          uVar10 = uVar12 - 1;
          if ((uVar10 & uVar12) == 0) {
            uVar7 = uVar10 & uVar13;
            plVar8 = *(long **)(*plVar14 + uVar7 * 8);
          }
          else {
            uVar7 = uVar13;
            if (uVar12 <= uVar13) {
              uVar7 = 0;
              if (uVar12 != 0) {
                uVar7 = uVar13 / uVar12;
              }
              uVar7 = uVar13 - uVar7 * uVar12;
            }
            plVar8 = *(long **)(*plVar14 + uVar7 * 8);
          }
          if (plVar8 == (long *)0x0) goto LAB_006c0288;
          if ((uVar10 & uVar12) == 0) {
            do {
              plVar8 = (long *)*plVar8;
              if ((plVar8 == (long *)0x0) || (plVar8[1] != uVar13 && (plVar8[1] & uVar10) != uVar7))
              goto LAB_006c0288;
            } while (plVar8[2] != uVar13);
          }
          else {
            do {
              plVar8 = (long *)*plVar8;
              if (plVar8 == (long *)0x0) goto LAB_006c0288;
              uVar10 = plVar8[1];
              if (uVar10 != uVar13) {
                if (uVar12 <= uVar10) {
                  uVar3 = 0;
                  if (uVar12 != 0) {
                    uVar3 = uVar10 / uVar12;
                  }
                  uVar10 = uVar10 - uVar3 * uVar12;
                }
                if (uVar10 != uVar7) goto LAB_006c0288;
              }
            } while (plVar8[2] != uVar13);
          }
          if (lVar4 != 0) {
            FUN_006bfb40(lVar4);
            (**(code **)(*param_2 + 0x18))(param_2,lVar4,0x160,0x10);
          }
          puVar15 = puVar15 + 1;
        } while (puVar15 != puVar2);
      }
    }
  }
  return;
}


