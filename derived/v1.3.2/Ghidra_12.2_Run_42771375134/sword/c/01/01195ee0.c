/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01195ee0; name: FUN_01195ee0
 */


void FUN_01195ee0(long param_1)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte unaff_w21;
  long lVar13;
  int *piVar14;
  long local_90 [10];
  
  puVar3 = PTR_DAT_02710940;
  uVar12 = *(ulong *)PTR_DAT_02710940;
  if (*(char *)(param_1 + 0x80) != '\0') {
    iVar5 = *(int *)(param_1 + 0x7c);
    if ((iVar5 != 0xf) && (iVar5 != 0x11)) {
      uVar7 = FUN_011faab0(uVar12);
      if (((uVar7 & 1) == 0) &&
         (((uVar7 = FUN_012092f0(*(undefined8 *)PTR_DAT_02710880), (uVar7 & 1) != 0 &&
           (*(long *)PTR_DAT_02716748 != 0)) && (uVar7 = FUN_007ad170(), (uVar7 & 1) == 0)))) {
        FUN_011f8ec0(*(undefined8 *)PTR_DAT_02710490);
      }
      if (*(char *)(param_1 + 0x80) == '\0') goto LAB_01195fb4;
      iVar5 = *(int *)(param_1 + 0x7c);
    }
    if (((iVar5 != 0xf) && (iVar5 != 0x11)) &&
       ((uVar7 = FUN_011faab0(uVar12), (uVar7 & 1) != 0 &&
        ((*(char *)(uVar12 + 0x16b) == '\0' && (2 < *(int *)(param_1 + 0x7c) - 0xfU)))))) {
      *(undefined4 *)(param_1 + 0x7c) = 0xf;
    }
  }
LAB_01195fb4:
  uVar7 = FUN_011faab0(uVar12);
  piVar14 = (int *)(param_1 + 0x7c);
  if ((2 < *piVar14 - 0xfU) && ((uVar7 & 1) != 0)) {
    return;
  }
  switch(*piVar14) {
  case 0:
    if (*(int *)(param_1 + 0x70) == 0) {
      if (*(char *)(param_1 + 0x81) == '\0') {
        return;
      }
LAB_011965d0:
      if ((*(long *)PTR_DAT_02710880 != 0) &&
         (lVar10 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58), lVar10 != 0)) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
        if ((*(int *)(lVar10 + 0x54) == 0) || (lVar8 = FUN_00fe2800(local_90 + 0xd), lVar8 == 0)) {
          bVar2 = 0;
        }
        else if (((*(long *)(lVar8 + 0x60) == 0) && (*(long *)(lVar8 + 0x68) == 0)) &&
                (*(long *)(lVar8 + 0x70) == 0)) {
          unaff_w21 = *(long *)(lVar8 + 0x78) == 0;
          bVar2 = 1;
        }
        else {
          unaff_w21 = 0;
          bVar2 = 1;
        }
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
        }
        if ((bVar2 & (unaff_w21 ^ 0xff)) != 0) {
          return;
        }
      }
      cVar4 = FUN_007a9cb0();
      if ((cVar4 == '\0') &&
         (uVar12 = FUN_011f69d0(*(undefined8 *)PTR_DAT_0271cba8), (uVar12 & 1) != 0)) {
        if (*(int *)(param_1 + 0x7c) != 1) {
          *(undefined4 *)(param_1 + 0x7c) = 1;
          return;
        }
      }
      else if (*(int *)(param_1 + 0x7c) != 0) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      return;
    }
    iVar5 = 5;
    break;
  case 1:
    FUN_011f6970(*(undefined8 *)PTR_DAT_0271cba8,0);
    if (*piVar14 == 2) {
      return;
    }
    iVar5 = 2;
    break;
  case 2:
    if ((*(long *)PTR_DAT_02710880 != 0) &&
       (lVar10 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58), lVar10 != 0)) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      local_90[0] = lVar10;
      if ((*(int *)(lVar10 + 0x54) == 0) || (lVar10 = FUN_00fe2800(local_90), lVar10 == 0)) {
        bVar1 = false;
      }
      else if (((*(long *)(lVar10 + 0x60) == 0) && (*(long *)(lVar10 + 0x68) == 0)) &&
              (*(long *)(lVar10 + 0x70) == 0)) {
        uVar12 = (ulong)(*(long *)(lVar10 + 0x78) == 0);
        bVar1 = true;
      }
      else {
        uVar12 = 0;
        bVar1 = true;
      }
      if (local_90[0] != 0) {
        (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
        local_90[0] = 0;
      }
      if (((uVar12 & 1) == 0 && bVar1) && (*piVar14 != 0)) {
        *piVar14 = 0;
      }
    }
    uVar11 = *(undefined8 *)PTR_DAT_0271cba8;
    uVar12 = FUN_011f69b0(uVar11);
    if (((uVar12 & 1) == 0) && (uVar12 = FUN_011f69d0(uVar11), (uVar12 & 1) == 0)) {
      return;
    }
    goto LAB_011964f4;
  case 3:
    FUN_011f6990(*(undefined8 *)PTR_DAT_0271cba8,0);
    if (*piVar14 == 4) {
      return;
    }
    iVar5 = 4;
    break;
  case 4:
    if ((*(long *)PTR_DAT_02710880 != 0) &&
       (lVar10 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58), lVar10 != 0)) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      local_90[0] = lVar10;
      if ((*(int *)(lVar10 + 0x54) == 0) || (lVar10 = FUN_00fe2800(local_90), lVar10 == 0)) {
        bVar1 = false;
      }
      else if (((*(long *)(lVar10 + 0x60) == 0) && (*(long *)(lVar10 + 0x68) == 0)) &&
              (*(long *)(lVar10 + 0x70) == 0)) {
        uVar12 = (ulong)(*(long *)(lVar10 + 0x78) == 0);
        bVar1 = true;
      }
      else {
        uVar12 = 0;
        bVar1 = true;
      }
      if (local_90[0] != 0) {
        (**(code **)(*(long *)(local_90[0] + 0x48) + 0x18))();
        local_90[0] = 0;
      }
      if (((uVar12 & 1) == 0 && bVar1) && (*piVar14 != 0)) {
        *piVar14 = 0;
      }
    }
    uVar12 = FUN_011f69d0(*(undefined8 *)PTR_DAT_0271cba8);
    if ((uVar12 & 1) == 0) {
      return;
    }
    if (*piVar14 == 6) {
      return;
    }
    iVar5 = 6;
    break;
  case 5:
    iVar5 = *(int *)(param_1 + 0x70);
    if ((iVar5 == 4) || (iVar5 == 2)) {
      lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x220);
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar13 = *(long *)(lVar8 + 0x58);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      iVar5 = FUN_01507570(lVar10,*(undefined8 *)(param_1 + 8),0);
      iVar6 = FUN_00884840(lVar13,2);
      if ((uint)(iVar6 + iVar5) < 2) {
        *(undefined4 *)(param_1 + 0x70) = 0;
        if (*(int *)(param_1 + 0x7c) != 0) {
          *piVar14 = 0;
        }
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        }
        if (lVar10 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0119642c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
        return;
      }
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
      }
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
    }
    else if (iVar5 == 0) goto LAB_011964fc;
    if (*(char *)(param_1 + 0x81) == '\0') {
      return;
    }
    if (*piVar14 == 3) {
      return;
    }
    iVar5 = 3;
    break;
  case 6:
    if ((*(int *)(param_1 + 0x70) == 0) || (*(char *)(param_1 + 0x82) != '\0')) goto LAB_011965d0;
    uVar12 = FUN_01196700(param_1);
    if ((uVar12 & 1) == 0) {
      return;
    }
    FUN_01197090(param_1,*(undefined4 *)(&DAT_02166c40 + (long)*(int *)(param_1 + 0x70) * 4),
                 *(undefined1 *)(param_1 + 0x74));
    if (*(int *)(param_1 + 0x7c) == 7) {
      return;
    }
    iVar5 = 7;
    break;
  case 7:
    if ((*(int *)(param_1 + 0x70) != 0) && (*(char *)(param_1 + 0x82) == '\0')) {
      return;
    }
    goto LAB_01196328;
  case 8:
    if ((*(int *)(param_1 + 0x70) != 0) && (*(char *)(param_1 + 0x82) == '\0')) {
      uVar12 = FUN_01196870(param_1);
      if (((uVar12 & 1) != 0) && (*piVar14 != 0xd)) {
        *piVar14 = 0xd;
      }
      uVar9 = *(undefined4 *)(param_1 + 0x70);
      switch(uVar9) {
      case 1:
        goto switchD_01195ff0_caseD_d;
      case 2:
        uVar9 = 0;
        break;
      case 3:
      case 4:
      case 5:
        break;
      case 6:
        uVar9 = 0x1e;
        break;
      default:
        uVar9 = 0xff;
      }
      FUN_01197090(param_1,uVar9,0);
      return;
    }
    goto LAB_01196328;
  case 9:
    if (*(int *)(param_1 + 0x70) != 0) {
      return;
    }
