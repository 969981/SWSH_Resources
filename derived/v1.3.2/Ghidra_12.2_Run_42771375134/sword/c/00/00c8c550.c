/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8c550; name: FUN_00c8c550
 */


void FUN_00c8c550(long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long local_80 [2];
  undefined1 *local_70;
  long local_68;
  long local_60;
  long local_48;
  
  pcVar4 = *(code **)(param_1 + 0x128);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    (*pcVar4)(param_1 + 0x140);
  }
  *(long *)(param_1 + 0x140) = param_1;
  *(long *)(param_1 + 0x148) = param_2;
  *(undefined4 *)(param_1 + 0x150) = param_4;
  puVar1 = PTR_LAB_0271c458;
  *(undefined8 *)(param_1 + 0x158) = param_3;
  puVar3 = PTR_LAB_0271c468;
  puVar2 = PTR_LAB_0271c460;
  *(undefined8 *)(param_1 + 0x120) = puVar1;
  *(undefined **)(param_1 + 0x128) = puVar2;
  puVar1 = PTR_LAB_0271c470;
  *(undefined **)(param_1 + 0x130) = puVar3;
  *(undefined **)(param_1 + 0x138) = puVar1;
  lVar5 = *(long *)(param_1 + 0x118);
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_006e1e70(lVar5,param_1 + 0x110,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_008d48d0(local_80,param_2 + 0x20);
  FUN_00a8a490(&local_48,*(undefined8 *)PTR_DAT_02710788,1,local_80,param_4,param_3,0);
  if (*(long *)(param_1 + 0x118) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x118) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  *(long *)(param_1 + 0x118) = local_48;
  if (local_48 != 0) {
    plVar6 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((*(long *)(param_1 + 0x120) != 0) || (*(long *)(param_1 + 0x1a0) != 0)) {
      FUN_006e1e70(local_48,param_1 + 0x110,1);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  return;
}


