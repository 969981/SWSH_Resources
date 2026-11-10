/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00696f40; name: FUN_00696f40
 */


void FUN_00696f40(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  uint *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong *puVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  uint *puVar13;
  ulong unaff_x26;
  undefined1 auStack_90 [32];
  long local_70;
  long *local_68 [3];
  
  *param_1 = param_2;
  param_1[2] = 0;
  plVar11 = param_1 + 1;
  *plVar11 = 0;
  puVar3 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar4 = FUN_0075ecb0();
  }
  param_1[3] = lVar4;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar4 = FUN_0075ecb0();
  }
  piVar6 = (int *)*param_1;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = lVar4;
  param_1[8] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  if (((piVar6 != (int *)0x0) && (6 < *(ushort *)((long)piVar6 - (long)*piVar6))) &&
     (uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar8 != 0)) {
    puVar2 = (uint *)((long)piVar6 + uVar8);
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    if (*puVar2 != 0) {
      FUN_00697400(plVar11,(long)(float)*puVar2);
      puVar13 = puVar2 + 1;
      if ((ulong)*puVar2 != 0) {
        puVar2 = puVar13 + *puVar2;
        plVar1 = param_1 + 6;
        do {
          FUN_00697910(auStack_90,(long)puVar13 + (ulong)*puVar13);
          puVar5 = (ulong *)FUN_006979d0(auStack_90);
          uVar12 = *puVar5;
          uVar8 = param_1[2];
          if (uVar8 == 0) {
LAB_0069710c:
            FUN_006977d0(local_68,plVar11,uVar12,puVar5,auStack_90);
            if ((uVar8 == 0) ||
               (*(float *)(param_1 + 0xb) * (float)uVar8 < (float)(param_1[10] + 1))) {
              if (uVar8 < 3) {
                uVar9 = 1;
              }
              else {
                uVar9 = (ulong)((uVar8 - 1 & uVar8) != 0);
              }
              uVar10 = (ulong)((float)(param_1[10] + 1) / *(float *)(param_1 + 0xb));
              uVar9 = uVar9 | uVar8 << 1;
              if (uVar10 <= uVar9) {
                uVar10 = uVar9;
              }
              FUN_00697400(plVar11,uVar10);
              uVar8 = param_1[2];
              if ((uVar8 - 1 & uVar8) == 0) {
                unaff_x26 = uVar8 - 1 & uVar12;
                plVar7 = *(long **)(*plVar11 + unaff_x26 * 8);
                goto joined_r0x006971c8;
              }
              if (uVar12 < uVar8) {
                plVar7 = *(long **)(*plVar11 + uVar12 * 8);
                unaff_x26 = uVar12;
                goto joined_r0x006971c8;
              }
              uVar9 = 0;
              if (uVar8 != 0) {
                uVar9 = uVar12 / uVar8;
              }
              unaff_x26 = uVar12 - uVar9 * uVar8;
              plVar7 = *(long **)(*plVar11 + unaff_x26 * 8);
              if (plVar7 == (long *)0x0) goto LAB_006971e0;
LAB_00697150:
              *local_68[0] = *plVar7;
              *plVar7 = (long)local_68[0];
            }
            else {
              plVar7 = *(long **)(*plVar11 + unaff_x26 * 8);
joined_r0x006971c8:
              if (plVar7 != (long *)0x0) goto LAB_00697150;
LAB_006971e0:
              *local_68[0] = *plVar1;
              *plVar1 = (long)local_68[0];
              *(long **)(*plVar11 + unaff_x26 * 8) = plVar1;
              if (*local_68[0] != 0) {
                uVar12 = *(ulong *)(*local_68[0] + 8);
                if ((uVar8 - 1 & uVar8) == 0) {
                  uVar12 = uVar12 & uVar8 - 1;
                }
                else if (uVar8 <= uVar12) {
                  uVar9 = 0;
                  if (uVar8 != 0) {
                    uVar9 = uVar12 / uVar8;
                  }
                  uVar12 = uVar12 - uVar9 * uVar8;
                }
                *(long **)(*plVar11 + uVar12 * 8) = local_68[0];
              }
            }
            param_1[10] = param_1[10] + 1;
          }
          else {
            uVar9 = uVar8 - 1;
            if ((uVar9 & uVar8) == 0) {
              unaff_x26 = uVar9 & uVar12;
              plVar7 = *(long **)(*plVar11 + unaff_x26 * 8);
              if (plVar7 != (long *)0x0) goto LAB_00697090;
              goto LAB_0069710c;
            }
            unaff_x26 = uVar12;
            if (uVar8 <= uVar12) {
              uVar10 = 0;
              if (uVar8 != 0) {
                uVar10 = uVar12 / uVar8;
              }
              unaff_x26 = uVar12 - uVar10 * uVar8;
            }
            plVar7 = *(long **)(*plVar11 + unaff_x26 * 8);
            if (plVar7 == (long *)0x0) goto LAB_0069710c;
LAB_00697090:
            if ((uVar9 & uVar8) == 0) {
              do {
                plVar7 = (long *)*plVar7;
                if ((plVar7 == (long *)0x0) ||
                   (plVar7[1] != uVar12 && (plVar7[1] & uVar9) != unaff_x26)) goto LAB_0069710c;
              } while (plVar7[2] != uVar12);
            }
            else {
              do {
                plVar7 = (long *)*plVar7;
                if (plVar7 == (long *)0x0) goto LAB_0069710c;
                uVar9 = plVar7[1];
                if (uVar9 != uVar12) {
                  if (uVar8 <= uVar9) {
                    uVar10 = 0;
                    if (uVar8 != 0) {
                      uVar10 = uVar9 / uVar8;
                    }
                    uVar9 = uVar9 - uVar10 * uVar8;
                  }
                  if (uVar9 != unaff_x26) goto LAB_0069710c;
                }
              } while (plVar7[2] != uVar12);
            }
          }
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          puVar13 = puVar13 + 1;
        } while (puVar13 != puVar2);
      }
    }
  }
  return;
}


