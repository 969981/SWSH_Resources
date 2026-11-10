/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ac840; name: FUN_014ac840
 */


void FUN_014ac840(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long local_78 [2];
  undefined1 *local_68;
  long local_60;
  long local_58;
  long local_48;
  
  *(byte *)(param_1 + 0x7a0) = param_4 & 1;
  pcVar1 = *(code **)(param_1 + 0x28);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    (*pcVar1)(param_1 + 0x40);
  }
  *(long *)(param_1 + 0x40) = param_1;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x20) = &LAB_014acf00;
  *(undefined1 **)(param_1 + 0x28) = &LAB_014ad730;
  *(undefined1 **)(param_1 + 0x30) = &LAB_014ad8f0;
  *(undefined1 **)(param_1 + 0x38) = &LAB_014ad900;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_006e1e70(lVar2,param_1 + 0x10,1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  FUN_00a9d760(local_78,"bin/archive/g_effect/g_effect.gfpak");
  FUN_006dccd0(&local_48,*(undefined8 *)PTR_DAT_02710788,1,local_78,0,param_3,0);
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(long *)(param_1 + 0x18) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((*(long *)(param_1 + 0x20) != 0) || (*(long *)(param_1 + 0xa0) != 0)) {
      FUN_006e1e70(local_48,param_1 + 0x10,1);
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if ((local_60 != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  local_60 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


