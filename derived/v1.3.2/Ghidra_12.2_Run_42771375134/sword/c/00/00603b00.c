/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00603b00; name: FUN_00603b00
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_00603b00(long *param_1,uint *param_2,long param_3,long *param_4,char param_5)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  code *pcVar11;
  short sVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 local_78;
  long local_70;
  undefined8 *local_68;
  
  local_70 = 0;
  if (param_2 == (uint *)0x0) {
    return 6;
  }
  if (-1 < param_3 && param_4 == (long *)0x0) {
    return 6;
  }
  if (((byte)*param_2 >> 1 & 1) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(long *)(param_2 + 8) != 0;
  }
  if (param_1 == (long *)0x0) {
    return 0x21;
  }
  local_68 = (undefined8 *)0x0;
  lVar18 = *param_1;
  puVar7 = (undefined8 *)(**(code **)(lVar18 + 8))(lVar18,0x50);
  if (puVar7 == (undefined8 *)0x0) {
    puVar19 = (undefined8 *)0x0;
    lVar18 = 0;
    puVar7 = local_68;
    uVar6 = 0x40;
joined_r0x00603c08:
    lVar8 = local_70;
    local_68 = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      lVar13 = puVar7[7];
      if ((code *)puVar7[6] != (code *)0x0) {
        (*(code *)puVar7[6])(puVar7);
      }
      lVar8 = local_70;
      if (bVar3 == false) {
        pcVar11 = *(code **)(lVar13 + 0x10);
LAB_00603c2c:
        (*pcVar11)(lVar13,puVar7);
        lVar8 = local_70;
      }
    }
