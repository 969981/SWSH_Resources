/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c86c0; name: FUN_008c86c0
 */


void FUN_008c86c0(long param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  long alStack_c0 [13];
  long local_58;
  long local_48;
  
  if (*param_2 == -0x340d631b7bddd9bb || *param_2 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x4c0) == 0) {
    return;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (lVar3 == 0) {
    return;
  }
  plVar4 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_e0 = &local_48;
  local_48 = 0;
  local_d8 = (code *)0x18cd1891cbc1757a;
  FUN_008a0cd0(lVar3,&local_e0,0);
  lVar1 = local_48;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar1 == 0) {
    return;
  }
  lVar3 = -7;
  do {
    if (*param_2 != -0x340d631b7bddd9bb && *param_2 != 0) {
      FUN_00ff86a0(&local_e0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),param_3);
      lVar5 = local_e0[0xc];
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (local_e0 != (long *)0x0) {
        (**(code **)(local_e0[9] + 0x18))();
        local_e0 = (long *)0x0;
      }
      FUN_0077eb10(lVar5,param_2,*(undefined8 *)(param_1 + 0x5d0));
      local_58 = *(long *)(param_1 + 0x5d0);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      FUN_016b4ab0(lVar1,(int)lVar3 + 7,&local_58);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
    }
    lVar3 = lVar3 + 1;
    param_2 = param_2 + 1;
  } while (lVar3 != 0);
  pcVar2 = *(code **)(lVar1 + 0x168);
  local_e0 = (long *)&LAB_008cc9e0;
  local_d8 = FUN_008cc9f0;
  local_d0 = FUN_008cca00;
  local_c8 = &LAB_008cca10;
  alStack_c0[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x170) = 0;
    *(undefined8 *)(lVar1 + 0x178) = 0;
    *(undefined8 *)(lVar1 + 0x160) = 0;
    *(undefined8 *)(lVar1 + 0x168) = 0;
    (*pcVar2)(lVar1 + 0x180);
    if (local_d0 == (code *)0x0) goto LAB_008c890c;
  }
  (*local_d0)(alStack_c0,lVar1 + 0x180);
  *(undefined1 **)(lVar1 + 0x178) = local_c8;
  *(code **)(lVar1 + 0x168) = local_d8;
  *(code **)(lVar1 + 0x170) = local_d0;
  *(undefined8 *)(lVar1 + 0x160) = local_e0;
LAB_008c890c:
  pcVar2 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (long *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar2)(alStack_c0);
  }
  return;
}


