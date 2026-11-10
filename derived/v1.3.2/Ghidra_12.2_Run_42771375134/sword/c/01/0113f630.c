/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0113f630; name: FUN_0113f630
 */


void FUN_0113f630(long param_1,int param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *local_1c0;
  code *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  long alStack_1a0 [12];
  code *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long alStack_120 [12];
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  
  if (*(int *)(param_1 + 0x6ac) == param_2) {
    return;
  }
  local_b0 = &LAB_01143670;
  local_c0 = FUN_011435d0;
  local_b8 = FUN_01143660;
  lVar1 = param_1 + 0x100;
  local_a8 = &LAB_01143680;
  alStack_a0[0] = param_1;
  switch(*(int *)(param_1 + 0x6ac)) {
  case 0:
    if (param_2 == 2) {
      puVar4 = &DAT_021657f8;
      puVar5 = &UNK_02165800;
    }
    else {
      if (param_2 != 1) break;
      puVar4 = &DAT_02165740;
      puVar5 = &DAT_02165748;
    }
    goto LAB_0113f7c8;
  case 1:
    if (param_2 == 2) {
      local_128 = &LAB_01143680;
      puVar5 = &DAT_02165810;
      if (*(char *)(param_1 + 0x6b4) != '\0') {
        puVar5 = &DAT_02165808;
      }
      local_138 = FUN_01143660;
      local_130 = &LAB_01143670;
      local_140 = FUN_011435d0;
      alStack_120[0] = param_1;
      FUN_00ffd120(lVar1,puVar5,&local_140);
      pcVar2 = local_138;
      if (local_138 != (code *)0x0) {
        local_130 = (undefined1 *)0x0;
        local_128 = (undefined1 *)0x0;
        local_140 = (code *)0x0;
        local_138 = (code *)0x0;
        (*pcVar2)(alStack_120);
      }
    }
    break;
  case 2:
    if (param_2 == 3) {
      if (*(char *)(param_1 + 0x6b4) != '\0') {
        *(undefined1 *)(param_1 + 0x6e0) = 1;
        uVar3 = FUN_00ffdef0(lVar1,&DAT_021659b8);
        FUN_016b2da0(uVar3,*(byte *)(param_1 + 0x6e1) & *(byte *)(param_1 + 0x6e0) &
                           *(byte *)(param_1 + 0x6e2));
      }
    }
    else if ((param_2 == 1) && (*(char *)(param_1 + 0x6b4) != '\0')) {
      local_1a8 = &LAB_01143680;
      local_1c0 = FUN_011435d0;
      local_1b8 = FUN_01143660;
      local_1b0 = &LAB_01143670;
      alStack_1a0[0] = param_1;
      FUN_00ffd120(lVar1,&DAT_02165818,&local_1c0);
      pcVar2 = local_1b8;
      if (local_1b8 != (code *)0x0) {
        local_1b0 = (undefined1 *)0x0;
        local_1a8 = (undefined1 *)0x0;
        local_1c0 = (code *)0x0;
        local_1b8 = (code *)0x0;
        (*pcVar2)(alStack_1a0);
      }
    }
    break;
  case 3:
    if (param_2 != 1) break;
    puVar4 = &DAT_02165740;
    puVar5 = &DAT_02165810;
LAB_0113f7c8:
    if (*(char *)(param_1 + 0x6b4) != '\0') {
      puVar5 = puVar4;
    }
    FUN_00ffd010(lVar1,puVar5);
  }
  *(int *)(param_1 + 0x6ac) = param_2;
  *(undefined2 *)(param_1 + 0x6b5) = 0;
  FUN_0113fc80(param_1);
  FUN_00ffcad0(lVar1,1);
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar2)(alStack_a0);
  }
  return;
}


