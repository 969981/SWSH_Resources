/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0149fa30; name: FUN_0149fa30
 */


void FUN_0149fa30(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_38;
  
  lVar2 = *(long *)(param_1 + 0x98);
  iVar1 = *(int *)(lVar2 + 0x600);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      uVar5 = 0x5670b4f3f9b82f97;
    }
    else {
      if (iVar1 != 1) {
        FUN_014a0d90();
        return;
      }
      lVar2 = *(long *)(lVar2 + 0x2b0);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      lVar4 = *(long *)(lVar2 + 0x2e0);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      plVar3 = (long *)(**(code **)*puVar7)(puVar7);
      lVar2 = FUN_01481a10();
      for (; plVar3 != (long *)lVar2; plVar3 = (long *)*plVar3) {
      }
      uVar5 = 0x5670b5f3f9b8314a;
      FUN_014c9900(lVar4,0,*(undefined2 *)(puVar7[2] + 0x42),1);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
    }
    local_46 = 0;
    local_58 = 0;
    local_48 = 0x101;
    local_50 = 0;
    lVar2 = *(long *)(*(long *)(param_1 + 0x98) + 0x2b0);
    local_38 = uVar5;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(lVar2 + 0x2e0);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    lVar2 = *(long *)(*(long *)(param_1 + 0x98) + 0x2b0);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar6 = *(long *)(lVar2 + 0x2e8);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    lVar2 = *(long *)(*(long *)(param_1 + 0x98) + 0x2b0);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(lVar2 + 0x2f0);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_02717528 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0)) {
      uVar5 = FUN_00b8c810();
      *(undefined8 *)PTR_DAT_02717530 = uVar5;
      __cxa_guard_release(PTR_DAT_02717528);
    }
    for (; plVar3 != (long *)PTR_DAT_02717530; plVar3 = (long *)*plVar3) {
    }
    FUN_00ff86a0(&local_60,*(undefined8 *)(puVar7[0x9f] + 0xb0),5);
    lVar2 = *(long *)(local_60 + 0x60);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    FUN_0077eb10(lVar2,&local_38,lVar6);
    FUN_014c62d0(lVar4,lVar8,lVar6);
    local_58 = lVar8;
    FUN_01038170(*(undefined8 *)(param_1 + 0xa0),&local_58);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xa0),1);
    *(undefined4 *)(param_1 + 0x78) = 2;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    return;
  }
  if (*(char *)(lVar2 + 0x5d8) == '\0') {
    if (*(char *)(lVar2 + 0x5d9) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x7c) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x7c) = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = 4;
  return;
}


