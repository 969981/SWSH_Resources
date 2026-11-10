/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc8500; name: FUN_00bc8500
 */


undefined8 FUN_00bc8500(long param_1,int param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  short *psVar16;
  
  if ((*(int *)(param_1 + 0x5cc) == 4) ||
     ((*(int *)(param_1 + 0x5cc) == 1 && (**(char **)(param_1 + 0x5d8) != '\0')))) {
    lVar11 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),param_2,param_3,param_4);
    if (lVar11 == 0) {
      return 0;
    }
    uVar12 = FUN_0087d610(lVar11,2);
    if ((uVar12 & 1) != 0) {
      return 0;
    }
    lVar14 = *(long *)(param_1 + 0x5d8);
    if (*(long *)(lVar14 + 8) != 0) {
      iVar7 = FUN_008783b0(lVar11);
      sVar6 = FUN_008783c0(lVar11);
      lVar14 = *(long *)(param_1 + 0x5d8);
      if (*(uint *)(lVar14 + 0x10) == 0) {
        return 0;
      }
      uVar12 = 0;
      psVar16 = (short *)(*(long *)(lVar14 + 8) + 4);
      while ((iVar7 != *(int *)(psVar16 + -2) || ((*psVar16 != -1 && (sVar6 != *psVar16))))) {
        uVar12 = uVar12 + 1;
        psVar16 = psVar16 + 4;
        if (*(uint *)(lVar14 + 0x10) <= uVar12) {
          return 0;
        }
      }
    }
    if (*(int *)(lVar14 + 0x14) != -1) {
      iVar7 = FUN_0087a5f0(lVar11);
      lVar14 = *(long *)(param_1 + 0x5d8);
      if (iVar7 != *(int *)(lVar14 + 0x14)) {
        return 0;
      }
    }
    if (*(int *)(lVar14 + 0x18) != -1) {
      uVar12 = FUN_0087eff0(lVar11);
      lVar14 = *(long *)(param_1 + 0x5d8);
      if ((uVar12 & 1) == 0) {
        if (*(int *)(lVar14 + 0x18) != 0) {
          return 0;
        }
      }
      else if (*(int *)(lVar14 + 0x18) != 1) {
        return 0;
      }
    }
    if (*(undefined4 **)(lVar14 + 0x20) == (undefined4 *)0x0) {
      return 1;
    }
    if (*(int *)(lVar14 + 0x28) == 0) {
      return 0;
    }
    uVar12 = FUN_0087c540(lVar11,**(undefined4 **)(lVar14 + 0x20));
    if ((uVar12 & 1) != 0) {
      return 1;
    }
    uVar12 = 1;
    do {
      if (*(uint *)(*(long *)(param_1 + 0x5d8) + 0x28) <= uVar12) {
        return 0;
      }
      uVar13 = FUN_0087c540(lVar11,*(undefined4 *)
                                    (*(long *)(*(long *)(param_1 + 0x5d8) + 0x20) + uVar12 * 4));
      uVar12 = uVar12 + 1;
    } while ((uVar13 & 1) == 0);
    return 1;
  }
  if (*(char *)(*(long *)(param_1 + 0x5d0) + 0x28) == '\0') {
    return 1;
  }
  uVar10 = (uint)*(ushort *)(*(long *)(param_1 + 0x5d0) + 0x22);
  if (uVar10 != 6) {
    if (param_2 == 0) {
      lVar11 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      }
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      uVar12 = FUN_0150a730(lVar14,param_3,param_4,
                            *(undefined2 *)(*(long *)(param_1 + 0x5d0) + 0x22));
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
      }
      if ((uVar12 & 1) == 0) {
        return 0;
      }
    }
    else if (param_2 == 1) {
      if (param_3 == 0) {
        return 0;
      }
      if (param_3 - 1U != uVar10) {
        return 0;
      }
    }
  }
  lVar11 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),param_2,param_3,param_4);
  if (lVar11 == 0) {
    return 0;
  }
  uVar12 = FUN_0087d610(lVar11,2);
  piVar15 = *(int **)(param_1 + 0x5d0);
  iVar7 = *piVar15;
  if (iVar7 != 0) {
    if ((uVar12 & 1) != 0) {
      return 0;
    }
    iVar8 = FUN_008783b0(lVar11);
    if (iVar7 != iVar8) {
      return 0;
    }
    piVar15 = *(int **)(param_1 + 0x5d0);
  }
  cVar5 = *(char *)((long)piVar15 + 5);
  cVar3 = (char)piVar15[1];
  if (cVar5 == '\x12') {
    if (cVar3 == '\x12') goto LAB_00bc87bc;
    cVar2 = '\x12';
    cVar5 = cVar3;
  }
  else {
    cVar2 = cVar3;
    if (cVar3 != '\x12') {
      cVar2 = cVar5;
      cVar5 = cVar3;
    }
  }
  if ((uVar12 & 1) != 0) {
    return 0;
  }
  cVar3 = FUN_0087eca0(lVar11);
  cVar4 = FUN_0087ed40(lVar11);
  if ((cVar5 != cVar3) && (cVar5 != cVar4)) {
    return 0;
  }
  if (((cVar2 != '\x12') && (cVar2 != cVar3)) && (cVar2 != cVar4)) {
    return 0;
  }
  piVar15 = *(int **)(param_1 + 0x5d0);
