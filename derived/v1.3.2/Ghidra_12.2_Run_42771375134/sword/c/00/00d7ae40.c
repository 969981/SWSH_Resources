/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7ae40; name: FUN_00d7ae40
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00d7ae40(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  ulong local_48;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar8)(puVar8);
    lVar3 = FUN_00d74330();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar8 = puVar8 + -10;
        iVar1 = *(int *)(param_1 + 0x88);
        goto joined_r0x00d7b50c;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
  iVar1 = *(int *)(param_1 + 0x88);
joined_r0x00d7b50c:
  if (iVar1 == 0) {
    if (*(int *)puVar8[0x50] == 1) {
      lVar3 = puVar8[0x4f];
      lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      uVar4 = FUN_01524df0(lVar9);
      uVar5 = FUN_00d715f0(lVar3 + 0x58,uVar4);
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      }
      uVar7 = 4;
      if ((uVar5 & 1) == 0) {
        uVar7 = 6;
      }
    }
    else {
      uVar7 = 4;
    }
    *(undefined4 *)(param_1 + 0x88) = uVar7;
    local_48 = local_48 & 0xffffffffffffff00;
    FUN_00d7d400(*(undefined8 *)(param_1 + 0x78),&local_48);
    FUN_00d7ed70(*(undefined8 *)(param_1 + 0x78));
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x80),0);
    local_48 = local_48 & 0xffffffffffffff00;
    FUN_00d7e7a0(*(undefined8 *)(param_1 + 0x78),&local_48);
    iVar1 = *(int *)(param_1 + 0x88);
  }
  switch(iVar1) {
  case 4:
    local_48 = 0xaf53b4ee2442d637;
    if (*(int *)puVar8[0x50] != 1) {
      local_48 = 0xaf53b3ee2442d484;
    }
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
    plVar2 = (long *)(**(code **)*puVar10)(puVar10);
    if (((*PTR_DAT_02717528 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0)) {
      uVar4 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar4;
      __cxa_guard_release(PTR_DAT_02717528);
    }
    for (; plVar2 != (long *)PTR_DAT_02717530; plVar2 = (long *)*plVar2) {
    }
    FUN_00d70930(&local_58,*(undefined8 *)(puVar10[0x9f] + 0xb0));
    FUN_0077eb10(local_58,&local_48,puVar8[0x71]);
    (**(code **)(**(long **)(param_1 + 0x80) + 0x88))
              (*(long **)(param_1 + 0x80),puVar8 + 0x66,puVar8 + 0x69);
    if (*(int *)puVar8[0x50] == 2) {
      uVar4 = puVar8[0x4f];
      lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        uVar11 = FUN_01524df0(lVar3);
        FUN_00d83af0(uVar4,uVar11);
        (**(code **)(*plVar2 + 0x18))(plVar2);
        goto LAB_00d7b094;
      }
      uVar11 = FUN_01524df0(0);
      FUN_00d83af0(uVar4,uVar11);
      *(undefined4 *)(param_1 + 0x88) = 5;
    }
    else {
LAB_00d7b094:
      *(undefined4 *)(param_1 + 0x88) = 5;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    break;
  case 5:
    uVar5 = FUN_010386c0(*(undefined8 *)(param_1 + 0x80));
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0x80));
    if (iVar1 == 0) {
LAB_00d7b4f4:
      FUN_00d7e200(*(undefined8 *)(param_1 + 0x78));
      return 1;
    }
    FUN_00d7c010(param_1);
    if (*(int *)puVar8[0x50] == 2) {
      plVar2 = (long *)(param_1 + 0x78);
      local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(*plVar2 + 0x5dc));
      iVar1 = FUN_00d756f0(puVar8 + 0xc,&local_48);
      if (iVar1 != 0) {
        lVar3 = *plVar2;
        if (*(int *)(lVar3 + 0x5dc) == 8) {
          uVar5 = FUN_00d71370(puVar8[0x4f] + 0x58);
          if ((uVar5 & 1) == 0) goto LAB_00d7b5d8;
          lVar3 = *plVar2;
        }
        else if (*(int *)(lVar3 + 0x5dc) == 0xb) {
          lVar3 = FUN_00d7e5c0();
          local_48 = CONCAT71(local_48._1_7_,*(undefined1 *)(puVar8[0x4f] + 0x58));
          uVar4 = FUN_00d70a10(lVar3 + 0x10,&local_48);
          FUN_00d75e10(puVar8[0x4f],uVar4,1);
          lVar3 = *plVar2;
          iVar1 = *(int *)(lVar3 + 0x5dc);
          goto joined_r0x00d7b56c;
        }
        uVar11 = puVar8[0x4f];
        uVar4 = FUN_00d7e5c0(lVar3);
        FUN_00d75de0(uVar11,uVar4);
      }
LAB_00d7b5d8:
      lVar3 = *plVar2;
      iVar1 = *(int *)(lVar3 + 0x5dc);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x78);
      iVar1 = *(int *)(lVar3 + 0x5dc);
    }
joined_r0x00d7b56c:
    if (((iVar1 == 4) || (iVar1 == 1)) && (*(char *)(lVar3 + 0x668) != '\0')) {
      FUN_00d83b20(puVar8[0x4f],8);
    }
