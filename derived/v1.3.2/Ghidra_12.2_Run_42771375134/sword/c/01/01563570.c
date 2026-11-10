/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01563570; name: FUN_01563570
 */


void FUN_01563570(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_88 [24];
  long local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  lVar5 = *(long *)(param_1[0x6e] + 0x1c8);
  local_38 = param_2;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  puVar2 = (undefined8 *)FUN_01564580(lVar5,&local_38);
  local_58 = *puVar2;
  local_50 = puVar2[1];
  local_48 = puVar2[2];
  local_40 = puVar2[3];
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  lVar5 = *(long *)(param_1[0x6e] + 0x1c0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_60 = thunk_FUN_015a9d60(lVar5,param_1[1],3,&local_58);
  FUN_015a9fa0(&local_68,lVar5,&local_60);
  uVar3 = (**(code **)(*local_68 + 0x40))();
  uVar4 = (**(code **)(*local_68 + 0x50))();
  FUN_006cf0c0(auStack_88,local_68 + 0xd);
  FUN_01564ee0(param_1,uVar3,uVar4,auStack_88);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  uVar3 = local_38;
  *(undefined1 *)(param_1 + 0x50) = 1;
  uVar1 = FUN_01564f90(param_1);
  (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  FUN_01564f20(param_1,uVar3);
  FUN_0076ce70(param_1);
  (**(code **)(*param_1 + 0x60))(param_1);
  FUN_015aa2b0(lVar5,&local_60);
  if (local_68 != (long *)0x0) {
    (**(code **)(local_68[9] + 0x18))();
    local_68 = (long *)0x0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


