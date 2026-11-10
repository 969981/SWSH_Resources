/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc19f0; name: FUN_00bc19f0
 */


undefined8 FUN_00bc19f0(long param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined1 auStack_70 [24];
  long local_58;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar11 = FUN_016b8190();
  uVar10 = (uint)((ulong)uVar11 >> 0x20);
  uVar8 = uVar10 - 2;
  if (uVar10 < 2) {
    return 0;
  }
  if ((int)uVar11 == 0) {
    if (5 < (int)uVar8) {
      return 0;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x614);
    iVar9 = 1;
    iVar7 = FUN_00bcfb20(1,0,uVar8);
    uVar12 = FUN_00bc2600(param_1);
  }
  else {
    if (4 < uVar8) {
      return 0;
    }
    lVar17 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
    }
    lVar18 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar18 == 0) {
      uVar6 = FUN_0150b350(0);
    }
    else {
      plVar19 = (long *)(lVar18 + 0x48);
      (**(code **)(*plVar19 + 0x10))(plVar19);
      uVar6 = FUN_0150b350(lVar18);
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
    }
    iVar7 = FUN_00bcfb20(0,(int)uVar11 + -1,uVar8);
    iVar9 = 0;
    uVar12 = FUN_00bc2600(param_1);
  }
  if ((uVar12 & 1) != 0) {
    FUN_00bbf290(param_1);
    FUN_006cf0a0(auStack_70,&DAT_02637c48);
    FUN_016d3620(auStack_70);
    if (local_58 == 0) {
      return 1;
    }
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    return 1;
  }
  *(short *)(param_1 + 0x624) = (short)iVar7;
  uVar12 = FUN_00bc27b0(param_1);
  if ((uVar12 & 1) != 0) {
    bVar3 = false;
    goto LAB_00bc1c58;
  }
  piVar13 = (int *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
  lVar17 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),iVar9,uVar6,iVar7);
  if (lVar17 == 0) {
    if (*piVar13 != 1) {
      if (iVar9 != 0) {
        lVar17 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
        if (lVar17 != 0) {
          (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
        }
        lVar18 = *(long *)(lVar17 + 0x58);
        if (lVar18 != 0) {
          (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
        }
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
        iVar9 = FUN_00884820(lVar18);
        bVar3 = iVar7 != iVar9;
        if (bVar3) {
          uVar11 = *(undefined8 *)(param_1 + 0x5f0);
          uVar6 = FUN_00884820(lVar18);
          FUN_00bd2a80(uVar11,0,0,iVar7,uVar6);
          uVar5 = FUN_00884820(lVar18);
          *(undefined2 *)(param_1 + 0x624) = uVar5;
        }
        if (lVar18 == 0) goto LAB_00bc1c50;
        plVar19 = (long *)(lVar18 + 0x48);
        pcVar14 = *(code **)(*plVar19 + 0x18);
        goto LAB_00bc1ef8;
      }
      goto LAB_00bc1c4c;
    }
    lVar17 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
    }
    lVar18 = *(long *)(lVar17 + 0x58);
    if (lVar18 != 0) {
      (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
    if (iVar9 == 0) {
      uVar8 = piVar13[1];
      iVar9 = FUN_00884820(lVar18);
      if (iVar9 - 1U <= (uVar8 >> 0xe & 0x3f)) {
        bVar3 = false;
        goto joined_r0x00bc1ee8;
      }
      FUN_00bd2690(*(undefined8 *)(param_1 + 0x5f0),(uint)piVar13[1] >> 0xe & 0x3f);
      bVar3 = false;
      if (lVar18 == 0) goto LAB_00bc1c50;
LAB_00bc1eec:
      plVar19 = (long *)(lVar18 + 0x48);
      pcVar14 = *(code **)(*plVar19 + 0x18);
LAB_00bc1ef8:
      (*pcVar14)(plVar19);
    }
    else {
      FUN_00bd2690(*(undefined8 *)(param_1 + 0x5f0),(uint)piVar13[1] >> 0xe & 0x3f);
      uVar11 = *(undefined8 *)(param_1 + 0x5f0);
      iVar9 = FUN_00884820(lVar18);
      FUN_00bd2a80(uVar11,0,0,iVar7,iVar9 - ((uint)piVar13[1] >> 0x1a));
      sVar4 = FUN_00884820(lVar18);
      bVar3 = true;
      *(ushort *)(param_1 + 0x624) = sVar4 - (ushort)((uint)piVar13[1] >> 0x1a);
joined_r0x00bc1ee8:
      if (lVar18 != 0) goto LAB_00bc1eec;
    }
  }
  else {
    lVar17 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
    }
    lVar18 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar18 != 0) {
      (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
    }
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
    }
    uVar8 = FUN_0150b350(lVar18);
    uVar6 = FUN_00bcfb20(*piVar13,(uint)piVar13[1] >> 8 & 0x3f,(uint)piVar13[1] >> 0xe & 0x3f);
    if (*piVar13 == 0) {
      bVar2 = *(byte *)(piVar13 + 1);
      if (bVar2 == uVar8) goto LAB_00bc1c20;
      uVar10 = FUN_01509eb0(lVar18);
      if ((int)uVar10 < 1) {
LAB_00bc1ed0:
        uVar11 = 1;
        uVar6 = 1;
      }
      else {
        iVar15 = 1;
        uVar11 = 1;
        uVar6 = 1;
        uVar16 = uVar8;
        do {
          if (uVar8 == bVar2) {
            uVar11 = 1;
            uVar6 = 0xffffffff;
            break;
          }
          uVar1 = 0;
          if ((int)(uVar16 + 1) < (int)uVar10) {
            uVar1 = uVar16 + 1;
          }
          uVar16 = uVar10;
          if (0 < (int)uVar8) {
            uVar16 = uVar8;
          }
          if ((int)uVar10 <= iVar15) goto LAB_00bc1ed0;
          uVar8 = uVar16 - 1;
          iVar15 = iVar15 + 1;
          uVar16 = uVar1;
        } while (uVar1 != bVar2);
      }
    }
    else {
LAB_00bc1c20:
      uVar11 = 0;
    }
    FUN_00bd2130(*(undefined8 *)(param_1 + 0x5f0),uVar11,iVar9,iVar7,*piVar13,uVar6);
    if (lVar18 != 0) {
      (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
    }
LAB_00bc1c4c:
    bVar3 = false;
  }
LAB_00bc1c50:
  FUN_00bc2960(param_1);
LAB_00bc1c58:
  FUN_00bd1f40(*(undefined8 *)(param_1 + 0x5f0),bVar3);
  FUN_006cf0a0(auStack_70,&DAT_02637c18);
  FUN_016d3620(auStack_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x608) = 6;
  return 1;
}


