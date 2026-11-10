/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0133ccc0; name: FUN_0133ccc0
 */


void FUN_0133ccc0(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [104];
  long local_68;
  
  local_68 = param_5;
  FUN_01306130(*(undefined8 *)(param_2 + 0x58),1);
  uVar2 = thunk_FUN_012c9150(2,4);
  if (param_5 == -0x340d631b7bddd9bb) {
    FUN_0133cbc0(*param_1,uVar2,param_4 + 0x10);
  }
  else {
    FUN_0133d070(*param_1,uVar2,&local_68);
  }
  lVar5 = *param_1;
  puVar3 = (undefined1 *)FUN_0133ee00(&local_f0,*(undefined8 *)(lVar5 + 8));
  if (puVar3 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar3 + 0x48) + 0x10))();
  }
  local_f0 = puVar3;
  FUN_006d9640(lVar5,&local_f0);
  if (local_f0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    local_f0 = (undefined1 *)0x0;
  }
  FUN_012dfdc0(puVar3,1);
  local_f0 = &LAB_01340e30;
  local_e8 = FUN_01340ec0;
  local_e0 = &LAB_01340ed0;
  puStack_d8 = &LAB_01340ee0;
  FUN_0133e930(param_2,puVar3,0,&local_f0);
  pcVar1 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar1)(auStack_d0);
  }
  local_f0 = &LAB_01340e30;
  local_e8 = FUN_01340ec0;
  local_e0 = &LAB_01340ed0;
  puStack_d8 = &LAB_01340ee0;
  FUN_0133e930(param_2,puVar3,1,&local_f0);
  pcVar1 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar1)(auStack_d0);
  }
  local_f0 = &LAB_01340ef0;
  local_e8 = FUN_01340f60;
  local_e0 = &LAB_01340f70;
  puStack_d8 = &LAB_01340f80;
  FUN_0133e930(param_2,puVar3,2,&local_f0);
  pcVar1 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar1)(auStack_d0);
  }
  lVar5 = *param_1;
  puVar3 = (undefined1 *)FUN_0133f260(&local_f0,*(undefined8 *)(lVar5 + 8),param_2 + 0x60);
  if (puVar3 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar3 + 0x48) + 0x10))();
  }
  local_f0 = puVar3;
  FUN_006d9640(lVar5,&local_f0);
  if (local_f0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    local_f0 = (undefined1 *)0x0;
  }
  lVar5 = *param_1;
  puVar3 = (undefined1 *)FUN_01340720(&local_f0,*(undefined8 *)(lVar5 + 8));
  if (puVar3 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar3 + 0x48) + 0x10))();
  }
  local_f0 = puVar3;
  FUN_006d9640(lVar5,&local_f0);
  if (local_f0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    local_f0 = (undefined1 *)0x0;
  }
  local_f0 = (undefined1 *)CONCAT71(local_f0._1_7_,(char)param_3);
  lVar5 = FUN_01340f90(*param_1,*(undefined8 *)(*param_1 + 8),&local_f0,param_4);
  puVar3 = (undefined1 *)FUN_01340640(&local_f0,*(undefined8 *)(lVar5 + 8));
  if (puVar3 == (undefined1 *)0x0) {
    local_f0 = (undefined1 *)0x0;
  }
  else {
    plVar4 = (long *)(puVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    local_f0 = puVar3;
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  FUN_01310530(lVar5,&local_f0);
  if (local_f0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    local_f0 = (undefined1 *)0x0;
  }
  if (puVar3 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar3 + 0x48) + 0x18))(puVar3 + 0x48);
  }
  puVar3 = (undefined1 *)FUN_01340a70(&local_f0,*(undefined8 *)(lVar5 + 8));
  if (puVar3 == (undefined1 *)0x0) {
    local_f0 = (undefined1 *)0x0;
  }
  else {
    plVar4 = (long *)(puVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    local_f0 = puVar3;
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  FUN_01310530(lVar5,&local_f0);
  if (local_f0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    local_f0 = (undefined1 *)0x0;
  }
  if (puVar3 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar3 + 0x48) + 0x18))(puVar3 + 0x48);
  }
  if (param_3 == 0) {
    FUN_0130a610(lVar5,1);
  }
  return;
}


