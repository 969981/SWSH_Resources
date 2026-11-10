/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a427d0; name: FUN_00a427d0
 */


void FUN_00a427d0(long param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  short sVar4;
  long lVar5;
  long local_f0 [2];
  undefined4 local_e0;
  long local_d8 [2];
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_48;
  
  local_58 = 0;
  lVar5 = *(long *)(param_1 + 0x10);
  local_d8[1] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (code *)0x0;
  local_c0 = 0;
  FUN_0168c190(*(long *)(lVar5 + 1000) + (ulong)*(uint *)(param_1 + 0x7c) * 0x3d0,*param_2,0,
               local_d8 + 1);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d8[1] = 0;
    local_c8 = (code *)0x0;
    (*pcVar3)(&uStack_b0);
  }
  uVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 2);
  if (*(long *)PTR_DAT_02717468 != 0) {
    sVar4 = FUN_008880c0(*(long *)PTR_DAT_02717468,uVar2);
    if (sVar4 != 0) {
      local_48 = *(long *)(param_1 + 0x90);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
      }
      FUN_00a429c0(lVar5,param_1 + 0x98,&local_48,&DAT_021549a8,0,sVar4);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      goto LAB_00a42934;
    }
  }
  local_d8[0] = *(long *)(param_1 + 0x90);
  if (local_d8[0] != 0) {
    (**(code **)(*(long *)(local_d8[0] + 0x48) + 0x10))();
  }
  FUN_008cf360(lVar5,param_1 + 0x98,local_d8,&DAT_021549b0,0,uVar2,uVar1);
  if (local_d8[0] != 0) {
    (**(code **)(*(long *)(local_d8[0] + 0x48) + 0x18))();
    local_d8[0] = 0;
  }
LAB_00a42934:
  local_f0[1] = 0x100000003;
  local_e0 = 1;
  local_f0[0] = *(long *)(param_1 + 0x90);
  if (local_f0[0] != 0) {
    (**(code **)(*(long *)(local_f0[0] + 0x48) + 0x10))();
  }
  FUN_008cf480(lVar5,param_1 + 0xa0,local_f0,&DAT_021549b8,local_f0 + 1,0,uVar1);
  if (local_f0[0] != 0) {
    (**(code **)(*(long *)(local_f0[0] + 0x48) + 0x18))();
  }
  return;
}


