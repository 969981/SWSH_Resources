/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc2df0; name: FUN_00bc2df0
 */


undefined8 FUN_00bc2df0(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined4 local_64;
  undefined4 auStack_60 [6];
  long local_48;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar4 = FUN_016b8190();
  uVar7 = (uint)((ulong)uVar4 >> 0x20);
  uVar1 = uVar7 - 2;
  if (uVar7 < 2) {
LAB_00bc2ee8:
    iVar2 = -1;
    uVar3 = 0xffffffff;
  }
  else {
    if ((int)uVar4 == 0) {
      if (5 < (int)uVar1) goto LAB_00bc2ee8;
      iVar2 = *(int *)(param_1 + 0x614);
      uVar4 = 1;
      iVar6 = 0;
    }
    else {
      if (4 < uVar1) goto LAB_00bc2ee8;
      lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar9 == 0) {
        iVar2 = FUN_0150b350(0);
      }
      else {
        plVar11 = (long *)(lVar9 + 0x48);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        iVar2 = FUN_0150b350(lVar9);
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
      iVar6 = (int)uVar4 + -1;
      uVar4 = 0;
    }
    uVar3 = FUN_00bcfb20(uVar4,iVar6,uVar1);
  }
  lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  uVar5 = FUN_0150aec0(lVar9,iVar2 + -1);
  if ((uVar5 & 1) == 0) {
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    uVar4 = *(undefined8 *)(param_1 + 0x5f0);
    uVar5 = FUN_00bc8500(param_1,1,iVar2,uVar3);
    uVar8 = 0;
    if ((uVar5 & 1) == 0) {
      uVar8 = 2;
    }
    FUN_00bd3390(uVar4,3,uVar3,uVar8,0);
    local_64 = 0;
    auStack_60[0] = 0;
    FUN_00bcfb40(1,uVar3,auStack_60,&local_64);
    FUN_00bd17f0(*(undefined8 *)(param_1 + 0x5f0),1,iVar2,auStack_60[0],local_64,1,1);
    uVar5 = FUN_00bd1d20(*(undefined8 *)(param_1 + 0x5f0),1,iVar2,uVar3);
    if (((uVar5 & 1) != 0) &&
       (lVar10 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,iVar2,uVar3), lVar10 != 0)) {
      FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar10,3,uVar3,0);
      uVar4 = *(undefined8 *)(param_1 + 0x5f0);
      uVar5 = FUN_00bc8500(param_1,1,iVar2,uVar3);
      uVar8 = 0;
      if ((uVar5 & 1) == 0) {
        uVar8 = 2;
      }
      FUN_00bd3390(uVar4,3,uVar3,uVar8,1);
      FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),3,uVar3,0);
    }
    FUN_00bd3060(*(undefined8 *)(param_1 + 0x5f0),0);
    lVar10 = FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
    uVar4 = 1;
    FUN_00bc2ca0(param_1,*(uint *)(lVar10 + 4) & 0xff,*(uint *)(lVar10 + 4) >> 0xe & 0x3f,1);
    *(undefined2 *)(param_1 + 0x624) = 0xfffe;
  }
  else {
    FUN_006cf0a0(auStack_60,&DAT_02637c48);
    FUN_016d3620(auStack_60);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    uVar4 = 0;
  }
  return uVar4;
}


