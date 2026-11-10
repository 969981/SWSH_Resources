/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f60c0; name: FUN_014f60c0
 */


void FUN_014f60c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined1 *local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  long local_c0 [13];
  long local_58;
  
  FUN_014bb440(&local_e0,&DAT_026a7dc0);
  puVar1 = PTR_DAT_02710788;
  FUN_006dccd0(&local_58,*(undefined8 *)PTR_DAT_02710788,1,&local_e0,0,param_2,0);
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  lVar4 = local_58;
  *(long *)(param_1 + 8) = local_58;
  if (local_58 != 0) {
    plVar3 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((*(long *)(param_1 + 0x10) != 0) || (*(long *)(param_1 + 0x90) != 0)) {
      FUN_006e1e70(lVar4,param_1,1);
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if ((local_c8 != (undefined1 *)0x0) && (local_e0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_e0 = (undefined1 *)0x0;
  local_d8 = (code *)0xcbf29ce484222645;
  local_d0 = (code *)&DAT_01d38550;
  local_c8 = (undefined1 *)0x0;
  if (local_c0[0] != 0) {
    (**(code **)(*(long *)(local_c0[0] + 0x48) + 0x18))();
  }
  local_e0 = &LAB_014f6b10;
  local_d8 = FUN_014f6c70;
  local_d0 = FUN_014f6c80;
  local_c8 = &LAB_014f6c90;
  pcVar2 = *(code **)(param_1 + 0x18);
  local_c0[0] = param_1;
  if (pcVar2 == (code *)0x0) {
LAB_014f6238:
    (*local_d0)(local_c0,param_1 + 0x30);
    *(undefined1 **)(param_1 + 0x28) = local_c8;
    *(code **)(param_1 + 0x18) = local_d8;
    *(code **)(param_1 + 0x20) = local_d0;
    *(undefined8 *)(param_1 + 0x10) = local_e0;
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    (*pcVar2)(param_1 + 0x30);
    if (local_d0 != (code *)0x0) goto LAB_014f6238;
  }
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_006e1e70(lVar4,param_1,1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  pcVar2 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar2)(local_c0);
  }
  FUN_014bb440(&local_e0,&DAT_026a7dd8);
  FUN_006dccd0(&local_58,*(undefined8 *)puVar1,1,&local_e0,0,param_2,0);
  if (*(long *)(param_1 + 0x118) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x118) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  *(long *)(param_1 + 0x118) = local_58;
  if (local_58 != 0) {
    plVar3 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((*(long *)(param_1 + 0x120) != 0) || (*(long *)(param_1 + 0x1a0) != 0)) {
      FUN_006e1e70(local_58,param_1 + 0x110,1);
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if ((local_c8 != (undefined1 *)0x0) && (local_e0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_e0 = (undefined1 *)0x0;
  local_d8 = (code *)0xcbf29ce484222645;
  local_d0 = (code *)&DAT_01d38550;
  local_c8 = (undefined1 *)0x0;
  if (local_c0[0] != 0) {
    (**(code **)(*(long *)(local_c0[0] + 0x48) + 0x18))();
  }
  local_e0 = &LAB_014f6ca0;
  local_d8 = FUN_014f6e00;
  local_d0 = FUN_014f6e10;
  local_c8 = &LAB_014f6e20;
  pcVar2 = *(code **)(param_1 + 0x128);
  local_c0[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    (*pcVar2)(param_1 + 0x140);
    if (local_d0 == (code *)0x0) goto LAB_014f641c;
  }
  (*local_d0)(local_c0,param_1 + 0x140);
  *(undefined1 **)(param_1 + 0x138) = local_c8;
  *(code **)(param_1 + 0x128) = local_d8;
  *(code **)(param_1 + 0x130) = local_d0;
  *(undefined8 *)(param_1 + 0x120) = local_e0;
LAB_014f641c:
  lVar4 = *(long *)(param_1 + 0x118);
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_006e1e70(lVar4,param_1 + 0x110,1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  pcVar2 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar2)(local_c0);
  }
  return;
}


