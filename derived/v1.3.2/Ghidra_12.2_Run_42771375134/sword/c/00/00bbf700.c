/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbf700; name: FUN_00bbf700
 */


undefined8 FUN_00bbf700(long param_1)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  undefined8 local_80 [3];
  long local_68;
  
  lVar1 = param_1 + 0x100;
  FUN_00ffdc80(lVar1,"poke_panel");
  uVar8 = FUN_016b8190();
  uVar6 = (uint)((ulong)uVar8 >> 0x20);
  uVar7 = uVar6 - 2;
  if (uVar6 < 2) {
LAB_00bbfa0c:
    uVar8 = 0;
  }
  else {
    if ((int)uVar8 == 0) {
      if (5 < (int)uVar7) goto LAB_00bbfa0c;
      uVar6 = *(uint *)(param_1 + 0x614);
      iVar13 = 1;
      uVar7 = FUN_00bcfb20(1,0,uVar7);
      uVar9 = FUN_00bc9b00(param_1);
      if ((uVar9 & 1) != 0) goto LAB_00bbf7f8;
LAB_00bbf864:
      piVar10 = (int *)FUN_00bd0180(*(undefined8 *)(param_1 + 0x5f8));
      if (((*piVar10 != iVar13) || (uVar6 != *(byte *)(piVar10 + 1))) ||
         (uVar7 != *(byte *)((long)piVar10 + 5))) {
        lVar14 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),iVar13,uVar6,uVar7);
        if (lVar14 == 0) {
          return 0;
        }
        uVar5 = FUN_008787f0();
        iVar2 = *piVar10;
        iVar4 = piVar10[1];
        uVar3 = *(undefined1 *)((long)piVar10 + 5);
        uVar9 = FUN_00bce710(*(undefined8 *)(param_1 + 0x5e8),iVar2,(char)iVar4,uVar3,uVar5);
        if ((uVar9 & 1) != 0) {
          uVar11 = 0;
          if (iVar2 != 0) {
            if (iVar2 != 1) goto LAB_00bbf920;
            uVar11 = 3;
          }
          uVar8 = thunk_FUN_00bccb30(uVar11,*(undefined8 *)(param_1 + 0x5e8),iVar2,(char)iVar4,uVar3
                                    );
          FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),uVar8,uVar11,uVar3,0);
        }
LAB_00bbf920:
        uVar9 = FUN_00bce710(*(undefined8 *)(param_1 + 0x5e8),iVar13,uVar6,uVar7,
                             *(undefined2 *)((long)piVar10 + 6));
        if ((uVar9 & 1) != 0) {
          uVar11 = 3;
          if (iVar13 == 0) {
            uVar11 = 0;
          }
          uVar8 = thunk_FUN_00bccb30(3,*(undefined8 *)(param_1 + 0x5e8),iVar13,uVar6,uVar7);
          FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),uVar8,uVar11,uVar7,0);
        }
        FUN_00bd0160(*(undefined8 *)(param_1 + 0x5f8),*piVar10,(char)piVar10[1],
                     *(undefined1 *)((long)piVar10 + 5),uVar5);
      }
      local_80[0] = 0x3ca252075c61193e;
      FUN_00ffd430(lVar1,local_80);
      local_80[0] = 0xcb4c8ebbb4b8e8b8;
      FUN_00ffd010(lVar1,local_80);
      FUN_006cf0a0(local_80,&DAT_02637c18);
      FUN_016d3620(local_80);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      }
      *(undefined4 *)(param_1 + 0x608) = 0xf;
    }
    else {
      if (4 < uVar7) goto LAB_00bbfa0c;
      lVar14 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      }
      lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar12 == 0) {
        uVar6 = FUN_0150b350(0);
      }
      else {
        plVar15 = (long *)(lVar12 + 0x48);
        (**(code **)(*plVar15 + 0x10))(plVar15);
        uVar6 = FUN_0150b350(lVar12);
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
      }
      uVar7 = FUN_00bcfb20(0,(int)uVar8 + -1,uVar7);
      iVar13 = 0;
      uVar9 = FUN_00bc9b00(param_1);
      if ((uVar9 & 1) == 0) goto LAB_00bbf864;
LAB_00bbf7f8:
      FUN_00bbecb0(param_1);
      FUN_006cf0a0(local_80,&DAT_02637c48);
      FUN_016d3620(local_80);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}


