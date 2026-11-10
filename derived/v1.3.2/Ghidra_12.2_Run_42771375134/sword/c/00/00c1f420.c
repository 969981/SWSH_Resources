/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c1f420; name: FUN_00c1f420
 */


void FUN_00c1f420(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *local_950;
  code *local_948;
  undefined1 *local_940;
  undefined1 *puStack_938;
  long *local_930;
  undefined4 local_928;
  long local_920;
  long local_8c8;
  undefined1 *local_8c0;
  code *local_8b8;
  undefined1 *local_8b0;
  undefined1 *puStack_8a8;
  long *local_8a0;
  undefined4 local_898;
  long local_890;
  
  if ((param_1[0xd] != 0) &&
     (puVar7 = *(undefined8 **)(param_1[0xd] + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    lVar4 = FUN_00be66c0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        FUN_00c1ce80(&local_950,puVar7 + -10);
        goto joined_r0x00c1f4e8;
      }
    }
  }
  FUN_00c1ce80(&local_950,0);
joined_r0x00c1f4e8:
  if ((local_950 != (undefined1 *)0x0) &&
     (puVar7 = *(undefined8 **)(local_950 + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    lVar4 = FUN_00c22170();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar7 = puVar7 + -10;
        goto LAB_00c1f4f0;
      }
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_00c1f4f0:
  FUN_00bd9f00(&local_8c0,puVar7);
  uVar8 = (ulong)local_8c0 & 0xffffffff;
  if (local_950 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_950 + 0x48) + 0x18))();
    local_950 = (undefined1 *)0x0;
  }
  if ((param_1[0xd] != 0) &&
     (puVar7 = *(undefined8 **)(param_1[0xd] + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    lVar4 = FUN_00be66c0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        FUN_00c1ce80(&local_8c0,puVar7 + -10);
        goto joined_r0x00c1f5b4;
      }
    }
  }
  FUN_00c1ce80(&local_8c0,0);
joined_r0x00c1f5b4:
  if ((local_8c0 != (undefined1 *)0x0) &&
     (puVar7 = *(undefined8 **)(local_8c0 + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    lVar4 = FUN_00c22170();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        uVar5 = FUN_00bd9f20(puVar7 + -10);
        goto joined_r0x00c1f7f0;
      }
    }
  }
  uVar5 = FUN_00bd9f20(0);
joined_r0x00c1f7f0:
  if (local_8c0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_8c0 + 0x48) + 0x18))();
    local_8c0 = (undefined1 *)0x0;
  }
  (**(code **)(*param_1 + 0x10))(&local_8c8,param_1);
  lVar4 = local_8c8;
  if (local_8c8 == 0) {
    lVar10 = 0;
  }
  else {
    (**(code **)(*(long *)(local_8c8 + 0x48) + 0x10))();
    lVar10 = local_8c8;
    if (local_8c8 != 0) {
      (**(code **)(*(long *)(local_8c8 + 0x48) + 0x10))();
      bVar1 = false;
      goto LAB_00c1f630;
    }
  }
  bVar1 = true;
LAB_00c1f630:
  local_8b0 = (undefined1 *)0x0;
  puStack_8a8 = (undefined1 *)0x0;
  local_890 = lVar4;
  local_8c0 = (undefined1 *)0x0;
  local_8b8 = (code *)0x0;
  local_8a0 = param_1;
  local_898 = param_3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_8c0 = &LAB_00c22980;
  local_8b8 = FUN_00c229c0;
  local_8b0 = &LAB_00c22a00;
  puStack_8a8 = &LAB_00c22a30;
  local_940 = (undefined1 *)0x0;
  puStack_938 = (undefined1 *)0x0;
  local_950 = (undefined1 *)0x0;
  local_948 = (code *)0x0;
  local_930 = param_1;
  local_928 = param_4;
  local_920 = lVar10;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  local_950 = &LAB_00c22a60;
  local_948 = FUN_00c22a90;
  local_940 = &LAB_00c22ad0;
  puStack_938 = &LAB_00c22b00;
  uVar8 = FUN_01230520(uVar8,uVar5,&local_8c0,&local_950);
  pcVar2 = local_948;
  if (local_948 != (code *)0x0) {
    local_940 = (undefined1 *)0x0;
    puStack_938 = (undefined1 *)0x0;
    local_950 = (undefined1 *)0x0;
    local_948 = (code *)0x0;
    (*pcVar2)(&local_930);
  }
  pcVar2 = local_8b8;
  if (local_8b8 != (code *)0x0) {
    local_8b0 = (undefined1 *)0x0;
    puStack_8a8 = (undefined1 *)0x0;
    local_8c0 = (undefined1 *)0x0;
    local_8b8 = (code *)0x0;
    (*pcVar2)(&local_8a0);
  }
  puVar9 = *(undefined1 **)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (puVar9 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar9 + 0x48) + 0x10))();
  }
  local_8c0 = puVar9;
  lVar6 = FUN_00fe2800(&local_8c0);
  FUN_012ae720(*(undefined8 *)(lVar6 + 0x80));
  if (local_8c0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_8c0 + 0x48) + 0x18))();
    local_8c0 = (undefined1 *)0x0;
  }
  if ((uVar8 & 1) == 0) {
    param_2 = param_4;
  }
  *(undefined4 *)(param_1 + 0x12) = param_2;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (local_8c8 != 0) {
    (**(code **)(*(long *)(local_8c8 + 0x48) + 0x18))();
  }
  return;
}


