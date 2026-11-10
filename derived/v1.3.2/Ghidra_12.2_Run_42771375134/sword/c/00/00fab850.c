/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fab850; name: FUN_00fab850
 */


void FUN_00fab850(long param_1,long *param_2,int param_3,undefined8 *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar3 = FUN_014bca10(*param_2);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (param_3 == 2) {
    lVar5 = *(long *)(*param_2 + 0x60);
    local_58 = param_4;
    if (lVar5 == 0) {
      FUN_0077eb10(0,&local_58,*(undefined8 *)(param_1 + 0xa0));
      goto LAB_00fab93c;
    }
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0077eb10(lVar5,&local_58,*(undefined8 *)(param_1 + 0xa0));
  }
  else {
    if (param_3 != 1) goto LAB_00fab93c;
    lVar5 = *(long *)(*param_2 + 0x60);
    if (lVar5 == 0) {
      FUN_0077e740(0,(ulong)param_4 & 0xffffffff,*(undefined8 *)(param_1 + 0xa0));
      goto LAB_00fab93c;
    }
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0077e740(lVar5,(ulong)param_4 & 0xffffffff,*(undefined8 *)(param_1 + 0xa0));
  }
  (**(code **)(*plVar6 + 0x18))(plVar6);
LAB_00fab93c:
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(lVar5 + 0x1e0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar7 + 0xc0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  plVar6 = *(long **)(param_1 + 8);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar6;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,0x80,8);
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
  }
  FUN_0077d050(lVar7,0x5dc);
  *(long **)(lVar7 + 8) = plVar6;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x80;
  *(undefined8 *)(lVar7 + 0x20) = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN_014c62d0(lVar4,lVar7,*(undefined8 *)(param_1 + 0xa0));
  lVar5 = *(long *)(*(long *)(param_1 + 0x198) + 0x58);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_58 = &local_48;
  local_50 = 0x60dd9a51c30b7a73;
  local_48 = 0;
  FUN_008a0cd0(lVar5,&local_58,0);
  uVar2 = local_48;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1c0);
  local_60 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN_016b4ab0(uVar2,uVar1,&local_60);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x1c0) * 4 + 0x1a4) = param_5;
  *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


