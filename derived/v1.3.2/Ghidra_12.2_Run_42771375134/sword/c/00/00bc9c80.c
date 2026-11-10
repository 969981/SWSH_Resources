/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc9c80; name: FUN_00bc9c80
 */


undefined8 FUN_00bc9c80(long param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined4 local_74;
  undefined8 local_70;
  ulong local_68;
  
  piVar8 = (int *)FUN_00bd0180(*(undefined8 *)(param_1 + 0x5f8));
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  local_70 = FUN_016b8190();
  uVar4 = (uint)((ulong)local_70 >> 0x20);
  uVar6 = uVar4 - 2;
  if (uVar4 < 2) {
LAB_00bc9df0:
    uVar4 = 0xffffffff;
    iVar13 = 2;
    uVar9 = 0xffffffff;
    iVar12 = *param_2;
  }
  else {
    iVar12 = (int)local_70;
    if (iVar12 == 0) {
      if (5 < (int)uVar6) goto LAB_00bc9df0;
      uVar4 = *(uint *)(param_1 + 0x614);
      iVar13 = 1;
      uVar9 = FUN_00bcfb20(1,0,uVar6);
      uVar9 = uVar9 & 0xffffffff;
      iVar12 = *param_2;
    }
    else {
      if (4 < uVar6) goto LAB_00bc9df0;
      lVar16 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
      }
      lVar15 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar15 == 0) {
        uVar4 = FUN_0150b350(0);
      }
      else {
        plVar17 = (long *)(lVar15 + 0x48);
        (**(code **)(*plVar17 + 0x10))(plVar17);
        uVar4 = FUN_0150b350(lVar15);
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
      }
      uVar9 = FUN_00bcfb20(0,iVar12 + -1,uVar6);
      uVar9 = uVar9 & 0xffffffff;
      iVar13 = 0;
      iVar12 = *param_2;
    }
  }
  if (iVar12 == 2) {
    uVar9 = FUN_00bd01f0(*(undefined8 *)(param_1 + 0x5f8));
    if ((uVar9 & 1) == 0) {
      FUN_00bcfef0(*(undefined8 *)(param_1 + 0x5f8),0,1,0);
      *param_2 = 1;
      return 0;
    }
    return 0;
  }
  if (iVar12 != 1) {
    if (iVar12 != 0) {
      return 0;
    }
    local_68 = 0xcb4c8ebbb4b8e8b8;
    if ((*(long *)(param_1 + 0x2b0) != 0) &&
       (uVar10 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_68), (uVar10 & 1) == 0)) {
      return 0;
    }
    uVar11 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),iVar13,uVar4,uVar9);
    uVar5 = 0;
    if (iVar13 != 0) {
      uVar5 = 3;
    }
    lVar16 = FUN_00bd1790(*(undefined8 *)(param_1 + 0x5f0),uVar5);
    uVar18 = *(undefined8 *)(param_1 + 0x5f8);
    uVar5 = FUN_008787f0(uVar11);
    FUN_00bcfef0(uVar18,uVar5,0,*(undefined1 *)(lVar16 + uVar9));
    uVar11 = *(undefined8 *)(param_1 + 0x5f0);
    uVar10 = FUN_00bc8500(param_1,iVar13,uVar4,uVar9);
    uVar5 = 0;
    if ((uVar10 & 1) == 0) {
      uVar5 = 2;
    }
    if (iVar13 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = 3;
    }
    FUN_00bd3390(uVar11,uVar18,uVar9,uVar5,0);
    if ((*(short *)((long)piVar8 + 6) != 0) &&
       (((*piVar8 != iVar13 || (uVar4 != *(byte *)(piVar8 + 1))) ||
        ((uint)uVar9 != (uint)*(byte *)((long)piVar8 + 5))))) {
      lVar16 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
      }
      lVar15 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
      }
      local_68 = local_68 & 0xffffffff00000000;
      local_74 = 0;
      iVar12 = *piVar8;
      if (iVar12 == 0) {
        uVar4 = FUN_0150b350(lVar15);
        bVar2 = *(byte *)(piVar8 + 1);
        uVar6 = (uint)bVar2;
        uVar11 = *(undefined8 *)(param_1 + 0x5f0);
        iVar12 = *piVar8;
        if (uVar4 != bVar2) {
          uVar7 = FUN_01509eb0(lVar15);
          if ((int)uVar7 < 1) {
            uVar9 = 1;
          }
          else {
            iVar13 = 1;
            uVar9 = 1;
            uVar14 = (uint)bVar2;
            do {
              if (uVar6 == uVar4) {
                uVar9 = 0xffffffff;
                break;
              }
              uVar1 = 0;
              if ((int)(uVar14 + 1) < (int)uVar7) {
                uVar1 = uVar14 + 1;
              }
              uVar14 = uVar7;
              if (0 < (int)uVar6) {
                uVar14 = uVar6;
              }
              if ((int)uVar7 <= iVar13) break;
              uVar6 = uVar14 - 1;
              iVar13 = iVar13 + 1;
              uVar14 = uVar1;
            } while (uVar1 != uVar4);
          }
          uVar18 = 0xffffffff;
          goto LAB_00bca234;
        }
        bVar2 = *(byte *)((long)piVar8 + 5);
      }
      else {
        uVar11 = *(undefined8 *)(param_1 + 0x5f0);
        bVar2 = *(byte *)((long)piVar8 + 5);
      }
      uVar9 = (ulong)bVar2;
      uVar18 = 0;
