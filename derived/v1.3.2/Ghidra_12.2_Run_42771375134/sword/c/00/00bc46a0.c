/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc46a0; name: FUN_00bc46a0
 */


void FUN_00bc46a0(long param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  bool bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long local_68;
  
  FUN_00ff86a0(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar9 = *(long *)(local_68 + 0x60);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  lVar10 = *(long *)(param_1 + 0x2b0);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(lVar10 + 0x2e0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  *(undefined1 *)(param_1 + 0x681) = 0;
  switch(param_2) {
  case 0:
    FUN_014c9900(lVar11,0,param_3,1);
    break;
  case 0xd:
    FUN_00ffdc80(param_1 + 0x100,"poke_panel");
    uVar7 = FUN_016b8190();
    uVar12 = *(undefined8 *)(param_1 + 0x5e8);
    uVar8 = (uint)((ulong)uVar7 >> 0x20);
    uVar1 = uVar8 - 2;
    if (uVar8 < 2) {
LAB_00bc490c:
      uVar4 = 0xffffffff;
      uVar7 = 2;
      uVar6 = 0xffffffff;
    }
    else if ((int)uVar7 == 0) {
      if (5 < (int)uVar1) goto LAB_00bc490c;
      uVar4 = *(undefined4 *)(param_1 + 0x614);
      uVar7 = 1;
      uVar6 = FUN_00bcfb20(1,0,uVar1);
    }
    else {
      if (4 < uVar1) goto LAB_00bc490c;
      lVar13 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      lVar15 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar15 == 0) {
        uVar4 = FUN_0150b350(0);
      }
      else {
        plVar14 = (long *)(lVar15 + 0x48);
        (**(code **)(*plVar14 + 0x10))(plVar14);
        uVar4 = FUN_0150b350(lVar15);
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
      }
      uVar6 = FUN_00bcfb20(0,(int)uVar7 + -1,uVar1);
      uVar7 = 0;
    }
    lVar13 = thunk_FUN_00bccb30(uVar12,uVar7,uVar4,uVar6);
    if (lVar13 != 0) {
      FUN_014c7bf0(lVar11,0,lVar13);
    }
    break;
  case 0xf:
    FUN_00ffdc80(param_1 + 0x100,"poke_panel");
    uVar7 = FUN_016b8190();
    uVar12 = *(undefined8 *)(param_1 + 0x5e8);
    uVar8 = (uint)((ulong)uVar7 >> 0x20);
    uVar1 = uVar8 - 2;
    if (uVar8 < 2) {
LAB_00bc4968:
      uVar4 = 0xffffffff;
      uVar7 = 2;
      uVar6 = 0xffffffff;
    }
    else if ((int)uVar7 == 0) {
      if (5 < (int)uVar1) goto LAB_00bc4968;
      uVar4 = *(undefined4 *)(param_1 + 0x614);
      uVar7 = 1;
      uVar6 = FUN_00bcfb20(1,0,uVar1);
    }
    else {
      if (4 < uVar1) goto LAB_00bc4968;
      lVar13 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      lVar15 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar15 == 0) {
        uVar4 = FUN_0150b350(0);
      }
      else {
        plVar14 = (long *)(lVar15 + 0x48);
        (**(code **)(*plVar14 + 0x10))(plVar14);
        uVar4 = FUN_0150b350(lVar15);
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
      }
      uVar6 = FUN_00bcfb20(0,(int)uVar7 + -1,uVar1);
      uVar7 = 0;
    }
    lVar13 = thunk_FUN_00bccb30(uVar12,uVar7,uVar4,uVar6);
    if (lVar13 != 0) {
      FUN_014c84c0(lVar11,0,lVar13);
      plVar14 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      iVar5 = FUN_008783b0(lVar13);
      if (iVar5 == 0x382) {
        sVar3 = FUN_008783c0(lVar13);
        bVar2 = sVar3 == 0;
      }
      else {
        bVar2 = true;
      }
      (**(code **)(*plVar14 + 0x18))(plVar14);
      if (!bVar2) {
        local_68 = 0x2eb0c466ad00a461;
        lVar13 = *(long *)(lVar10 + 0x2e8);
        goto joined_r0x00bc4b14;
      }
    }
    break;
  case 0x25:
  case 0x2b:
  case 0x2c:
    *(undefined1 *)(param_1 + 0x681) = 1;
  }
  local_68 = *(long *)(&DAT_02159f48 + (long)param_2 * 8);
  lVar13 = *(long *)(lVar10 + 0x2e8);
joined_r0x00bc4b14:
  if (lVar13 == 0) {
    FUN_0077eb10(lVar9,&local_68,0);
    lVar13 = *(long *)(lVar10 + 0x2f0);
  }
  else {
    plVar14 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    FUN_0077eb10(lVar9,&local_68,lVar13);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    lVar13 = *(long *)(lVar10 + 0x2f0);
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  lVar15 = *(long *)(lVar10 + 0x2e8);
  plVar14 = (long *)(lVar15 + 0x48);
  if (lVar15 != 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  FUN_014c62d0(lVar11,lVar13,lVar15);
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))(plVar14);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  *(int *)(param_1 + 0x688) = param_2;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


