/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0133c6b0; name: FUN_0133c6b0
 */


void FUN_0133c6b0(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 auStack_c0 [96];
  undefined8 local_58;
  
  local_58 = param_3;
  FUN_01306130(*(undefined8 *)(param_2 + 0x58),1);
  uVar3 = thunk_FUN_012c9150(2,4);
  FUN_0133cbc0(*param_1,uVar3,param_4 + 0x10);
  lVar6 = *param_1;
  puVar4 = (undefined1 *)FUN_0133ee00(&local_e0,*(undefined8 *)(lVar6 + 8));
  if (puVar4 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar4 + 0x48) + 0x10))();
  }
  local_e0 = puVar4;
  FUN_006d9640(lVar6,&local_e0);
  if (local_e0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = (undefined1 *)0x0;
  }
  FUN_012dfdc0(puVar4,1);
  local_e0 = &LAB_01340800;
  local_d8 = FUN_01340890;
  local_d0 = &LAB_013408a0;
  puStack_c8 = &LAB_013408b0;
  FUN_0133e930(param_2,puVar4,0,&local_e0);
  pcVar1 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined1 *)0x0;
    puStack_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar1)(auStack_c0);
  }
  local_e0 = &LAB_01340800;
  local_d8 = FUN_01340890;
  local_d0 = &LAB_013408a0;
  puStack_c8 = &LAB_013408b0;
  FUN_0133e930(param_2,puVar4,1,&local_e0);
  pcVar1 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined1 *)0x0;
    puStack_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar1)(auStack_c0);
  }
  local_e0 = &LAB_013408c0;
  local_d8 = FUN_01340930;
  local_d0 = &LAB_01340940;
  puStack_c8 = &LAB_01340950;
  FUN_0133e930(param_2,puVar4,2,&local_e0);
  pcVar1 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined1 *)0x0;
    puStack_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar1)(auStack_c0);
  }
  lVar6 = *param_1;
  puVar4 = (undefined1 *)FUN_0133f260(&local_e0,*(undefined8 *)(lVar6 + 8),param_2 + 0x60);
  if (puVar4 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar4 + 0x48) + 0x10))();
  }
  local_e0 = puVar4;
  FUN_006d9640(lVar6,&local_e0);
  if (local_e0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = (undefined1 *)0x0;
  }
  lVar6 = *param_1;
  puVar4 = (undefined1 *)FUN_01340720(&local_e0,*(undefined8 *)(lVar6 + 8));
  if (puVar4 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar4 + 0x48) + 0x10))();
  }
  local_e0 = puVar4;
  FUN_006d9640(lVar6,&local_e0);
  if (local_e0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = (undefined1 *)0x0;
  }
  lVar6 = FUN_01340960(*param_1,*(undefined8 *)(*param_1 + 8),&local_58,param_4);
  puVar4 = (undefined1 *)FUN_01340640(&local_e0,*(undefined8 *)(lVar6 + 8));
  if (puVar4 == (undefined1 *)0x0) {
    local_e0 = (undefined1 *)0x0;
  }
  else {
    plVar5 = (long *)(puVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_e0 = puVar4;
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_01310530(lVar6,&local_e0);
  if (local_e0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = (undefined1 *)0x0;
  }
  if (puVar4 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar4 + 0x48) + 0x18))(puVar4 + 0x48);
  }
  puVar4 = (undefined1 *)FUN_01340a70(&local_e0,*(undefined8 *)(lVar6 + 8));
  if (puVar4 == (undefined1 *)0x0) {
    local_e0 = (undefined1 *)0x0;
  }
  else {
    plVar5 = (long *)(puVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_e0 = puVar4;
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_01310530(lVar6,&local_e0);
  if (local_e0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = (undefined1 *)0x0;
  }
  if (puVar4 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar4 + 0x48) + 0x18))(puVar4 + 0x48);
  }
  puVar4 = (undefined1 *)FUN_01340b60(&local_e0,*(undefined8 *)(lVar6 + 8));
  if (puVar4 == (undefined1 *)0x0) {
    local_e0 = (undefined1 *)0x0;
  }
  else {
    plVar5 = (long *)(puVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_e0 = puVar4;
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_01310530(lVar6,&local_e0);
  if (local_e0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = (undefined1 *)0x0;
  }
  if (puVar4 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar4 + 0x48) + 0x18))(puVar4 + 0x48);
  }
  puVar4 = (undefined1 *)FUN_01340c50(&local_e0,*(undefined8 *)(lVar6 + 8));
  if (puVar4 == (undefined1 *)0x0) {
    local_e0 = (undefined1 *)0x0;
  }
  else {
    plVar5 = (long *)(puVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_e0 = puVar4;
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_01310530(lVar6,&local_e0);
  if (local_e0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = (undefined1 *)0x0;
  }
  if (puVar4 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar4 + 0x48) + 0x18))(puVar4 + 0x48);
  }
  puVar4 = (undefined1 *)FUN_01340d40(&local_e0,*(undefined8 *)(lVar6 + 8));
  if (puVar4 == (undefined1 *)0x0) {
    local_e0 = (undefined1 *)0x0;
  }
  else {
    plVar5 = (long *)(puVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_e0 = puVar4;
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FUN_01310530(lVar6,&local_e0);
  if (local_e0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = (undefined1 *)0x0;
  }
  if (puVar4 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar4 + 0x48) + 0x18))(puVar4 + 0x48);
  }
  cVar2 = FUN_0120e630(*(undefined8 *)PTR_DAT_027185f8,local_58);
  if (cVar2 == '\0') {
    FUN_0130a610(lVar6,1);
  }
  return;
}


