/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a02a10; name: FUN_00a02a10
 */


void FUN_00a02a10(long param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long local_80 [3];
  long local_68;
  long local_58;
  
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  uVar6 = *(undefined8 *)(param_1 + 0x548);
  FUN_006cf0a0(local_80,PTR_DAT_02718d00);
  uVar6 = FUN_0089c480(uVar6,local_80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_00ff86a0(local_80,uVar7,*(undefined4 *)(param_1 + 0x708));
  lVar8 = *(long *)(local_80[0] + 0x60);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  plVar3 = (long *)FUN_00ff5cf0(param_1);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar3;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*plVar3 + 0x10))(plVar3,0x80,8);
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN_0077d050(lVar5,0x20);
  *(long **)(lVar5 + 8) = plVar3;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x80;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  plVar3 = (long *)(lVar5 + 0x48);
  bVar2 = lVar5 != 0;
  if (bVar2) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  FUN_01036e20(uVar6);
  plVar1 = (long *)(lVar8 + 0x48);
  local_58 = lVar5;
  if (lVar8 == 0) {
    local_80[0] = 0x11c8d4e4d9a64640;
    FUN_0077eb10(0,local_80,lVar5);
    if (bVar2) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    FUN_01036db0(uVar6,0,1,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    local_80[0] = 0x11c8d7e4d9a64b59;
    FUN_0077eb10(0,local_80,lVar5);
    local_58 = lVar5;
    if (bVar2) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    FUN_01036db0(uVar6,1,0,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    local_80[0] = 0x11c8d6e4d9a649a6;
    FUN_0077eb10(0,local_80,lVar5);
    local_58 = lVar5;
    if (bVar2) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    FUN_01036db0(uVar6,2,3,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    FUN_01036f70(uVar6);
  }
  else {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(plVar1);
    local_80[0] = 0x11c8d4e4d9a64640;
    FUN_0077eb10(lVar8,local_80,lVar5);
    if (bVar2) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    FUN_01036db0(uVar6,0,1,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))(plVar1);
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(plVar1);
    local_80[0] = 0x11c8d7e4d9a64b59;
    FUN_0077eb10(lVar8,local_80,lVar5);
    local_58 = lVar5;
    if (bVar2) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    FUN_01036db0(uVar6,1,0,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))(plVar1);
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))(plVar1);
    local_80[0] = 0x11c8d6e4d9a649a6;
    FUN_0077eb10(lVar8,local_80,lVar5);
    local_58 = lVar5;
    if (bVar2) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    FUN_01036db0(uVar6,2,3,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
    FUN_01036f70(uVar6);
  }
  if (bVar2) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (lVar8 != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}


