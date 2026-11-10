/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108fd80; name: FUN_0108fd80
 */


void FUN_0108fd80(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_58 = PTR_DAT_027240e8 + 0x10;
  local_50 = *(undefined4 *)(param_1 + 0x4d8);
  plVar3 = *(long **)(param_1 + 0x4e8);
  uStack_4c = param_2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,0);
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
  }
  uVar1 = FUN_008783b0(uVar2);
  local_48 = CONCAT44(local_48._4_4_,uVar1);
  plVar3 = *(long **)(param_1 + 0x4e8);
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,1);
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
  }
  uVar1 = FUN_008783b0(uVar2);
  local_48 = CONCAT44(uVar1,(undefined4)local_48);
  plVar3 = *(long **)(param_1 + 0x4e8);
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x10))();
  }
  uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,2);
  if (plVar3 != (long *)0x0) {
    (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
  }
  local_40 = FUN_008783b0(uVar2);
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x2c0);
  if (lVar4 == 0) {
    local_38 = 0;
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    local_38 = lVar4;
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  FUN_01031cc0(&local_58);
  return;
}


