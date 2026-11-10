/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc3760; name: FUN_00bc3760
 */


void FUN_00bc3760(long param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_80 [24];
  long local_68;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar11 = FUN_016b8190();
  uVar9 = (uint)((ulong)uVar11 >> 0x20);
  uVar6 = uVar9 - 2;
  if (uVar9 < 2) {
LAB_00bc3834:
    if (*(long *)(param_1 + 0x4c0) == 0) {
      return;
    }
    FUN_016d2080();
    return;
  }
  if ((int)uVar11 == 0) {
    if (5 < (int)uVar6) goto LAB_00bc3834;
    bVar1 = true;
    iVar5 = FUN_00bcfb20(1,0);
    uVar12 = FUN_00bc2600(param_1);
  }
  else {
    if (4 < uVar6) goto LAB_00bc3834;
    iVar5 = FUN_00bcfb20(0,(int)uVar11 + -1);
    bVar1 = false;
    uVar12 = FUN_00bc2600(param_1);
  }
  if ((uVar12 & 1) != 0) {
    uVar6 = FUN_00bcd970(*(undefined8 *)(param_1 + 0x5e8));
    if ((uVar6 | 1) == 3) {
      if (*(long *)(param_1 + 0x4c0) != 0) {
        FUN_016d2080();
      }
    }
    else {
      FUN_00bbf290(param_1);
    }
    FUN_006cf0a0(auStack_80,&DAT_02637c48);
    FUN_016d3620(auStack_80);
    if (local_68 == 0) {
      return;
    }
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    return;
  }
  *(short *)(param_1 + 0x624) = (short)iVar5;
  uVar12 = FUN_00bc27b0(param_1);
  if ((uVar12 & 1) != 0) {
    uVar11 = 0;
    goto LAB_00bc3b60;
  }
  piVar13 = (int *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
  iVar7 = *piVar13;
  if (iVar7 == 1) {
    lVar15 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    lVar14 = *(long *)(lVar15 + 0x58);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    if (bVar1) {
      FUN_00bd2690(*(undefined8 *)(param_1 + 0x5f0),(uint)piVar13[1] >> 0xe & 0x3f);
      if ((uint)piVar13[1] >> 0x1a != 0) {
        uVar6 = 0;
        do {
          uVar11 = *(undefined8 *)(param_1 + 0x5f0);
          iVar7 = FUN_00884820(lVar14);
          FUN_00bd2a80(uVar11,uVar6,uVar6,iVar5 + uVar6,uVar6 + (iVar7 - ((uint)piVar13[1] >> 0x1a))
                      );
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)piVar13[1] >> 0x1a);
      }
      sVar3 = FUN_00884820(lVar14);
      *(ushort *)(param_1 + 0x624) = sVar3 - (ushort)((uint)piVar13[1] >> 0x1a);
joined_r0x00bc3b38:
      uVar11 = 1;
    }
    else {
      uVar6 = piVar13[1];
      uVar9 = FUN_00884820(lVar14);
      if ((uVar6 >> 0xe & 0x3f) + (uVar6 >> 0x1a) < uVar9) {
        FUN_00bd2690(*(undefined8 *)(param_1 + 0x5f0),(uint)piVar13[1] >> 0xe & 0x3f);
      }
LAB_00bc3b40:
      uVar11 = 0;
    }
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    }
  }
  else {
    if (bVar1) {
      uVar6 = piVar13[1];
      bVar2 = 0;
      if (uVar6 >> 0x1b != 0) {
        iVar10 = 1;
        while( true ) {
          uVar11 = *(undefined8 *)(param_1 + 0x5e8);
          uVar8 = FUN_00bcfb20(iVar7,uVar6 >> 8 & 0x3f,iVar10 + (uVar6 >> 0xe & 0x3f) + -1);
          lVar15 = thunk_FUN_00bccb30(uVar11,iVar7,uVar6 & 0xff,uVar8);
          if (lVar15 == 0) break;
          bVar2 = bVar2 | lVar15 == 0;
          uVar6 = piVar13[1];
          if ((int)((uVar6 >> 0x1a) - 1) <= iVar10) goto LAB_00bc3a3c;
          iVar7 = *piVar13;
          iVar10 = iVar10 + 1;
        }
        bVar2 = 1;
      }
LAB_00bc3a3c:
      lVar15 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar15 != 0) {
        (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
      }
      lVar14 = *(long *)(lVar15 + 0x58);
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
      iVar7 = FUN_00884820(lVar14);
      if ((bool)(iVar5 == iVar7 & (bVar2 ^ 1))) goto LAB_00bc3b40;
      uVar6 = piVar13[1];
      if (uVar6 >> 0x1a != 0) {
        uVar9 = 0;
        iVar7 = 0;
        do {
          iVar10 = *piVar13;
          uVar11 = *(undefined8 *)(param_1 + 0x5e8);
          uVar8 = FUN_00bcfb20(iVar10,uVar6 >> 8 & 0x3f,uVar9 + (uVar6 >> 0xe & 0x3f));
          lVar15 = thunk_FUN_00bccb30(uVar11,iVar10,uVar6 & 0xff,uVar8);
          if (lVar15 != 0) {
            uVar11 = *(undefined8 *)(param_1 + 0x5f0);
            iVar10 = FUN_00884820(lVar14);
            FUN_00bd2a80(uVar11,uVar9,iVar7,iVar5 + uVar9,iVar10 + iVar7);
            iVar7 = iVar7 + 1;
          }
          uVar6 = piVar13[1];
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar6 >> 0x1a);
      }
      uVar4 = FUN_00884820(lVar14);
      *(undefined2 *)(param_1 + 0x624) = uVar4;
      goto joined_r0x00bc3b38;
    }
    uVar11 = 0;
  }
  FUN_00bc2960(param_1);
LAB_00bc3b60:
  FUN_00bd1f40(*(undefined8 *)(param_1 + 0x5f0),uVar11);
  FUN_006cf0a0(auStack_80,&DAT_02637c18);
  FUN_016d3620(auStack_80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x608) = 6;
  return;
}