LAB_00bc87bc:
  if (piVar15[2] != 0) {
    if ((uVar12 & 1) != 0) {
      return 0;
    }
    cVar5 = FUN_0087b890(lVar11);
    if (cVar5 == '\0') {
      return 0;
    }
    uVar10 = 0;
    while (iVar7 = *(int *)(*(long *)(param_1 + 0x5d0) + 8), iVar8 = FUN_0087b880(lVar11,uVar10),
          iVar7 != iVar8) {
      uVar10 = uVar10 + 1;
      uVar9 = FUN_0087b890(lVar11);
      if ((uVar9 & 0xff) <= uVar10) {
        return 0;
      }
    }
    piVar15 = *(int **)(param_1 + 0x5d0);
  }
  if (piVar15[3] != 0) {
    if ((uVar12 & 1) != 0) {
      return 0;
    }
    uVar10 = piVar15[3] - 1;
    uVar9 = FUN_00888e60(0x46a);
    if (uVar10 < uVar9) {
      uVar13 = FUN_0087c450(lVar11,uVar10);
    }
    else {
      uVar13 = FUN_0087c4a0(lVar11,uVar10 - uVar9);
    }
    if ((uVar13 & 1) == 0) {
      return 0;
    }
  }
  lVar14 = *(long *)(param_1 + 0x5d0);
  iVar7 = *(int *)(lVar14 + 0x10);
  if (iVar7 != 0) {
    if ((uVar12 & 1) != 0) {
      return 0;
    }
    iVar8 = FUN_0087cdb0(lVar11);
    if (iVar7 != iVar8) {
      return 0;
    }
    lVar14 = *(long *)(param_1 + 0x5d0);
  }
  iVar7 = *(int *)(lVar14 + 0x14);
  if (iVar7 == 0x19) {
    iVar7 = *(int *)(lVar14 + 0x18);
  }
  else {
    if ((uVar12 & 1) != 0) {
      return 0;
    }
    iVar8 = FUN_0087cd00(lVar11);
    if (iVar7 != iVar8) {
      return 0;
    }
    lVar14 = *(long *)(param_1 + 0x5d0);
    iVar7 = *(int *)(lVar14 + 0x18);
  }
  if (iVar7 == 3) {
    iVar7 = *(int *)(lVar14 + 0x1c);
  }
  else {
    if ((uVar12 & 1) != 0) {
      return 0;
    }
    iVar8 = FUN_0087ccf0(lVar11);
    if (iVar7 != iVar8) {
      return 0;
    }
    lVar14 = *(long *)(param_1 + 0x5d0);
    iVar7 = *(int *)(lVar14 + 0x1c);
  }
  if (iVar7 != 0) {
    if ((uVar12 & 1) != 0) {
      return 0;
    }
    sVar6 = FUN_008787f0(lVar11);
    lVar14 = *(long *)(param_1 + 0x5d0);
    if ((sVar6 == 0 && *(int *)(lVar14 + 0x1c) == 1) == (sVar6 == 0 || *(int *)(lVar14 + 0x1c) != 2)
       ) {
      return 0;
    }
  }
  uVar1 = *(ushort *)(lVar14 + 0x20);
  if (uVar1 != 0) {
    if ((uVar1 & 3) != 0) {
      uVar10 = FUN_00878830(lVar11,0);
      if ((uVar1 & 3) != uVar10) {
        return 0;
      }
      lVar14 = *(long *)(param_1 + 0x5d0);
      uVar1 = *(ushort *)(lVar14 + 0x20);
    }
    if ((uVar1 >> 2 & 3) != 0) {
      uVar10 = FUN_00878830(lVar11,1);
      if ((uVar1 >> 2 & 3) != uVar10) {
        return 0;
      }
      lVar14 = *(long *)(param_1 + 0x5d0);
      uVar1 = *(ushort *)(lVar14 + 0x20);
    }
    if ((uVar1 >> 4 & 3) != 0) {
      uVar10 = FUN_00878830(lVar11,2);
      if ((uVar1 >> 4 & 3) != uVar10) {
        return 0;
      }
      lVar14 = *(long *)(param_1 + 0x5d0);
      uVar1 = *(ushort *)(lVar14 + 0x20);
    }
    if ((uVar1 >> 6 & 3) != 0) {
      uVar10 = FUN_00878830(lVar11,3);
      if ((uVar1 >> 6 & 3) != uVar10) {
        return 0;
      }
      lVar14 = *(long *)(param_1 + 0x5d0);
      uVar1 = *(ushort *)(lVar14 + 0x20);
    }
    if ((uVar1 >> 8 & 3) != 0) {
      uVar10 = FUN_00878830(lVar11,4);
      if ((uVar1 >> 8 & 3) != uVar10) {
        return 0;
      }
      lVar14 = *(long *)(param_1 + 0x5d0);
      uVar1 = *(ushort *)(lVar14 + 0x20);
    }
    if ((uVar1 >> 10 & 3) != 0) {
      uVar10 = FUN_00878830(lVar11,5);
      if ((uVar1 >> 10 & 3) != uVar10) {
        return 0;
      }
      lVar14 = *(long *)(param_1 + 0x5d0);
    }
  }
  uVar10 = *(uint *)(lVar14 + 0x24);
  if ((uVar10 < 0x1c) &&
     (((uVar12 & 1) != 0 || (uVar9 = FUN_008783c0(lVar11), uVar10 != (uVar9 & 0xffff))))) {
    return 0;
  }
  return 1;
}


