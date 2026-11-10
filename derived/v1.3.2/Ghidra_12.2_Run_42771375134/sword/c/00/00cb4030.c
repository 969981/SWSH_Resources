/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb4030; name: FUN_00cb4030
 */


void FUN_00cb4030(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  *(undefined1 *)(param_1 + 400) = 0;
  pcVar4 = *(code **)(param_1 + 0x28);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    (*pcVar4)(param_1 + 0x40);
  }
  *(long *)(param_1 + 0x40) = param_1;
  puVar1 = PTR_LAB_0271c5b0;
  *(undefined8 *)(param_1 + 0x48) = param_4;
  puVar3 = PTR_LAB_0271c5c0;
  puVar2 = PTR_LAB_0271c5b8;
  *(undefined8 *)(param_1 + 0x20) = puVar1;
  *(undefined **)(param_1 + 0x28) = puVar2;
  puVar1 = PTR_LAB_0271c5c8;
  *(undefined **)(param_1 + 0x30) = puVar3;
  *(undefined **)(param_1 + 0x38) = puVar1;
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_006e1e70(lVar5,param_1 + 0x10,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN_008d48d0(local_80,param_2);
  FUN_006dccd0(&local_48,*(undefined8 *)PTR_DAT_02710788,1,local_80,0,param_3,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(long *)(param_1 + 0x18) = local_48;
  if (local_48 != 0) {
    plVar6 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((*(long *)(param_1 + 0x20) != 0) || (*(long *)(param_1 + 0xa0) != 0)) {
      FUN_006e1e70(local_48,param_1 + 0x10,1);
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


