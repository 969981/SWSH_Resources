/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c1fc30; name: FUN_00c1fc30
 */


void FUN_00c1fc30(long *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
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
  undefined1 *local_8a8;
  long local_8a0 [264];
  
  lVar3 = FUN_00c1d960();
  if ((((lVar3 == 0) || (*(long *)PTR_DAT_02716748 == 0)) || (lVar4 = FUN_007ad1c0(), lVar4 == 0))
     || (*(long *)PTR_DAT_027185f8 == 0)) {
    *(undefined4 *)(param_1 + 0x12) = param_3;
  }
  else {
    uVar2 = FUN_0120e800();
    uVar7 = *(undefined8 *)(lVar4 + 0x10);
    uVar5 = FUN_00bd9f20(lVar3);
    if ((param_1[0xd] != 0) &&
       (puVar9 = *(undefined8 **)(param_1[0xd] + 0x60), puVar9 != (undefined8 *)0x0)) {
      plVar6 = (long *)(**(code **)*puVar9)(puVar9);
      lVar3 = FUN_00be66c0();
      for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)lVar3) {
          FUN_00c1ce80(&local_950,puVar9 + -10);
          goto joined_r0x00c1fd68;
        }
      }
    }
    FUN_00c1ce80(&local_950,0);
joined_r0x00c1fd68:
    if ((local_950 != (undefined1 *)0x0) &&
       (puVar9 = *(undefined8 **)(local_950 + 0x60), puVar9 != (undefined8 *)0x0)) {
      plVar6 = (long *)(**(code **)*puVar9)(puVar9);
      lVar3 = FUN_00c22170();
      for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)lVar3) {
          puVar9 = puVar9 + -10;
          goto LAB_00c1fd70;
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
LAB_00c1fd70:
    FUN_00bd9f00(&local_8c0,puVar9);
    uVar10 = (ulong)local_8c0 & 0xffffffff;
    if (local_950 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_950 + 0x48) + 0x18))();
      local_950 = (undefined1 *)0x0;
    }
    (**(code **)(*param_1 + 0x10))(&local_8c8,param_1);
    lVar3 = local_8c8;
    if (local_8c8 == 0) {
      lVar4 = 0;
      local_8a0[0] = 0;
    }
    else {
      plVar6 = (long *)(local_8c8 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      local_8b0 = (undefined1 *)0x0;
      local_8a8 = (undefined1 *)0x0;
      local_8c0 = (undefined1 *)0x0;
      local_8b8 = (code *)0x0;
      local_8a0[0] = lVar3;
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar4 = local_8c8;
    }
    local_8c0 = &LAB_00c22b30;
    local_8b8 = FUN_00c22b50;
    local_8b0 = &LAB_00c22b90;
    local_8a8 = &LAB_00c22bb0;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_940 = (undefined1 *)0x0;
    puStack_938 = (undefined1 *)0x0;
    local_950 = (undefined1 *)0x0;
    local_948 = (code *)0x0;
    local_930 = param_1;
    local_928 = param_3;
    local_920 = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_950 = &LAB_00c22bd0;
    local_948 = FUN_00c22c00;
    local_940 = &LAB_00c22c40;
    puStack_938 = &LAB_00c22c70;
    uVar10 = FUN_0122f460(uVar10,uVar2,uVar7,uVar5,&local_8c0,&local_950);
    pcVar1 = local_948;
    if (local_948 != (code *)0x0) {
      local_940 = (undefined1 *)0x0;
      puStack_938 = (undefined1 *)0x0;
      local_950 = (undefined1 *)0x0;
      local_948 = (code *)0x0;
      (*pcVar1)(&local_930);
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    pcVar1 = local_8b8;
    if (local_8b8 != (code *)0x0) {
      local_8b0 = (undefined1 *)0x0;
      local_8a8 = (undefined1 *)0x0;
      local_8c0 = (undefined1 *)0x0;
      local_8b8 = (code *)0x0;
      (*pcVar1)(local_8a0);
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    puVar8 = *(undefined1 **)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
    if (puVar8 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(puVar8 + 0x48) + 0x10))();
    }
    local_8c0 = puVar8;
    lVar3 = FUN_00fe2800(&local_8c0);
    FUN_012ae720(*(undefined8 *)(lVar3 + 0x80));
    if (local_8c0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_8c0 + 0x48) + 0x18))();
      local_8c0 = (undefined1 *)0x0;
    }
    if ((uVar10 & 1) == 0) {
      param_2 = param_3;
    }
    *(undefined4 *)(param_1 + 0x12) = param_2;
    if (local_8c8 != 0) {
      (**(code **)(*(long *)(local_8c8 + 0x48) + 0x18))();
    }
  }
  return;
}


