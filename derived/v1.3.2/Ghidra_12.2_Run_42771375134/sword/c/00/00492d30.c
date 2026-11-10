/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00492d30; name: FUN_00492d30
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00492d30(long param_1,ulong param_2,undefined2 *param_3,undefined4 *param_4,long *param_5,
            short *param_6)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  short sVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  char local_54 [4];
  
  *param_4 = 0;
  *param_3 = 0;
  iVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x20))();
  if (iVar7 == 0) {
    return 0;
  }
  if (iVar7 == 1) {
    if (*param_6 < 1) {
      return 0;
    }
    if ((*(byte *)(param_6 + 1) >> 1 & 1) == 0) {
      *param_6 = *param_6 + -1;
    }
    uVar8 = (**(code **)(**(long **)(param_1 + 200) + 0x28))(*(long **)(param_1 + 200),0);
    *param_4 = uVar8;
    uVar10 = FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,uVar8,0);
    return uVar10;
  }
  local_54[0] = '\x01';
  plVar17 = (long *)*param_5;
  if (((*(ushort *)(param_1 + 0xfd) & 0x17) != 1) || (plVar17 != (long *)0x0)) {
    if ((*(ushort *)(param_1 + 0xfd) & 7) != 1) {
      if (plVar17 == (long *)0x0) {
        plVar17 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x38);
        if (plVar17 == (long *)0x0) {
          return 0;
        }
        FUN_00494320(plVar17,iVar7);
        iVar7 = FUN_00494360(plVar17,*(undefined2 *)(param_1 + 0xfa));
        if (iVar7 != 1) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          return 0;
        }
        if ((*(byte *)(param_1 + 0xfd) >> 3 & 1) != 0) {
          uVar8 = (**(code **)(**(long **)(param_1 + 200) + 0x68))();
          *(undefined4 *)(plVar17 + 1) = uVar8;
          *(undefined4 *)((long)plVar17 + 0xc) = uVar8;
        }
        *param_5 = (long)plVar17;
      }
      uVar9 = FUN_00492820(param_1,plVar17,local_54,param_6);
      if (local_54[0] == '\0') {
        return 0;
      }
      goto LAB_00493218;
    }
    if (plVar17 == (long *)0x0) {
      plVar17 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x10);
      if (plVar17 == (long *)0x0) {
        *param_5 = 0;
        return 0;
      }
      FUN_00494d30(plVar17);
      *param_5 = (long)plVar17;
      lVar11 = *(long *)(param_1 + 0xe0);
      if (lVar11 != 0) {
        *(undefined2 *)((long)plVar17 + 10) = *(undefined2 *)(lVar11 + 10);
        *(undefined2 *)(lVar11 + 10) = 0xffff;
        plVar17 = (long *)*param_5;
      }
    }
    local_54[0] = '\x01';
    sVar13 = *(short *)((long)plVar17 + 10);
    if ((char)plVar17[1] == '\0') {
      if (sVar13 != 0) {
        sVar13 = sVar13 + -1;
        goto LAB_00492fe8;
      }
      *(undefined2 *)((long)plVar17 + 10) = 1;
      *(undefined1 *)(plVar17 + 1) = 1;
      bVar2 = *(byte *)(param_6 + 1);
joined_r0x00493060:
      if (((bVar2 & 1) != 0) &&
         (((bVar2 >> 1 & 1) != 0 ||
          (sVar13 = *param_6, *param_6 = sVar13 + -1, (short)(sVar13 + -1) != 0)))) {
        uVar3 = *(ushort *)((long)plVar17 + 10);
        uVar4 = *(ushort *)(param_1 + 0xfd);
        goto joined_r0x00492ff8;
      }
      bVar6 = false;
      uVar9 = 0;
      local_54[0] = '\0';
      uVar4 = *(ushort *)(param_1 + 0xfd);
    }
    else {
      iVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x20))();
      if (sVar13 + 1 == iVar7) {
        if ((*(byte *)(param_1 + 0xfd) >> 5 & 1) == 0) {
          *(undefined2 *)((long)plVar17 + 10) = 0;
          bVar2 = *(byte *)(param_6 + 1);
          goto joined_r0x00493060;
        }
        *(short *)((long)plVar17 + 10) = *(short *)((long)plVar17 + 10) + -1;
        *(undefined1 *)(plVar17 + 1) = 0;
        uVar3 = *(ushort *)((long)plVar17 + 10);
        uVar4 = *(ushort *)(param_1 + 0xfd);
      }
      else {
        sVar13 = *(short *)((long)plVar17 + 10) + 1;
LAB_00492fe8:
        *(short *)((long)plVar17 + 10) = sVar13;
        uVar3 = *(ushort *)((long)plVar17 + 10);
        uVar4 = *(ushort *)(param_1 + 0xfd);
      }
