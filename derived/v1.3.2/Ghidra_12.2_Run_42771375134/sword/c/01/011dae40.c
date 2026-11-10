/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011dae40; name: FUN_011dae40
 */


void FUN_011dae40(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long local_48;
  long local_38;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_011db3b0();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_011e1830();
  }
  if (*(int *)(param_1 + 0x68) == 2) {
    uVar9 = FUN_011e1820(*(undefined8 *)(param_1 + 0x30));
    if ((uVar9 & 1) != 0) {
LAB_011daec8:
      uVar6 = 0x10;
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar6 = 0xd;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar6;
      uVar6 = 3;
      goto LAB_011daee4;
    }
  }
  else if ((*(int *)(param_1 + 0x68) == 1) &&
          ((*(uint *)(param_1 + 0x5c) - 4 < 9 || (*(uint *)(param_1 + 0x5c) < 3)))) {
    *(undefined4 *)(param_1 + 0x5c) = 0xf;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_011daec8;
    FUN_011e1750();
    uVar6 = 2;
LAB_011daee4:
    *(undefined4 *)(param_1 + 0x68) = uVar6;
  }
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 1:
    cVar3 = *(char *)(param_1 + 0x58);
    lVar10 = *(long *)(param_1 + 0x48);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    uVar6 = FUN_008783b0(lVar10);
    uVar7 = FUN_008783c0(lVar10);
    uVar9 = FUN_009fc280(uVar6,uVar7);
    if (((uVar9 & 1) == 0) && (uVar9 = FUN_009fc310(uVar6), (uVar9 & 1) == 0)) {
      uVar8 = 0;
    }
    else {
      lVar13 = *(long *)(param_1 + 0x50);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      uVar6 = FUN_008783b0(lVar13);
      uVar7 = FUN_008783c0(lVar13);
      uVar9 = FUN_009fc280(uVar6,uVar7);
      if ((uVar9 & 1) == 0) {
        uVar8 = FUN_009fc310(uVar6);
        uVar8 = uVar8 ^ 1;
      }
      else {
        uVar8 = 0;
      }
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
      }
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    if ((uVar8 & 1) == 0) {
      lVar10 = *(long *)(param_1 + 0x48);
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      uVar6 = FUN_008783b0(lVar10);
      uVar7 = FUN_008783c0(lVar10);
      uVar9 = FUN_009fc280(uVar6,uVar7);
      if (((uVar9 & 1) == 0) && (uVar9 = FUN_009fc310(uVar6), (uVar9 & 1) == 0)) {
        lVar13 = *(long *)(param_1 + 0x50);
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
        }
        uVar6 = FUN_008783b0(lVar13);
        uVar7 = FUN_008783c0(lVar13);
        uVar9 = FUN_009fc280(uVar6,uVar7);
        if ((uVar9 & 1) == 0) {
          bVar5 = FUN_009fc310(uVar6);
        }
        else {
          bVar5 = 1;
        }
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        }
      }
      else {
        bVar5 = 0;
      }
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
      bVar5 = cVar3 != '\0' & (bVar5 ^ 1);
      if (*(byte *)(param_1 + 0x58) != bVar5) goto LAB_011db2d4;
    }
    else {
      bVar5 = 1;
      if (*(char *)(param_1 + 0x58) != '\x01') {
LAB_011db2d4:
        *(byte *)(param_1 + 0x58) = bVar5;
      }
    }
    FUN_011db810(param_1,0,1);
    uVar6 = 2;
    break;
  default:
    goto switchD_011daf08_caseD_2;
  case 3:
    uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x40))();
    if ((uVar9 & 1) != 0) goto switchD_011daf08_caseD_2;
    FUN_011db810(param_1,1,2);
    uVar6 = 4;
    break;
  case 5:
    if (*(char *)(param_1 + 0x59) != '\0') {
      FUN_011fafc0(*(undefined8 *)PTR_DAT_02710940);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    local_38 = *(long *)(param_1 + 0x48);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    local_48 = *(long *)(param_1 + 0x50);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_011e1670(uVar11,&local_38,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    uVar6 = 6;
    break;
  case 6:
    uVar9 = FUN_011e1720(*(undefined8 *)(param_1 + 0x30));
    if ((uVar9 & 1) == 0) goto switchD_011daf08_caseD_2;
    if (*(char *)(param_1 + 0x58) == '\0') {
      uVar6 = 8;
    }
    else {
      FUN_011db810(param_1,2,3);
      uVar6 = 7;
    }
    break;
  case 8:
    iVar2 = *(int *)(param_1 + 0x60);
    iVar4 = iVar2 + -1;
    *(int *)(param_1 + 0x60) = iVar4;
    if (iVar4 != 0 && 0 < iVar2) goto switchD_011daf08_caseD_2;
    FUN_011db810(param_1,2,3);
    uVar6 = 9;
    break;
  case 0xb:
    if (*(long *)(param_1 + 0x18) == 0) goto switchD_011daf08_caseD_2;
    lVar10 = *(long *)(param_1 + 0x18) + 0xd0;
    uVar9 = FUN_007d4b30(lVar10);
    if (((uVar9 & 1) == 0) || (uVar9 = FUN_007d4f10(lVar10), (uVar9 & 1) == 0))
    goto switchD_011daf08_caseD_2;
  case 10:
    FUN_011fafd0(*(undefined8 *)PTR_DAT_02710940);
    FUN_011e1730(*(undefined8 *)(param_1 + 0x30));
    uVar6 = 0xc;
    break;
  case 0xc:
    uVar9 = FUN_011e1740(*(undefined8 *)(param_1 + 0x30));
    if ((uVar9 & 1) != 0) {
      FUN_011db810(param_1,3,4);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      uVar9 = (**(code **)(**(long **)(param_1 + 0x30) + 0x58))();
      if ((uVar9 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x5a) = 1;
      }
    }
    goto switchD_011daf08_caseD_2;
  case 0xd:
    if (*(long *)(param_1 + 0x18) == 0) goto switchD_011daf08_caseD_2;
    FUN_011db940();
    uVar6 = 0xe;
    break;
  case 0xe:
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (uVar9 = FUN_007d4b30(*(long *)(param_1 + 0x18) + 0xd0), (uVar9 & 1) != 0))
    goto switchD_011daf08_caseD_2;
    if (*(int *)(param_1 + 100) == 0) {
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x68);
      for (puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x60); puVar12 != puVar1;
          puVar12 = puVar12 + 1) {
        (**(code **)(*(long *)*puVar12 + 8))();
      }
    }
    else if (*(char *)(param_1 + 0x5a) == '\0') {
      (**(code **)(**(long **)(param_1 + 0x30) + 0x38))();
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x68);
      for (puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x60); puVar12 != puVar1;
          puVar12 = puVar12 + 1) {
        (**(code **)(*(long *)*puVar12 + 8))();
      }
    }
    else {
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x68);
      for (puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x60); puVar12 != puVar1;
          puVar12 = puVar12 + 1) {
        (**(code **)(*(long *)*puVar12 + 8))();
      }
    }
    uVar6 = 0x10;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar6;
switchD_011daf08_caseD_2:
  uVar9 = FUN_011faab0(*(undefined8 *)PTR_DAT_02710940);
  if (((uVar9 & 1) != 0) && (*(int *)(param_1 + 0x68) == 0)) {
    *(undefined8 *)(param_1 + 100) = 0x100000002;
  }
  return;
}


