/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ed920; name: FUN_014ed920
 */


void FUN_014ed920(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_014ed97c:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar7 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar7)(puVar7);
      lVar4 = FUN_014dd1a0();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar7 = puVar7 + -10;
          goto LAB_014ed980;
        }
      }
      goto LAB_014ed97c;
    }
  }
LAB_014ed980:
  FUN_014e19d0(&local_70,puVar7);
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(long *)(param_1 + 0x88) = local_70;
  FUN_014e19f0(&local_70,puVar7);
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(long *)(param_1 + 0x90) = local_70;
  FUN_014e1a10(&local_70,puVar7);
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  *(long *)(param_1 + 0x98) = local_70;
  FUN_014e1a30(&local_70,puVar7);
  if (*(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  *(long *)(param_1 + 0xa0) = local_70;
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar3 = (long *)(**(code **)*puVar7)(puVar7);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02717528), iVar2 != 0))
  {
    uVar5 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar5;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar3 != (long *)PTR_DAT_02717530; plVar3 = (long *)*plVar3) {
  }
  lVar4 = puVar7[0x9f];
  local_70 = 0x450dce9042b6a3f0;
  local_68 = "ViewTeamDetail";
  local_60 = 0xe;
  local_58 = 0;
  uVar5 = FUN_014df390(lVar4,&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  if (*(long *)(param_1 + 0x90) == 0) {
    local_70 = 0;
    uVar5 = FUN_014e7530();
  }
  else {
    FUN_014dd710(&local_70);
    uVar5 = FUN_014e7530(local_70);
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  FUN_014f15b0(*(undefined8 *)(param_1 + 0xa8),uVar5);
  plVar1 = *(long **)(lVar4 + 0x80);
  uVar5 = *(undefined8 *)(lVar4 + 0xb0);
  for (plVar3 = *(long **)(lVar4 + 0x78); plVar1 != plVar3; plVar3 = plVar3 + 1) {
    FUN_006cf0c0(&local_70,*plVar3 + 0x5c0);
    lVar8 = local_70;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar8 == 0x3399e3ad6fe0c75b) {
      if (*(long **)(lVar4 + 0x80) == plVar3) goto LAB_014edbc4;
      goto LAB_014edb80;
    }
  }
  plVar3 = plVar1;
  if (*(long **)(lVar4 + 0x80) != plVar1) {
LAB_014edb80:
    lVar8 = *plVar3;
    if (lVar8 != 0) {
      uVar6 = FUN_008a3e00(lVar8 + 0x50);
      if ((uVar6 & 1) == 0) {
        lVar8 = 0;
      }
      goto LAB_014edbc8;
    }
  }
LAB_014edbc4:
  lVar8 = 0;
LAB_014edbc8:
  FUN_014e2190(param_1 + 0xb0,uVar5,lVar8);
  local_70 = 0x3fddc39d3b3e24f1;
  local_68 = "View_OptionBar";
  local_60 = 0xe;
  local_58 = 0;
  uVar5 = FUN_0089c480(lVar4,&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  *(undefined8 *)(param_1 + 0x2d0) = uVar5;
  FUN_014edd10(param_1);
  FUN_014f1510(*(undefined8 *)(param_1 + 0xa8),1);
  FUN_014f1ec0(*(undefined8 *)(param_1 + 0xa8));
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xa8),0);
  if (*(long *)(param_1 + 0x98) == 0) {
    local_70 = 0;
    FUN_014de920(0,5);
  }
  else {
    FUN_014dde40(&local_70);
    FUN_014de920(local_70,5);
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  FUN_01036f70(*(undefined8 *)(param_1 + 0x2d0));
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}