LAB_00d7b604:
    *(undefined4 *)(param_1 + 0x88) = 0;
    return 0;
  case 6:
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
    plVar2 = (long *)(**(code **)*puVar10)(puVar10);
    if (((*PTR_DAT_02717528 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0)) {
      uVar4 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar4;
      __cxa_guard_release(PTR_DAT_02717528);
    }
    for (; plVar2 != (long *)PTR_DAT_02717530; plVar2 = (long *)*plVar2) {
    }
    FUN_00d70930(&local_48,*(undefined8 *)(puVar10[0x9f] + 0xb0));
    local_58 = -0x50a8ce11dbba1f8b;
    FUN_0077eb10(local_48,&local_58,puVar8[0x71]);
    lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x5e0) + 0x18);
    lVar3 = *(long *)(lVar9 + 0x2d0);
    *(undefined8 *)(lVar9 + 0x2b8) = 0x6bf4654d15e02d1e;
    *(undefined1 *)(lVar9 + 0x478) = 0;
    *(char **)(lVar9 + 0x2c0) = "Play_UI_boutique_change";
    *(undefined8 *)(lVar9 + 0x2d0) = 0;
    *(undefined8 *)(lVar9 + 0x2c8) = 0x17;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    puVar8[0x6b] = puVar8[0x74];
    *(undefined2 *)((long)puVar8 + 0x382) = 1;
    (**(code **)(**(long **)(param_1 + 0x80) + 0x88))
              (*(long **)(param_1 + 0x80),puVar8 + 0x66,puVar8 + 0x69);
    *(undefined2 *)((long)puVar8 + 0x382) = 0xffff;
    puVar8[0x6b] = 0;
    *(undefined4 *)(param_1 + 0x88) = 7;
    goto joined_r0x00d7b4ec;
  case 7:
    uVar5 = FUN_010386c0(*(undefined8 *)(param_1 + 0x80));
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    lVar9 = *(long *)(param_1 + 0x80);
    FUN_006cf0a0(&local_78,&DAT_0264cf98);
    lVar3 = local_60;
    lVar9 = *(long *)(lVar9 + 0x5e0);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
    }
    lVar9 = *(long *)(lVar9 + 0x18);
    *(undefined1 *)(lVar9 + 0x478) = 0;
    *(undefined8 *)(lVar9 + 0x2b8) = local_78;
    *(undefined8 *)(lVar9 + 0x2c0) = uStack_70;
    *(undefined8 *)(lVar9 + 0x2c8) = local_68;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar6 = *(long *)(lVar9 + 0x2d0);
    *(long *)(lVar9 + 0x2d0) = lVar3;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0x80));
    if (iVar1 == 2) {
      *(undefined1 *)((long)puVar8 + 0x291) = 1;
      FUN_00d7e200(*(undefined8 *)(param_1 + 0x78));
      return 1;
    }
    if (iVar1 == 1) {
      FUN_00d7c010(param_1);
      goto LAB_00d7b604;
    }
    if (iVar1 != 0) {
      return 0;
    }
    lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar9 == 0) {
      uVar5 = FUN_01510f00(0,0x627252f20dde1e67);
    }
    else {
      plVar2 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      uVar5 = FUN_01510f00(lVar9,0x627252f20dde1e67);
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    if ((uVar5 & 1) == 0) goto LAB_00d7b4f4;
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
    plVar2 = (long *)(**(code **)*puVar10)(puVar10);
    if (((*PTR_DAT_02717528 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0)) {
      uVar4 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar4;
      __cxa_guard_release(PTR_DAT_02717528);
    }
    for (; plVar2 != (long *)PTR_DAT_02717530; plVar2 = (long *)*plVar2) {
    }
    FUN_00d70930(&local_48,*(undefined8 *)(puVar10[0x9f] + 0xb0));
    local_58 = -0x50a8cf11dbba213e;
    FUN_0077eb10(local_48,&local_58,puVar8[0x71]);
    (**(code **)(**(long **)(param_1 + 0x80) + 0x88))
              (*(long **)(param_1 + 0x80),puVar8 + 0x66,puVar8 + 0x69);
    lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x5e0) + 0x18);
    lVar3 = *(long *)(lVar9 + 0x2d0);
    *(undefined8 *)(lVar9 + 0x2b8) = 0x81428fd97dfc4999;
    *(undefined1 *)(lVar9 + 0x478) = 0;
    *(char **)(lVar9 + 0x2c0) = "Play_UI_common_report";
    *(undefined8 *)(lVar9 + 0x2d0) = 0;
    *(undefined8 *)(lVar9 + 0x2c8) = 0x15;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x88) = 8;
joined_r0x00d7b4ec:
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    break;
  case 8:
    uVar5 = FUN_010386c0(*(undefined8 *)(param_1 + 0x80));
    if ((uVar5 & 1) != 0) {
      iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0x80));
      *(bool *)((long)puVar8 + 0x292) = iVar1 == 0;
      goto LAB_00d7b4f4;
    }
  }
  return 0;
}


