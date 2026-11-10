/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010653f0; name: FUN_010653f0
 */


void FUN_010653f0(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long local_58;
  long local_50;
  undefined1 auStack_48 [8];
  
  *param_1 = (long)(PTR_DAT_02723b10 + 0x10);
  param_1[1] = param_2;
  plVar6 = param_1 + 2;
  *plVar6 = 0;
  puVar1 = PTR_DAT_02710848;
  param_1[3] = 0;
  lVar5 = *(long *)(*(long *)puVar1 + 0x88);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN_01066d60(&local_50,lVar5);
  FUN_01066db0(&local_58,lVar5);
  lVar4 = FUN_00703b30(auStack_48,param_3,PTR_DAT_02715928);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*plVar6 != 0) {
    (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
    *plVar6 = 0;
  }
  lVar3 = local_50;
  *plVar6 = lVar4;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar4 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar4 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar4 + 0xb0) = 0;
  }
  lVar2 = local_58;
  *(long *)(lVar4 + 0xb0) = lVar3;
  lVar4 = *plVar6;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar4 + 0x130) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar4 + 0x130) + 0x48) + 0x18))();
    *(undefined8 *)(lVar4 + 0x130) = 0;
  }
  *(long *)(lVar4 + 0x130) = lVar2;
  FUN_00701e00(param_1[1],param_1[2]);
  lVar4 = FUN_00703e30(auStack_48,param_3,PTR_DAT_02715930);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  lVar3 = local_50;
  param_1[3] = lVar4;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar4 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar4 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(lVar4 + 0xb0) = 0;
  }
  lVar2 = local_58;
  *(long *)(lVar4 + 0xb0) = lVar3;
  lVar4 = param_1[3];
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar4 + 0x130) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar4 + 0x130) + 0x48) + 0x18))();
    *(undefined8 *)(lVar4 + 0x130) = 0;
  }
  *(long *)(lVar4 + 0x130) = lVar2;
  FUN_00701e00(param_1[1],param_1[3]);
  *(undefined4 *)(param_1[2] + 0x1a8) = 0;
  *(undefined4 *)(param_1[3] + 0x1a8) = 1;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


