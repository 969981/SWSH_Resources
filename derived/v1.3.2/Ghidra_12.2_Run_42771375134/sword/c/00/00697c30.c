/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00697c30; name: FUN_00697c30
 */


void FUN_00697c30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  uint *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong *puVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  uint *puVar15;
  ulong unaff_x27;
  undefined1 auStack_1b0 [336];
  
  *param_1 = param_2;
  param_1[2] = 0;
  plVar13 = param_1 + 1;
  *plVar13 = 0;
  puVar4 = PTR_DAT_02710860;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar5 = FUN_0075ecb0();
  }
  param_1[3] = lVar5;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
     (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) {
    lVar5 = FUN_0075ecb0();
  }
  piVar7 = (int *)*param_1;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = lVar5;
  param_1[8] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  if (((piVar7 != (int *)0x0) && (6 < *(ushort *)((long)piVar7 - (long)*piVar7))) &&
     (uVar10 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar10 != 0)) {
    puVar3 = (uint *)((long)piVar7 + uVar10);
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    if (*puVar3 != 0) {
      FUN_006980d0(plVar13,(long)(float)*puVar3);
      puVar15 = puVar3 + 1;
      if ((ulong)*puVar3 != 0) {
        puVar3 = puVar15 + *puVar3;
        puVar1 = param_1 + 7;
        plVar2 = param_1 + 6;
        do {
          FUN_00697a20(auStack_1b0,(long)puVar15 + (ulong)*puVar15);
          puVar6 = (ulong *)FUN_00697bf0(auStack_1b0);
          uVar14 = *puVar6;
          uVar10 = param_1[2];
          if (uVar10 == 0) {
LAB_00697e08:
            plVar8 = (long *)(**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,0x178,8);
            if (plVar8 == (long *)0x0) {
              (**(code **)(*(long *)*puVar1 + 0xb8))();
            }
            FUN_006984a0(puVar1,plVar8 + 2,puVar6,auStack_1b0);
            *plVar8 = 0;
            plVar8[1] = uVar14;
            if ((uVar10 == 0) ||
               (*(float *)(param_1 + 0xb) * (float)uVar10 < (float)(param_1[10] + 1))) {
              if (uVar10 < 3) {
                uVar11 = 1;
              }
              else {
                uVar11 = (ulong)((uVar10 - 1 & uVar10) != 0);
              }
              uVar12 = (ulong)((float)(param_1[10] + 1) / *(float *)(param_1 + 0xb));
              uVar11 = uVar11 | uVar10 << 1;
              if (uVar12 <= uVar11) {
                uVar12 = uVar11;
              }
              FUN_006980d0(plVar13,uVar12);
              uVar10 = param_1[2];
              if ((uVar10 - 1 & uVar10) == 0) {
                unaff_x27 = uVar10 - 1 & uVar14;
                plVar9 = *(long **)(*plVar13 + unaff_x27 * 8);
                goto joined_r0x00697eec;
              }
              if (uVar14 < uVar10) {
                plVar9 = *(long **)(*plVar13 + uVar14 * 8);
                unaff_x27 = uVar14;
                goto joined_r0x00697eec;
              }
              uVar11 = 0;
              if (uVar10 != 0) {
                uVar11 = uVar14 / uVar10;
              }
              unaff_x27 = uVar14 - uVar11 * uVar10;
              plVar9 = *(long **)(*plVar13 + unaff_x27 * 8);
              if (plVar9 == (long *)0x0) goto LAB_00697f04;
LAB_00697e80:
              *plVar8 = *plVar9;
LAB_00697f6c:
              *plVar9 = (long)plVar8;
            }
            else {
              plVar9 = *(long **)(*plVar13 + unaff_x27 * 8);
joined_r0x00697eec:
              if (plVar9 != (long *)0x0) goto LAB_00697e80;
LAB_00697f04:
              *plVar8 = *plVar2;
              *plVar2 = (long)plVar8;
              *(long **)(*plVar13 + unaff_x27 * 8) = plVar2;
              if (*plVar8 != 0) {
                uVar14 = *(ulong *)(*plVar8 + 8);
                if ((uVar10 - 1 & uVar10) == 0) {
                  uVar14 = uVar14 & uVar10 - 1;
                }
                else if (uVar10 <= uVar14) {
                  uVar11 = 0;
                  if (uVar10 != 0) {
                    uVar11 = uVar14 / uVar10;
                  }
                  uVar14 = uVar14 - uVar11 * uVar10;
                }
                plVar9 = (long *)(*plVar13 + uVar14 * 8);
                goto LAB_00697f6c;
              }
            }
            param_1[10] = param_1[10] + 1;
          }
          else {
            uVar11 = uVar10 - 1;
            if ((uVar11 & uVar10) == 0) {
              unaff_x27 = uVar11 & uVar14;
              plVar8 = *(long **)(*plVar13 + unaff_x27 * 8);
              if (plVar8 != (long *)0x0) goto LAB_00697d8c;
              goto LAB_00697e08;
            }
            unaff_x27 = uVar14;
            if (uVar10 <= uVar14) {
              uVar12 = 0;
              if (uVar10 != 0) {
                uVar12 = uVar14 / uVar10;
              }
              unaff_x27 = uVar14 - uVar12 * uVar10;
            }
            plVar8 = *(long **)(*plVar13 + unaff_x27 * 8);
            if (plVar8 == (long *)0x0) goto LAB_00697e08;
LAB_00697d8c:
            if ((uVar11 & uVar10) == 0) {
              do {
                plVar8 = (long *)*plVar8;
                if ((plVar8 == (long *)0x0) ||
                   (plVar8[1] != uVar14 && (plVar8[1] & uVar11) != unaff_x27)) goto LAB_00697e08;
              } while (plVar8[2] != uVar14);
            }
            else {
              do {
                plVar8 = (long *)*plVar8;
                if (plVar8 == (long *)0x0) goto LAB_00697e08;
                uVar11 = plVar8[1];
                if (uVar11 != uVar14) {
                  if (uVar10 <= uVar11) {
                    uVar12 = 0;
                    if (uVar10 != 0) {
                      uVar12 = uVar11 / uVar10;
                    }
                    uVar11 = uVar11 - uVar12 * uVar10;
                  }
                  if (uVar11 != unaff_x27) goto LAB_00697e08;
                }
              } while (plVar8[2] != uVar14);
            }
          }
          FUN_006dff30(auStack_1b0);
          puVar15 = puVar15 + 1;
        } while (puVar15 != puVar3);
      }
    }
  }
  return;
}