joined_r0x00603c34:
    if (lVar8 == 0) goto LAB_00603f64;
    local_70 = lVar8;
  }
  else {
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[6] = 0;
    puVar7[7] = lVar18;
    uVar6 = *param_2;
    if ((uVar6 & 1) == 0) {
      if ((uVar6 >> 2 & 1) != 0) {
        uVar4 = FUN_0060acc0(puVar7,*(undefined8 *)(param_2 + 6));
        puVar7[4] = *(undefined8 *)(param_2 + 6);
        if (uVar4 != 0) goto LAB_00603dcc;
        goto LAB_00603c50;
      }
      if (((uVar6 >> 1 & 1) != 0) && (*(long *)(param_2 + 8) != 0)) {
        (**(code **)(lVar18 + 0x10))(lVar18,puVar7);
        puVar7 = *(undefined8 **)(param_2 + 8);
        goto LAB_00603c50;
      }
      uVar4 = 6;
LAB_00603dcc:
      (**(code **)(lVar18 + 0x10))(lVar18,puVar7);
      lVar18 = 0;
      local_68 = (undefined8 *)0x0;
      puVar19 = (undefined8 *)0x0;
      puVar7 = local_68;
joined_r0x00603df0:
      uVar2 = uVar4 & 0xff;
      if ((uVar2 != 2) && (uVar2 != 0x55)) {
        uVar6 = uVar4;
        if (uVar2 != 0x51) goto joined_r0x00603c08;
      }
      local_68 = puVar7;
      if (param_5 != '\0') {
LAB_00603ec0:
        uVar4 = FUN_00609580(param_1,puVar7,param_3,param_4);
        if ((uVar4 & 0xff) == 2) {
          uVar4 = FUN_006096e0(param_1,puVar7,0,param_3,param_4);
        }
        if ((((uVar4 & 0xff) == 0x55) || ((uVar4 & 0xff) == 2)) && (((byte)*param_2 >> 2 & 1) != 0))
        {
          uVar4 = FUN_00609fb0(param_1,puVar7,param_3,param_4,param_2);
        }
        if (uVar4 == 0) {
          if (puVar7 != (undefined8 *)0x0) {
            lVar18 = puVar7[7];
            if ((code *)puVar7[6] != (code *)0x0) {
              (*(code *)puVar7[6])(puVar7);
            }
joined_r0x006040e4:
            if (bVar3 == false) {
              (**(code **)(lVar18 + 0x10))(lVar18,puVar7);
              return 0;
            }
          }
          return 0;
        }
      }
      puVar7 = local_68;
      uVar6 = uVar4 & 0xff;
      if ((uVar4 & 0xff) != 2) {
        uVar6 = uVar4;
      }
      goto joined_r0x00603c08;
    }
    uVar10 = *(undefined8 *)(param_2 + 4);
    *puVar7 = *(undefined8 *)(param_2 + 2);
    puVar7[1] = uVar10;
    puVar7[2] = 0;
    puVar7[8] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
LAB_00603c50:
    puVar7[7] = lVar18;
    lVar18 = *param_1;
    local_68 = puVar7;
    if (((*param_2 >> 3 & 1) == 0) ||
       (puVar19 = *(undefined8 **)(param_2 + 10), puVar19 == (undefined8 *)0x0)) {
      if (*(uint *)((long)param_1 + 0x14) == 0) {
        puVar19 = (undefined8 *)0x0;
        uVar6 = 0xb;
        goto joined_r0x00603c08;
      }
      plVar9 = param_1 + 3;
      plVar1 = plVar9 + *(uint *)((long)param_1 + 0x14);
      if (param_5 == '\0') {
        puVar7 = (undefined8 *)0x0;
        uVar4 = 0xb;
        do {
          puVar19 = (undefined8 *)*plVar9;
          if ((*(byte *)*puVar19 & 1) != 0) {
            if (((byte)*param_2 >> 4 & 1) == 0) {
              uVar6 = 0;
              uVar10 = 0;
            }
            else {
              uVar6 = param_2[0xc];
              uVar10 = *(undefined8 *)(param_2 + 0xe);
            }
            uVar4 = FUN_00608a90(puVar19,&local_68,bVar3,param_3,uVar6,uVar10,&local_70);
            if (uVar4 == 0) goto LAB_00603ff8;
            puVar7 = puVar19;
            if ((uVar4 & 0xff) != 2) break;
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 < plVar1);
      }
      else {
        puVar7 = (undefined8 *)0x0;
        uVar4 = 0xb;
        do {
          puVar19 = (undefined8 *)*plVar9;
          if ((*(byte *)*puVar19 & 1) != 0) {
            if (((byte)*param_2 >> 4 & 1) == 0) {
              uVar6 = 0;
              uVar10 = 0;
            }
            else {
              uVar6 = param_2[0xc];
              uVar10 = *(undefined8 *)(param_2 + 0xe);
            }
            uVar4 = FUN_00608a90(puVar19,&local_68,bVar3,param_3,uVar6,uVar10,&local_70);
            if (uVar4 == 0) goto LAB_00603ff8;
            iVar5 = strcmp(*(char **)(*(long *)*plVar9 + 0x10),"truetype");
            puVar7 = local_68;
            uVar6 = uVar4 & 0xff;
            if ((uVar6 == 0x8e) && (iVar5 == 0)) {
              if (((code *)local_68[5] != (code *)0x0) &&
                 (lVar8 = (*(code *)local_68[5])(local_68,0,0,0), lVar8 != 0)) goto LAB_00603ec0;
              puVar7[2] = 0;
              uVar4 = FUN_00608df0(param_1,puVar7,param_3,param_4);
              if (uVar4 == 0) {
                lVar18 = puVar7[7];
                if ((code *)puVar7[6] != (code *)0x0) {
                  (*(code *)puVar7[6])(puVar7);
                }
                goto joined_r0x006040e4;
              }
              uVar6 = uVar4 & 0xff;
            }
            puVar7 = puVar19;
            if (uVar6 != 2) break;
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 < plVar1);
      }
      puVar19 = puVar7;
      puVar7 = local_68;
      goto joined_r0x00603df0;
    }
    if ((*(byte *)*puVar19 & 1) == 0) {
      uVar6 = 0x20;
joined_r0x00603fd0:
      lVar8 = local_70;
      local_68 = puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        lVar13 = puVar7[7];
        if ((code *)puVar7[6] != (code *)0x0) {
          (*(code *)puVar7[6])(puVar7);
        }
        lVar8 = local_70;
        if (bVar3 != false) goto joined_r0x00603c34;
        pcVar11 = *(code **)(lVar13 + 0x10);
        goto LAB_00603c2c;
      }
      goto joined_r0x00603c34;
    }
    if ((*param_2 >> 4 & 1) == 0) {
      uVar6 = 0;
      uVar10 = 0;
    }
    else {
      uVar6 = param_2[0xc];
      uVar10 = *(undefined8 *)(param_2 + 0xe);
    }
    uVar6 = FUN_00608a90(puVar19,&local_68,bVar3,param_3,uVar6,uVar10,&local_70);
    puVar7 = local_68;
    if (uVar6 != 0) goto joined_r0x00603fd0;
LAB_00603ff8:
    plVar9 = (long *)(**(code **)(lVar18 + 8))(lVar18,0x18);
    lVar8 = local_70;
    if (plVar9 == (long *)0x0) {
      uVar6 = 0x40;
      goto joined_r0x00603c34;
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9[2] = local_70;
    lVar18 = *(long *)(local_70 + 0xb0);
    lVar13 = *(long *)(lVar18 + 0x28);
    *plVar9 = lVar13;
    plVar9[1] = 0;
    puVar7 = (undefined8 *)(lVar18 + 0x20);
    if (lVar13 != 0) {
      puVar7 = (undefined8 *)(lVar13 + 8);
    }
    *puVar7 = plVar9;
    *(long **)(lVar18 + 0x28) = plVar9;
    if (param_3 < 0) {
LAB_00604118:
      uVar6 = (uint)*(ulong *)(lVar8 + 0x10);
      if ((*(ulong *)(lVar8 + 0x10) & 1) != 0) {
        sVar12 = *(short *)(lVar8 + 0x8e);
        if (sVar12 < 0) {
          sVar12 = -sVar12;
          *(short *)(lVar8 + 0x8e) = sVar12;
        }
        if ((uVar6 >> 5 & 1) == 0) {
          *(short *)(lVar8 + 0x92) = sVar12;
        }
      }
      if (((uVar6 >> 1 & 1) != 0) && (0 < *(int *)(lVar8 + 0x38))) {
        lVar13 = 0;
        lVar18 = 0;
        do {
          lVar14 = *(long *)(lVar8 + 0x40);
          sVar12 = *(short *)(lVar14 + lVar13);
          if (sVar12 < 0) {
            sVar12 = -sVar12;
            *(short *)(lVar14 + lVar13) = sVar12;
            uVar16 = *(ulong *)(lVar14 + lVar13 + 0x10);
            if (-1 < (long)uVar16) goto LAB_00604168;
LAB_00604198:
            uVar16 = -uVar16;
            *(ulong *)(lVar14 + lVar13 + 0x10) = uVar16;
            uVar17 = *(ulong *)(lVar14 + lVar13 + 0x18);
            if (-1 < (long)uVar17) goto LAB_00604170;
LAB_006041a8:
            *(ulong *)(lVar14 + lVar13 + 0x18) = -uVar17;
            if (-1 < (long)(uVar16 | -uVar17)) goto LAB_00604178;
LAB_006041b8:
            puVar15 = (undefined4 *)(lVar14 + lVar13);
            *puVar15 = 0;
            *(undefined8 *)(puVar15 + 4) = 0;
            *(undefined8 *)(puVar15 + 6) = 0;
            *(undefined8 *)(puVar15 + 2) = 0;
          }
          else {
            uVar16 = *(ulong *)(lVar14 + lVar13 + 0x10);
            if ((long)uVar16 < 0) goto LAB_00604198;
LAB_00604168:
            uVar17 = *(ulong *)(lVar14 + lVar13 + 0x18);
            if ((long)uVar17 < 0) goto LAB_006041a8;
LAB_00604170:
            if ((long)(uVar16 | uVar17) < 0) goto LAB_006041b8;
LAB_00604178:
            if (sVar12 < 0) goto LAB_006041b8;
          }
          lVar18 = lVar18 + 1;
          lVar13 = lVar13 + 0x20;
        } while (lVar18 < *(int *)(lVar8 + 0x38));
      }
      puVar7 = *(undefined8 **)(lVar8 + 0xf0);
      *puVar7 = 0x10000;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0x10000;
      puVar7[4] = 0;
      puVar7[5] = 0;
      *(undefined4 *)(puVar7 + 0xf) = 1;
      *(undefined1 *)(puVar7 + 0xe) = 0xff;
      if (param_4 != (long *)0x0) {
        *param_4 = lVar8;
        return 0;
      }
      if (*(long *)(lVar8 + 0xb0) == 0) {
        return 0;
      }
      *(int *)(*(long *)(lVar8 + 0xf0) + 0x78) = *(int *)(*(long *)(lVar8 + 0xf0) + 0x78) + -1;
      if (0 < *(int *)(*(long *)(lVar8 + 0xf0) + 0x78)) {
        return 0;
      }
      lVar18 = *(long *)(lVar8 + 0xb0);
      lVar13 = *(long *)(lVar18 + 0x10);
      plVar9 = *(long **)(lVar18 + 0x20);
      if (plVar9 == (long *)0x0) {
        return 0;
      }
      do {
        if (plVar9[2] == lVar8) {
          lVar14 = *plVar9;
          plVar9 = (long *)plVar9[1];
          puVar7 = (undefined8 *)(lVar18 + 0x20);
          if (lVar14 != 0) {
            puVar7 = (undefined8 *)(lVar14 + 8);
          }
          *puVar7 = plVar9;
          plVar1 = (long *)(lVar18 + 0x28);
          if (plVar9 != (long *)0x0) {
            plVar1 = plVar9;
          }
          *plVar1 = lVar14;
          (**(code **)(lVar13 + 0x10))(lVar13);
          FUN_006044b0(lVar13,lVar8,lVar18);
          return 0;
        }
        plVar9 = (long *)plVar9[1];
      } while (plVar9 != (long *)0x0);
      return 0;
    }
    uVar6 = FUN_00603500(local_70,0);
    if ((uVar6 == 0) && (uVar6 = FUN_006046f0(lVar8,&local_78), uVar6 == 0)) {
      *(undefined8 *)(lVar8 + 0xa0) = local_78;
      goto LAB_00604118;
    }
    if (lVar8 == 0) {
      return uVar6;
    }
    if (*(long *)(lVar8 + 0xb0) == 0) {
      return uVar6;
    }
    *(int *)(*(long *)(lVar8 + 0xf0) + 0x78) = *(int *)(*(long *)(lVar8 + 0xf0) + 0x78) + -1;
    if (0 < *(int *)(*(long *)(lVar8 + 0xf0) + 0x78)) {
      return uVar6;
    }
    puVar19 = *(undefined8 **)(lVar8 + 0xb0);
    lVar18 = puVar19[2];
    plVar9 = (long *)puVar19[4];
    while( true ) {
      if (plVar9 == (long *)0x0) {
        return uVar6;
      }
      if (plVar9[2] == lVar8) break;
      plVar9 = (long *)plVar9[1];
    }
    lVar13 = *plVar9;
    plVar9 = (long *)plVar9[1];
    puVar7 = puVar19 + 4;
    if (lVar13 != 0) {
      puVar7 = (undefined8 *)(lVar13 + 8);
    }
    *puVar7 = plVar9;
    plVar1 = puVar19 + 5;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9;
    }
    *plVar1 = lVar13;
    (**(code **)(lVar18 + 0x10))(lVar18);
  }
  FUN_006044b0(lVar18,lVar8,puVar19);
LAB_00603f64:
  return uVar6;
}


