/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b0e30; name: FUN_010b0e30
 */


void FUN_010b0e30(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [12];
  long *local_50;
  undefined8 local_48;
  long local_38;
  
  local_d0 = (undefined1 *)0x61459802c149500e;
  uVar3 = FUN_0103bca0(*(undefined8 *)(param_1 + 0x2b0),&local_d0);
  lVar4 = FUN_019c1410(uVar3,"color_select");
  lVar5 = FUN_019c1410(uVar3,"color_unselect");
  *(char *)(param_1 + 0x710) = (char)*(undefined4 *)(lVar4 + (ulong)*(uint *)(lVar4 + 4));
  *(char *)(param_1 + 0x714) = (char)*(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4));
  *(char *)(param_1 + 0x711) = (char)*(undefined4 *)(lVar4 + (ulong)*(uint *)(lVar4 + 4) + 4);
  *(char *)(param_1 + 0x715) = (char)*(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 4);
  plVar7 = *(long **)(param_1 + 8);
  *(char *)(param_1 + 0x712) = (char)*(undefined4 *)(lVar4 + (ulong)*(uint *)(lVar4 + 4) + 8);
  uVar1 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4) + 8);
  plVar9 = *(long **)(param_1 + 0x2b0);
  *(undefined1 *)(param_1 + 0x713) = 0xff;
  *(undefined1 *)(param_1 + 0x717) = 0xff;
  *(char *)(param_1 + 0x716) = (char)uVar1;
  local_d0 = &LAB_010b5350;
  local_c8 = FUN_010b5560;
  local_c0 = FUN_010b5570;
  local_b8 = &LAB_010b5580;
  alStack_b0[0] = param_1;
  if (plVar9 != (long *)0x0) {
    (**(code **)(plVar9[9] + 0x10))();
  }
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar7;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0x60,8);
  if (lVar5 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  local_50 = plVar9;
  FUN_01683490(lVar5,&local_50);
  if (local_50 != (long *)0x0) {
    (**(code **)(local_50[9] + 0x18))();
    local_50 = (long *)0x0;
  }
  *(long **)(lVar5 + 8) = plVar7;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x60;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x4c0) == 0) {
    lVar4 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    lVar4 = 0;
    if (lVar8 != 0) {
      plVar7 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar8 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      local_50 = &local_38;
      local_38 = 0;
      local_48 = 0x18cd1891cbc1757a;
      FUN_008a0cd0(lVar8,&local_50,0);
      lVar4 = local_38;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
        pcVar6 = *(code **)(lVar4 + 0x498);
        goto joined_r0x010b10a4;
      }
    }
  }
  pcVar6 = *(code **)(lVar4 + 0x498);
joined_r0x010b10a4:
  puVar2 = (undefined8 *)(lVar4 + 0x490);
  if (pcVar6 != (code *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    (*pcVar6)(lVar4 + 0x4b0);
  }
  if (local_c0 != (code *)0x0) {
    (*local_c0)(alStack_b0,lVar4 + 0x4b0);
    puVar2[3] = local_b8;
    puVar2[1] = local_c8;
    puVar2[2] = local_c0;
    *puVar2 = local_d0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar4 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar4 + 0x98) + 0x48) + 0x18))();
    *(undefined8 *)(lVar4 + 0x98) = 0;
  }
  *(long *)(lVar4 + 0x98) = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  pcVar6 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar6)(alStack_b0);
  }
  return;
}


