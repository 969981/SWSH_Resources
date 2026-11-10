/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c4c50; name: FUN_008c4c50
 */


void FUN_008c4c50(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  long *local_40;
  undefined8 local_38;
  long local_28;
  
  local_c0 = (undefined1 *)0x61459802c149500e;
  uVar3 = FUN_0103bca0(*(undefined8 *)(param_1 + 0x2b0),&local_c0);
  lVar4 = FUN_019c1410(uVar3,"color_select");
  lVar5 = FUN_019c1410(uVar3,"color_unselect");
  *(char *)(param_1 + 0x788) = (char)*(undefined4 *)(lVar4 + (ulong)*(uint *)(lVar4 + 4));
  *(char *)(param_1 + 0x78c) = (char)*(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4));
  *(char *)(param_1 + 0x789) = (char)*(undefined4 *)(lVar4 + (ulong)*(uint *)(lVar4 + 4) + 4);
  *(char *)(param_1 + 0x78d) = (char)*(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 4);
  *(char *)(param_1 + 0x78a) = (char)*(undefined4 *)(lVar4 + (ulong)*(uint *)(lVar4 + 4) + 8);
  uVar1 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 8);
  *(undefined1 *)(param_1 + 0x78b) = 0xff;
  *(undefined1 *)(param_1 + 0x78f) = 0xff;
  *(char *)(param_1 + 0x78e) = (char)uVar1;
  local_c0 = &LAB_008cc7a0;
  local_b8 = FUN_008cc9b0;
  local_b0 = FUN_008cc9c0;
  local_a8 = &LAB_008cc9d0;
  alStack_a0[0] = param_1;
  if (*(long *)(param_1 + 0x4c0) == 0) {
    lVar4 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    lVar4 = 0;
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar5 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      local_40 = &local_28;
      local_28 = 0;
      local_38 = 0x18cd1891cbc1757a;
      FUN_008a0cd0(lVar5,&local_40,0);
      lVar4 = local_28;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        pcVar6 = *(code **)(lVar4 + 0x498);
        goto joined_r0x008c4dec;
      }
    }
  }
  pcVar6 = *(code **)(lVar4 + 0x498);
joined_r0x008c4dec:
  puVar2 = (undefined8 *)(lVar4 + 0x490);
  if (pcVar6 != (code *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    (*pcVar6)(lVar4 + 0x4b0);
  }
  if (local_b0 != (code *)0x0) {
    (*local_b0)(alStack_a0,lVar4 + 0x4b0);
    puVar2[3] = local_a8;
    puVar2[1] = local_b8;
    puVar2[2] = local_b0;
    *puVar2 = local_c0;
  }
  pcVar6 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar6)(alStack_a0);
  }
  return;
}