LAB_00bca234:
      FUN_00bd3730(uVar11,iVar12,uVar18,uVar9,&local_68,&local_74);
      FUN_00bd0190((undefined4)local_68,local_74,*(undefined8 *)(param_1 + 0x5f8));
      FUN_00bcfef0(*(undefined8 *)(param_1 + 0x5f8),*(undefined2 *)((long)piVar8 + 6),1,0);
      *param_2 = 2;
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      }
      return 0;
    }
    *param_2 = 1;
  }
  if (((*piVar8 == iVar13) && (uVar4 == *(byte *)(piVar8 + 1))) &&
     ((uint)uVar9 == (uint)*(byte *)((long)piVar8 + 5))) goto LAB_00bca11c;
  lVar16 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar15 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  iVar12 = *piVar8;
  if (iVar12 == 0) {
    bVar2 = *(byte *)(piVar8 + 1);
    uVar6 = FUN_0150b350(lVar15);
    if (uVar6 != bVar2) {
      iVar12 = *piVar8;
      goto joined_r0x00bca070;
    }
    iVar12 = 0;
  }
  else {
joined_r0x00bca070:
    if (iVar12 == 1) {
      iVar12 = 3;
      if (*(uint *)(param_1 + 0x614) != (uint)*(byte *)(piVar8 + 1)) {
        iVar12 = 4;
      }
    }
    else {
      iVar12 = 4;
    }
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  if (iVar12 != 4) {
    thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),*piVar8,(char)piVar8[1],
                       *(undefined1 *)((long)piVar8 + 5));
    uVar6 = FUN_008787f0();
    uVar3 = *(undefined1 *)((long)piVar8 + 5);
    uVar11 = *(undefined8 *)(param_1 + 0x5f0);
    uVar9 = FUN_00bc8500(param_1,*piVar8,(char)piVar8[1],uVar3);
    uVar5 = 0;
    if ((uVar9 & 1) == 0) {
      uVar5 = 2;
    }
    FUN_00bd3390(uVar11,iVar12,uVar3,uVar5,(uVar6 & 0xffff) == 0);
    lVar16 = FUN_00bd1790(*(undefined8 *)(param_1 + 0x5f0),iVar12);
    FUN_00bcfef0(*(undefined8 *)(param_1 + 0x5f8),uVar6,0,
                 *(undefined1 *)(lVar16 + (ulong)*(byte *)((long)piVar8 + 5)));
  }
LAB_00bca11c:
  FUN_00bcfef0(*(undefined8 *)(param_1 + 0x5f8),0,1,0);
  if (*(char *)(param_1 + 0x60c) != '\0') {
    FUN_00bb50c0(param_1,&local_70,0);
  }
  FUN_00bd0160(*(undefined8 *)(param_1 + 0x5f8),2,0,0,0);
  *(undefined1 *)(param_1 + 0x620) = 0;
  if (*(int *)(param_1 + 0x5cc) == 0) {
    FUN_00bb5520(param_1,1);
  }
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  local_68 = FUN_016b8190();
  switch(*(undefined4 *)(param_1 + 0x5cc)) {
  case 0:
    FUN_00bbba00(param_1,&local_68);
    return 1;
  case 1:
    FUN_00bbc160(param_1,&local_68);
    return 1;
  case 2:
  case 4:
    FUN_00bbc7e0(param_1,&local_68);
    return 1;
  default:
    FUN_00bbcd10(param_1,&local_68);
    return 1;
  }
}