joined_r0x00492ff8:
      uVar9 = (uint)uVar3;
      bVar6 = true;
    }
    if ((uVar4 >> 4 & 1) == 0) {
      if ((uVar4 >> 7 & 1) == 0) {
        iVar7 = *(int *)(param_1 + 0xd8) + -1;
        if (-1 < iVar7) {
          iVar15 = 0;
          do {
            while( true ) {
              iVar5 = iVar7 - iVar15;
              if (iVar5 < 0) {
                iVar5 = iVar5 + 1;
              }
              uVar1 = iVar15 + (iVar5 >> 1);
              uVar16 = *(ulong *)(*(long *)(param_1 + 0xd0) +
                                 (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4))
              ;
              if (param_2 > uVar16 || uVar16 == param_2) break;
              iVar7 = uVar1 - 1;
              if (iVar7 < iVar15) goto LAB_004930e8;
            }
            if (param_2 <= uVar16) {
              lVar11 = *(long *)(param_1 + 0xd0) + (long)(int)uVar1 * 0x10;
              goto LAB_0049319c;
            }
            iVar15 = uVar1 + 1;
          } while (iVar15 <= iVar7);
        }
LAB_004930e8:
        lVar11 = 0;
LAB_0049319c:
        plVar14 = (long *)(lVar11 + 8);
      }
      else {
        plVar14 = (long *)(param_1 + 0xe0);
      }
      lVar12 = *plVar14;
      lVar11 = plVar17[1];
      *(char *)(lVar12 + 8) = (char)lVar11;
      sVar13 = -1;
      if ((char)lVar11 == '\0') {
        sVar13 = 1;
      }
      sVar13 = sVar13 + *(short *)((long)plVar17 + 10);
      *(short *)(lVar12 + 10) = sVar13;
      iVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x20))();
      if ((sVar13 + 1 == iVar7) && ((*(byte *)(param_1 + 0xfd) >> 5 & 1) == 0)) {
        *(undefined2 *)(lVar12 + 10) = 0xffff;
      }
      else if ((*(short *)(lVar12 + 10) == 0) && (*(char *)(lVar12 + 8) == '\0')) {
        *(undefined1 *)(lVar12 + 8) = 1;
      }
    }
    if (!bVar6) {
      return 0;
    }
    goto LAB_00493218;
  }
  lVar11 = FUN_00491b70(param_1,param_2);
  if (lVar11 == 0) {
    return 0;
  }
  lVar12 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x10);
  if (lVar12 == 0) {
    return 0;
  }
  FUN_00494d30(lVar12);
  uVar9 = *(uint *)(lVar11 + 8);
  *(uint *)(lVar12 + 8) = uVar9;
  local_54[0] = '\x01';
  if ((uVar9 & 0xff) == 0) {
    if (uVar9 >> 0x10 == 0) {
      *(undefined2 *)(lVar12 + 10) = 1;
      *(undefined1 *)(lVar12 + 8) = 1;
      bVar2 = *(byte *)(param_6 + 1);
joined_r0x00492e94:
      if (((bVar2 & 1) == 0) ||
         (((bVar2 >> 1 & 1) == 0 &&
          (sVar13 = *param_6, *param_6 = sVar13 + -1, (short)(sVar13 + -1) == 0)))) {
        *param_5 = lVar12;
        return 0;
      }
    }
    else {
      sVar13 = (short)(uVar9 >> 0x10) + -1;
LAB_00493008:
      *(short *)(lVar12 + 10) = sVar13;
    }
  }
  else {
    iVar7 = (**(code **)(**(long **)(param_1 + 200) + 0x20))();
    if (((int)uVar9 >> 0x10) + 1 != iVar7) {
      sVar13 = *(short *)(lVar12 + 10) + 1;
      goto LAB_00493008;
    }
    if ((*(byte *)(param_1 + 0xfd) >> 5 & 1) == 0) {
      *(undefined2 *)(lVar12 + 10) = 0;
      bVar2 = *(byte *)(param_6 + 1);
      goto joined_r0x00492e94;
    }
    *(short *)(lVar12 + 10) = *(short *)(lVar12 + 10) + -1;
    *(undefined1 *)(lVar12 + 8) = 0;
  }
  uVar9 = (uint)*(ushort *)(lVar12 + 10);
  *param_5 = lVar12;
LAB_00493218:
  *param_3 = (short)uVar9;
  uVar8 = (**(code **)(**(long **)(param_1 + 200) + 0x28))(*(long **)(param_1 + 200),uVar9);
  *param_4 = uVar8;
  uVar10 = FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,uVar8,0);
  return uVar10;
}


