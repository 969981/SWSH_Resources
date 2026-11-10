/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01045a80; name: FUN_01045a80
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01045a80(long param_1,long *param_2,undefined1 param_3,uint param_4,long *param_5,
                 long param_6)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  long local_78;
  long local_70;
  int local_68;
  int local_64;
  
  uVar3 = (**(code **)*param_2)(param_2);
  uVar4 = (**(code **)(*param_2 + 8))(param_2);
  iVar5 = (**(code **)(*param_2 + 0x10))(param_2,param_3);
  iVar6 = (**(code **)(*param_2 + 0x18))(param_2,param_3);
  iVar7 = (**(code **)(*param_2 + 0x20))(param_2,param_3);
  uVar8 = (**(code **)(*param_2 + 0x28))(param_2);
  local_68 = -1;
  local_64 = iVar7;
  if (param_5 == (long *)0x0) {
    iVar1 = *(int *)(param_1 + 0x1438);
  }
  else {
    FUN_009c7390(param_5,&local_64,&local_68,uVar3,uVar4,param_4 & 1,uVar8 & 1,iVar7);
    if (local_68 < 0) {
      iVar1 = *(int *)(param_1 + 0x1438);
    }
    else {
      local_64 = FUN_00945420(iVar7);
      iVar1 = *(int *)(param_1 + 0x1438);
    }
  }
  if ((((iVar1 == iVar5) && (*(int *)(param_1 + 0x143c) == iVar6)) &&
      (*(int *)(param_1 + 0x1430) == local_64)) &&
     ((*(int *)(param_1 + 0x1434) == iVar7 && (*(int *)(param_1 + 0x1440) == local_68)))) {
    return;
  }
  lVar15 = param_1 + 0x100;
  *(int *)(param_1 + 0x1438) = iVar5;
  *(int *)(param_1 + 0x1430) = local_64;
  *(int *)(param_1 + 0x1434) = iVar7;
  *(int *)(param_1 + 0x143c) = iVar6;
  *(int *)(param_1 + 0x1440) = local_68;
  FUN_016ab8e0(*(undefined8 *)(param_1 + 0x1428));
  local_70 = *(long *)(param_1 + 0x1408);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  FUN_00a39350(lVar15,&DAT_02162d70,&local_70,&DAT_02162d50,0,local_64,local_68);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  lVar13 = *(long *)(param_1 + 0x2b0);
  if (local_68 < 0) {
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar11 = *(long *)(lVar13 + 0x2e8);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    uVar9 = *(undefined8 *)(param_1 + 0x1410);
    iVar1 = local_64;
  }
  else {
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar11 = *(long *)(lVar13 + 0x2e8);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    uVar9 = *(undefined8 *)(param_1 + 0x1420);
    iVar1 = local_68;
  }
  FUN_0077e740(uVar9,iVar1,lVar11);
  uVar9 = FUN_0077d470(lVar11);
  FUN_00ffd700(lVar15,&DAT_02162d78,uVar9,10);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (param_5 == (long *)0x0) {
    if ((param_4 & 1) == 0) {
      uVar2 = FUN_00880ab0(iVar7);
    }
    else {
      uVar2 = FUN_00881040();
      uVar2 = uVar2 & 0xff;
    }
  }
  else {
    uVar2 = FUN_009c74e0(param_5,uVar3,uVar4,param_4 & 1,uVar8 & 1,iVar7);
  }
  if (uVar2 < 2) {
    local_78 = *(long *)(param_1 + 0x1408);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
    }
    FUN_008c4e70(lVar15,&DAT_02162d80,&local_78,&DAT_02162d60,10);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    uVar10 = FUN_00880c60(iVar7);
  }
  else {
    lVar13 = *(long *)(param_1 + 0x2b0);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar11 = *(long *)(lVar13 + 0x2e8);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    lVar14 = *(long *)(lVar13 + 0x2e0);
    if (lVar14 == 0) {
      FUN_014ca220(0,0,uVar2,3,1,1);
      FUN_0077eb10(*(undefined8 *)(param_1 + 0x1408),&DAT_02162d58,lVar11);
      FUN_0167cce0(lVar13,&DAT_02162d80,10);
    }
    else {
      plVar12 = (long *)(lVar14 + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_014ca220(lVar14,0,uVar2,3,1,1);
      FUN_0077eb10(*(undefined8 *)(param_1 + 0x1408),&DAT_02162d58,lVar11);
      FUN_0167cce0(lVar13,&DAT_02162d80,10);
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    uVar10 = FUN_00880c60(iVar7);
  }
  if ((uVar10 & 1) == 0) {
    fVar16 = 2.0;
  }
  else {
    iVar7 = FUN_00880b10(iVar7);
    fVar16 = 2.0;
    if (iVar7 != 0) {
      fVar16 = (float)(iVar7 + -1);
    }
  }
  FUN_00ffd510(fVar16,lVar15,&DAT_02162d88);
  lVar15 = *(long *)(param_1 + 0x538);
  if (lVar15 != 0) {
    plVar12 = (long *)(lVar15 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    if (*(long *)(param_1 + 0x1448) != 0) {
      if ((param_5 == (long *)0x0) || (param_6 == 0)) {
        uVar3 = FUN_00880ae0(local_64);
      }
      else {
        uVar3 = (**(code **)(*param_5 + 0x758))(param_5,local_64);
      }
      FUN_016a7910(lVar15,uVar3,1,*(undefined8 *)(param_1 + 0x1448),0,0);
    }
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  lVar15 = *(long *)(param_1 + 0x1408);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x2e8);
  if (lVar13 == 0) {
    FUN_0077eb10(lVar15,&DAT_02162d98,0);
    lVar13 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x2e0);
  }
  else {
    plVar12 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0077eb10(lVar15,&DAT_02162d98,lVar13);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar13 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x2e0);
  }
  if (lVar13 == 0) {
    FUN_014ca220(0,0,iVar5,2,0,1);
    FUN_014ca220(0,1,iVar6,2,0,1);
  }
  else {
    plVar12 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_014ca220(lVar13,0,iVar5,2,0,1);
    FUN_014ca220(lVar13,1,iVar6,2,0,1);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  FUN_0167cce0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02162d90,10);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  return;
}


