/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011e1ad0; name: FUN_011e1ad0
 */


void FUN_011e1ad0(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4,long *param_5,
                 undefined4 param_6,undefined1 *param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long local_78;
  undefined8 local_70;
  long local_68;
  
  puVar1 = PTR_DAT_02710798;
  lVar6 = *(long *)PTR_DAT_02710798;
  lVar7 = *(long *)(lVar6 + 0x1e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    lVar6 = *(long *)puVar1;
  }
  lVar6 = *(long *)(lVar6 + 0x1f8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN_014b7db0(*param_5,lVar7);
  local_68 = *param_5;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  uVar2 = FUN_014b48d0(param_3,&local_68,param_6,0);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (param_7 != (undefined1 *)0x0) {
    *(undefined4 *)(param_7 + 4) = uVar2;
    *param_7 = 1;
  }
  FUN_01534a40(lVar6,*param_5,0);
  FUN_0087f110(*param_5);
  FUN_00878370(*param_5);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_3;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*param_3 + 0x10))(param_3,0xb8,8);
  if (lVar4 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  FUN_00866110(lVar4,param_3);
  *(long **)(lVar4 + 8) = param_3;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0xb8;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  *param_1 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_00866390(lVar4,*param_5);
  local_70 = 0;
  uVar5 = FUN_0087db70(lVar4,*param_4,(long)&local_70 + 4,&local_70);
  if ((uVar5 & 1) != 0) {
    FUN_0087dc50(lVar4,local_70._4_4_,local_70 & 0xffffffff);
    local_78 = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    uVar2 = FUN_014b48d0(param_3,&local_78,param_6,0);
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    if (param_7 != (undefined1 *)0x0) {
      *(undefined4 *)(param_7 + 0xc) = uVar2;
      param_7[8] = 1;
    }
    uVar2 = FUN_008783b0(lVar4);
    uVar5 = FUN_01534f60(lVar6,uVar2);
    if ((param_7 != (undefined1 *)0x0) && ((uVar5 & 1) == 0)) {
      *(undefined4 *)(param_7 + 0xc) = 0;
      param_7[8] = 1;
    }
    FUN_01534a40(lVar6,lVar4,0);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return;
}


