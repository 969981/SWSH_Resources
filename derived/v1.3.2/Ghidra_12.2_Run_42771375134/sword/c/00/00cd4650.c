/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd4650; name: FUN_00cd4650
 */


void FUN_00cd4650(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar7 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar7)(puVar7);
      lVar4 = FUN_00cc9ae0();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar7 = puVar7 + -10;
          goto LAB_00cd46ac;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_00cd46ac:
  *(undefined8 **)(param_1 + 0xc0) = puVar7;
  *(undefined8 *)(param_1 + 0xd0) = puVar7[0xc];
  lVar4 = puVar7[0xd];
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    *(long *)(param_1 + 0xd8) = lVar4;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    puVar7 = *(undefined8 **)(param_1 + 0xc0);
  }
  *(undefined8 *)(param_1 + 200) = puVar7[0xf];
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
  uVar8 = puVar7[0x9f];
  local_60 = 0x786441c0fda6345d;
  local_58 = "MessageView";
  local_50 = 0xb;
  local_48 = 0;
  uVar5 = FUN_00cd5a80(uVar8,&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  local_60 = 0xe6daae8d575019a6;
  local_58 = "ChikaMatchingViewTop";
  local_50 = 0x14;
  local_48 = 0;
  uVar5 = FUN_00cd1d60(uVar8,&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  local_60 = 0x456179196ebfa4e3;
  local_58 = "UndergroundExplorationViewCommtime";
  local_50 = 0x22;
  local_48 = 0;
  uVar5 = FUN_00cd5c70(uVar8,&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  FUN_006cf0a0(&local_60,PTR_DAT_027176e0);
  uVar5 = FUN_0089c480(uVar8,&local_60);
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  puVar1 = PTR_DAT_02710860;
  plVar3 = *(long **)(param_1 + 8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar3;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    lVar6 = (**(code **)(*plVar3 + 0x10))(plVar3,0x80,8);
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0xb8))(plVar3);
    }
    FUN_0077d050(lVar6,0xd);
    *(long **)(lVar6 + 8) = plVar3;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0x80;
    *(undefined8 *)(lVar6 + 0x20) = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0xa0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    *(long *)(param_1 + 0xa0) = lVar6;
    plVar3 = *(long **)(*(long *)PTR_DAT_0271c6e0 + 0x88);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar3;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar6 = (**(code **)(*plVar3 + 0x10))(plVar3,0x90,8);
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0xb8))(plVar3);
      }
      FUN_00883c20(lVar6,plVar3);
      *(long **)(lVar6 + 8) = plVar3;
      *(long *)(lVar6 + 0x10) = lVar6;
      *(undefined8 *)(lVar6 + 0x18) = 0x90;
      *(undefined8 *)(lVar6 + 0x20) = 8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0xb0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xb0) = 0;
      }
      *(long *)(param_1 + 0xb0) = lVar6;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


