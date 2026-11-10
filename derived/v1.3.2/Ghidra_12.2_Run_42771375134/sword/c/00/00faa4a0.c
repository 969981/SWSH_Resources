/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00faa4a0; name: FUN_00faa4a0
 */


void FUN_00faa4a0(long param_1,undefined8 *param_2,long *param_3,long *param_4,undefined4 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long local_58;
  undefined8 local_50;
  undefined8 *local_48;
  
  lVar6 = *param_3;
  local_50 = param_6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar6 = *param_4;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar6;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  uVar3 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  uVar4 = *param_2;
  local_58 = *(long *)(param_1 + 0x60);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_01683be0(&local_48,uVar4,param_5,uVar3,&local_58,1);
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  puVar1 = local_48;
  local_48 = (undefined8 *)0x0;
  *(undefined8 **)(param_1 + 0x68) = puVar1;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_00faa640(param_1);
  *(undefined8 *)(param_1 + 0x78) = local_50;
  local_48 = &local_50;
  lVar6 = FUN_01596730(*(undefined8 *)PTR_DAT_027194d8,&local_48);
  if (lVar6 == 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    *(long *)(param_1 + 0x80) = lVar6;
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  *(undefined8 *)(param_1 + 0x1c8) = param_7;
  return;
}


