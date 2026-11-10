/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fac5f0; name: FUN_00fac5f0
 */


void FUN_00fac5f0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x80);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar5 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar2 = FUN_00fad510(&local_48,*(undefined8 *)(param_1 + 8));
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(long *)(param_1 + 0x60) = lVar2;
  FUN_00fae230(lVar2,param_1 + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 8);
  (**(code **)(**(long **)(param_1 + 0x60) + 0x10))(&local_58);
  local_50 = local_58;
  local_58 = 0;
  local_60 = *(undefined8 *)PTR_PTR_0271e248;
  FUN_00fac930(&local_48,lVar4,uVar6,&local_50,&local_60);
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  uVar6 = local_48;
  local_48 = 0;
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  plVar7 = *(long **)(param_1 + 8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar7;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,0x60,8);
  if (lVar3 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  FUN_01683b10(lVar3,uVar5);
  *(long **)(lVar3 + 8) = plVar7;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x60;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  puVar1 = PTR_DAT_02710798;
  *(long *)(param_1 + 0x78) = lVar3;
  lVar2 = *(long *)(*(long *)puVar1 + 0x208);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = FUN_00fad6d0(&local_48,*(undefined8 *)(param_1 + 8));
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x120) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  *(long *)(param_1 + 0x120) = lVar3;
  uVar5 = *(undefined8 *)(param_1 + 8);
  local_68 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_70 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN_00fa9af0(lVar3,uVar5,&local_68,&local_70,8,0xf8c5e0d4e2fbe901,0xeeb33639f2f81457);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