LAB_01196328:
    iVar5 = 0xb;
    break;
  case 10:
    if ((*(long *)(param_1 + 0x88) != 0) && (*(int *)(*(long *)(param_1 + 0x88) + 0x54) != 0)) {
      return;
    }
    FUN_011faf40(*(undefined8 *)puVar3);
    uVar12 = FUN_011faab0(*(undefined8 *)puVar3);
    iVar5 = *piVar14;
    if ((uVar12 & 1) == 0) {
LAB_01196320:
      if (iVar5 == 0xb) {
        return;
      }
      goto LAB_01196328;
    }
    if (iVar5 == 0xf) {
      return;
    }
    iVar5 = 0xf;
    break;
  case 0xb:
    uVar12 = FUN_011fca80(*(undefined8 *)PTR_DAT_02718f20);
    if ((uVar12 & 1) == 0) {
      return;
    }
    lVar10 = *(long *)PTR_DAT_027108d8;
    if (lVar10 != 0) {
      FUN_0121b630(local_90,0xff);
      FUN_0121bc50(local_90,0);
      FUN_010a1250(lVar10,local_90);
    }
    if (*piVar14 == 0xc) {
      return;
    }
    iVar5 = 0xc;
    break;
  case 0xc:
    uVar12 = FUN_011fcf90(*(undefined8 *)PTR_DAT_02718f20);
    if ((uVar12 & 1) != 0) {
      return;
    }
LAB_011964f4:
    if (*piVar14 == 0) {
      return;
    }
LAB_011964fc:
    *piVar14 = 0;
    return;
  default:
    goto switchD_01195ff0_caseD_d;
  case 0xe:
    uVar12 = FUN_01196a30();
    iVar5 = *piVar14;
    if ((uVar12 & 1) == 0) goto LAB_01196320;
    if (iVar5 == 8) {
      return;
    }
    iVar5 = 8;
    break;
  case 0xf:
    iVar5 = 0x10;
    break;
  case 0x10:
    uVar12 = FUN_01196b30(param_1);
    if ((uVar12 & 1) == 0) {
      return;
    }
    if (*piVar14 == 0x11) {
      return;
    }
    iVar5 = 0x11;
  }
  *piVar14 = iVar5;
switchD_01195ff0_caseD_d:
  return;
}


