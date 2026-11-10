/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105aae0; name: FUN_0105aae0
 */


void FUN_0105aae0(long param_1,ulong *param_2,long *param_3,undefined4 *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  bool bVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  long *plVar18;
  ulong *puVar19;
  undefined8 local_80;
  long *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  plVar6 = *(long **)(param_1 + 0x40);
  if (plVar6 == (long *)0x0) {
    plVar6 = *(long **)(param_1 + 8);
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x58,8);
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_0105aed8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar6;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    uVar9 = *(undefined8 *)(param_1 + 8);
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 4) = 0;
    puVar7[2] = uVar9;
    puVar7[3] = 0;
    puVar7[7] = 0;
    puVar7[5] = 0;
    puVar7[6] = uVar9;
    *(undefined4 *)(puVar7 + 10) = 0x3f800000;
    *(undefined4 *)(puVar7 + 8) = 0;
    puVar7[9] = 0;
    uStack_70 = 0x58;
    local_68 = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    local_80 = 0;
    lVar10 = *(long *)(param_1 + 0x40);
    *(undefined8 **)(param_1 + 0x40) = puVar7;
    local_78 = plVar6;
    if (lVar10 != 0) {
      FUN_0105e6f0((undefined8 *)(param_1 + 0x48));
    }
    *(undefined8 *)(param_1 + 0x50) = uStack_70;
    *(undefined8 *)(param_1 + 0x58) = local_68;
    *(undefined8 *)(param_1 + 0x48) = local_78;
    plVar6 = *(long **)(param_1 + 0x40);
    uVar14 = plVar6[1];
  }
  else {
    uVar14 = plVar6[1];
  }
  if (uVar14 != 0) {
    uVar8 = *param_2;
    uVar17 = uVar14 - 1;
    if ((uVar17 & uVar14) == 0) {
      uVar13 = uVar17 & uVar8;
      plVar18 = *(long **)(*plVar6 + uVar13 * 8);
    }
    else {
      uVar13 = uVar8;
      if (uVar14 <= uVar8) {
        uVar13 = 0;
        if (uVar14 != 0) {
          uVar13 = uVar8 / uVar14;
        }
        uVar13 = uVar8 - uVar13 * uVar14;
      }
      plVar18 = *(long **)(*plVar6 + uVar13 * 8);
    }
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if ((uVar17 & uVar14) == 0) {
        do {
          uVar14 = plVar18[1];
          if (uVar14 != uVar8 && (uVar14 & uVar17) != uVar13) break;
          if ((uVar14 == uVar8) && (plVar18[2] == uVar8)) goto LAB_0105ae54;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar18[1];
          if (uVar17 == uVar8) {
            if (plVar18[2] == uVar8) goto LAB_0105ae54;
          }
          else {
            if (uVar14 <= uVar17) {
              uVar4 = 0;
              if (uVar14 != 0) {
                uVar4 = uVar17 / uVar14;
              }
              uVar17 = uVar17 - uVar4 * uVar14;
            }
            if (uVar17 != uVar13) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  plVar18 = (long *)FUN_0105d400(plVar6,param_2);
  puVar5 = PTR_DAT_02710860;
  lVar10 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar10 + 0x328) == *(long *)(lVar10 + 800)) {
    return;
  }
  uVar14 = 0;
  bVar12 = false;
  do {
    lVar15 = *(long *)(*(long *)(lVar10 + 0x218) + 0x290) + uVar14 * 0x4c0;
    puVar1 = *(ulong **)(lVar15 + 0xa8);
    puVar2 = *(ulong **)(lVar15 + 0xb0);
    if (puVar2 != puVar1) {
      puVar19 = puVar1;
      if (*puVar1 != *param_2) {
        do {
          puVar19 = puVar19 + 4;
          if (puVar2 == puVar19) goto LAB_0105adc4;
        } while (*puVar19 != *param_2);
      }
      iVar16 = (int)((ulong)((long)puVar19 - (long)puVar1) >> 5);
      if (puVar19 == puVar2) {
        iVar16 = -1;
      }
      if (-1 < iVar16) {
        local_80 = CONCAT44(iVar16,(int)uVar14);
        puVar7 = (undefined8 *)plVar18[1];
        if (puVar7 < (undefined8 *)plVar18[2]) {
          lVar15 = plVar18[3];
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0105aed8;
          *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar15;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          *puVar7 = local_80;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          plVar18[1] = plVar18[1] + 8;
        }
        else {
          FUN_01060180(plVar18,&local_80);
        }
        lVar10 = *(long *)(param_1 + 0x10);
        bVar12 = true;
      }
    }
LAB_0105adc4:
    uVar14 = uVar14 + 1;
  } while (uVar14 < (ulong)((*(long *)(lVar10 + 0x328) - *(long *)(lVar10 + 800) >> 3) *
                           -0x70a3d70a3d70a3d7));
  if (!bVar12) {
    return;
  }
  if (param_3 != (long *)0x0) {
    pcVar11 = (code *)plVar18[7];
    if (pcVar11 != (code *)0x0) {
      plVar18[8] = 0;
      plVar18[9] = 0;
      plVar18[6] = 0;
      plVar18[7] = 0;
      (*pcVar11)(plVar18 + 10);
    }
    if ((code *)param_3[2] != (code *)0x0) {
      (*(code *)param_3[2])(param_3 + 4,plVar18 + 10);
      lVar10 = *param_3;
      lVar15 = param_3[1];
      lVar3 = param_3[3];
      plVar18[8] = param_3[2];
      plVar18[9] = lVar3;
      plVar18[6] = lVar10;
      plVar18[7] = lVar15;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *(undefined4 *)(plVar18 + 0x16) = *param_4;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    return;
  }
LAB_0105ae4c:
  FUN_0105d260(param_1,plVar18);
  return;
LAB_0105ae54:
  if (param_3 != (long *)0x0) {
    pcVar11 = (code *)plVar18[0xd];
    if (pcVar11 != (code *)0x0) {
      plVar18[0xe] = 0;
      plVar18[0xf] = 0;
      plVar18[0xc] = 0;
      plVar18[0xd] = 0;
      (*pcVar11)(plVar18 + 0x10);
    }
    if ((code *)param_3[2] != (code *)0x0) {
      (*(code *)param_3[2])(param_3 + 4,plVar18 + 0x10);
      lVar10 = *param_3;
      lVar15 = param_3[1];
      lVar3 = param_3[3];
      plVar18[0xe] = param_3[2];
      plVar18[0xf] = lVar3;
      plVar18[0xc] = lVar10;
      plVar18[0xd] = lVar15;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *(undefined4 *)(plVar18 + 0x1c) = *param_4;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    return;
  }
  plVar18 = plVar18 + 6;
  goto LAB_0105ae4c;
}


