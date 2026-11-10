/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc3bd0; name: FUN_00bc3bd0
 */


void FUN_00bc3bd0(long param_1)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  undefined2 *puVar20;
  ushort *puVar21;
  undefined4 local_84;
  undefined4 auStack_80 [6];
  long local_68;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar9 = FUN_016b8190();
  uVar14 = (uint)((ulong)uVar9 >> 0x20);
  uVar8 = uVar14 - 2;
  if (uVar14 < 2) {
LAB_00bc3ebc:
    if (*(long *)(param_1 + 0x4c0) == 0) {
      return;
    }
    FUN_016d2080();
    return;
  }
  if ((int)uVar9 == 0) {
    if (5 < (int)uVar8) goto LAB_00bc3ebc;
    iVar3 = *(int *)(param_1 + 0x614);
    iVar15 = 1;
    uVar10 = FUN_00bcfb20(1,0,uVar8);
    uVar11 = FUN_00bc2b00(param_1);
    plVar19 = (long *)PTR_DAT_02710848;
  }
  else {
    if (4 < uVar8) goto LAB_00bc3ebc;
    lVar16 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar16 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
    }
    lVar17 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar17 == 0) {
      iVar3 = FUN_0150b350(0);
    }
    else {
      plVar19 = (long *)(lVar17 + 0x48);
      (**(code **)(*plVar19 + 0x10))(plVar19);
      iVar3 = FUN_0150b350(lVar17);
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
    if (lVar16 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
    }
    uVar10 = FUN_00bcfb20(0,(int)uVar9 + -1,uVar8);
    iVar15 = 0;
    uVar11 = FUN_00bc2b00(param_1);
    plVar19 = (long *)PTR_DAT_02710848;
  }
  PTR_DAT_02710848 = (undefined *)plVar19;
  if ((uVar11 & 1) != 0) {
    FUN_00bbf290(param_1);
    FUN_006cf0a0(auStack_80,&DAT_02637c48);
    FUN_016d3620(auStack_80);
    if (local_68 == 0) {
      return;
    }
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    return;
  }
  *(short *)(param_1 + 0x624) = (short)uVar10;
  lVar16 = *(long *)(*plVar19 + 0x90);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar17 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
  }
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  piVar12 = (int *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
  iVar5 = *piVar12;
  if (iVar15 == 0) {
    if (iVar5 == 0) {
      FUN_006cf0a0(auStack_80,&DAT_02637c48);
      FUN_016d3620(auStack_80);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      if (*(long *)(param_1 + 0x4c0) != 0) {
        FUN_016d2080();
      }
      goto joined_r0x00bc412c;
    }
    FUN_00bd3060(*(undefined8 *)(param_1 + 0x5f0),0);
    uVar8 = piVar12[1];
    uVar10 = (ulong)uVar8;
    if ((uVar8 & 0xff) == *(uint *)(param_1 + 0x614)) {
      uVar6 = FUN_0150a980(lVar17,(uVar8 & 0xff) - 1);
      uVar14 = piVar12[1];
      uVar10 = (ulong)uVar14;
      bVar1 = uVar6 <= (uVar8 >> 0xe & 0x3f) + (uVar8 >> 0x1a);
      if (uVar14 >> 0x1a != 0) {
        uVar8 = 0;
        do {
          FUN_00bd30e0(*(undefined8 *)(param_1 + 0x5f0),*piVar12,
                       uVar8 + ((uint)uVar10 >> 0xe & 0x3f),0);
          uVar10 = (ulong)(uint)piVar12[1];
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)piVar12[1] >> 0x1a);
        goto LAB_00bc4138;
      }
    }
    else {
      bVar1 = true;
LAB_00bc4138:
      uVar14 = (uint)uVar10;
      if (uVar10 >> 0x1a != 0) {
        uVar8 = 0;
        do {
          FUN_0150ab10(lVar17,((uint)uVar10 & 0xff) - 1,(uint)uVar10 >> 0xe & 0x3f);
          uVar14 = piVar12[1];
          uVar10 = (ulong)uVar14;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar14 >> 0x1a);
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0x5f0);
    if (!bVar1) {
      FUN_00bd2690(uVar9,uVar14 >> 0xe & 0x3f);
      goto LAB_00bc408c;
    }
    uVar13 = 1;
  }
  else {
    if (iVar5 == 0) {
      uVar8 = piVar12[1];
      if (uVar8 >> 0x1a != 0) {
        iVar5 = 0;
        uVar14 = 0;
        while( true ) {
          uVar9 = *(undefined8 *)(param_1 + 0x5e8);
          uVar4 = FUN_00bcfb20(iVar5,uVar8 >> 8 & 0x3f,uVar14 + (uVar8 >> 0xe & 0x3f));
          lVar16 = thunk_FUN_00bccb30(uVar9,iVar5,uVar8 & 0xff,uVar4);
          if (lVar16 != 0) {
            uVar8 = piVar12[1];
            iVar5 = (int)uVar10 + uVar14;
            uVar4 = FUN_00bcfb20(*piVar12,uVar8 >> 8 & 0x3f,uVar14 + (uVar8 >> 0xe & 0x3f));
            iVar7 = FUN_0150aff0(lVar17,iVar3 + -1,iVar5,uVar8 & 0xff,uVar4);
            if (iVar7 != 6) {
              FUN_00bd30e0(*(undefined8 *)(param_1 + 0x5f0),1,iVar7,0);
            }
            FUN_00bd30e0(*(undefined8 *)(param_1 + 0x5f0),1,iVar5,0);
          }
          uVar8 = piVar12[1];
          uVar14 = uVar14 + 1;
          if (uVar8 >> 0x1a <= uVar14) break;
          iVar5 = *piVar12;
        }
      }
    }
    else {
      uVar11 = (ulong)(uint)piVar12[1];
      if ((uint)piVar12[1] >> 0x1a != 0) {
        uVar18 = 0;
        puVar20 = (undefined2 *)((ulong)auStack_80 | 2);
        while( true ) {
          uVar4 = FUN_00bcfb20(iVar5,(uint)uVar11 >> 8 & 0x3f,
                               (int)uVar18 + ((uint)uVar11 >> 0xe & 0x3f));
          uVar2 = FUN_0150a590(lVar17,*(byte *)(piVar12 + 1) - 1,uVar4);
          puVar20[-1] = uVar2;
          uVar2 = FUN_0150a5c0(lVar17,*(byte *)(piVar12 + 1) - 1,uVar4);
          *puVar20 = uVar2;
          uVar8 = piVar12[1];
          uVar11 = (ulong)uVar8;
          uVar18 = uVar18 + 1;
          if (uVar8 >> 0x1a <= uVar18) break;
          iVar5 = *piVar12;
          puVar20 = puVar20 + 2;
        }
        if (uVar8 >> 0x1a != 0) {
          uVar18 = 0;
          puVar21 = (ushort *)((ulong)auStack_80 | 2);
          do {
            if ((puVar21[-1] < 0x20) && (*puVar21 < 0x1e)) {
              uVar11 = (uVar10 & 0xffffffff) + uVar18;
              iVar5 = FUN_0150aff0(lVar17,iVar3 + -1,uVar11 & 0xffffffff);
              if (iVar5 != 6) {
                FUN_00bd30e0(*(undefined8 *)(param_1 + 0x5f0),1,iVar5,0);
              }
              FUN_00bd30e0(*(undefined8 *)(param_1 + 0x5f0),1,uVar11 & 0xffffffff,0);
              uVar11 = (ulong)(uint)piVar12[1];
            }
            uVar18 = uVar18 + 1;
            puVar21 = puVar21 + 2;
          } while (uVar18 < uVar11 >> 0x1a);
        }
      }
    }
    iVar3 = iVar3 + -1;
    uVar8 = FUN_0150a980(lVar17,iVar3);
    if (uVar8 != 0) {
      uVar14 = 0;
      do {
        uVar11 = FUN_0150a610(lVar17,iVar3,uVar14);
        if ((uVar11 & 1) == 0) {
          FUN_0150ab30(lVar17,iVar3);
          FUN_00bd1f40(*(undefined8 *)(param_1 + 0x5f0),1);
          local_84 = 0;
          auStack_80[0] = 0;
          FUN_00bcfb40(iVar15,uVar10 & 0xffffffff,auStack_80,&local_84);
          FUN_00bd1cc0(*(undefined8 *)(param_1 + 0x5f0),iVar15,uVar10 & 0xffffffff,auStack_80[0],
                       local_84);
          FUN_00bd2c90(*(undefined8 *)(param_1 + 0x5f0));
          *(undefined2 *)(param_1 + 0x624) = 0xffff;
          goto LAB_00bc4178;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar8);
    }
    FUN_0150ab30(lVar17,iVar3);
LAB_00bc408c:
    uVar9 = *(undefined8 *)(param_1 + 0x5f0);
    uVar13 = 0;
  }
  FUN_00bd1f40(uVar9,uVar13);
LAB_00bc4178:
  FUN_006cf0a0(auStack_80,&DAT_02637c18);
  FUN_016d3620(auStack_80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  *(undefined4 *)(param_1 + 0x608) = 6;
joined_r0x00bc412c:
  if (lVar17 == 0) {
    return;
  }
  (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
  return;
}


