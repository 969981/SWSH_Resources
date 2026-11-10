/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c43070; name: FUN_00c43070
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0x00000070 : 0x00c431a8 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00c43070(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *local_2e0;
  code *local_2d8;
  undefined1 *local_2d0;
  undefined1 *puStack_2c8;
  long *local_2c0;
  undefined4 local_2b8;
  long local_2b0;
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  undefined1 *puStack_248;
  long *local_240;
  undefined4 local_238;
  long local_230;
  long local_1d8;
  long local_1d0;
  char local_1c8;
  undefined8 local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  long local_1a8;
  undefined1 auStack_1a0 [54];
  undefined1 auStack_16a [266];
  
  if ((param_1[0xd] != 0) &&
     (puVar8 = *(undefined8 **)(param_1[0xd] + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar8)(puVar8);
    lVar5 = FUN_00be66c0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        FUN_00c1cec0(&local_260,puVar8 + -10);
        goto joined_r0x00c4319c;
      }
    }
  }
  FUN_00c1cec0(&local_260,0);
joined_r0x00c4319c:
  if ((local_260 == (undefined1 *)0x0) ||
     (puVar8 = *(undefined8 **)(local_260 + 0x60), puVar8 == (undefined8 *)0x0)) {
    puVar9 = (undefined8 *)0x0;
    cVar1 = DAT_00000070;
  }
  else {
    plVar4 = (long *)(**(code **)*puVar8)(puVar8);
    lVar5 = FUN_00c1bbc0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar9 = puVar8 + -10;
        cVar1 = *(char *)(puVar8 + 4);
        goto joined_r0x00c431ac;
      }
    }
    puVar9 = (undefined8 *)0x0;
    cVar1 = DAT_00000070;
  }
joined_r0x00c431ac:
  if (cVar1 == '\0') {
    local_1c8 = '\0';
  }
  else {
    local_1c8 = 0;
    local_1c0 = puVar9[0xf];
    local_1b8 = puVar9[0x10];
    if (local_1b8 != 0) {
      (**(code **)(*(long *)(local_1b8 + 0x48) + 0x10))();
    }
    local_1b0 = puVar9[0x11];
    local_1a8 = puVar9[0x12];
    if (local_1a8 != 0) {
      (**(code **)(*(long *)(local_1a8 + 0x48) + 0x10))();
    }
    memcpy(auStack_1a0,puVar9 + 0x13,0x136);
    local_1c8 = '\x01';
  }
  if (local_260 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_260 + 0x48) + 0x18))();
    local_260 = (undefined1 *)0x0;
  }
  if (local_1c8 == '\0') {
    *(undefined4 *)(param_1 + 0x11) = param_4;
  }
  else {
    if ((char)param_1[0x15] == '\0') {
      *(undefined4 *)(param_1 + 0x11) = param_4;
    }
    else {
      uVar7 = 7;
      if ((char)param_1[0x14] == '\0') {
        uVar7 = 8;
      }
      (**(code **)(*param_1 + 0x10))(&local_1d0,param_1);
      lVar5 = local_1d0;
      if (local_1d0 == 0) {
        lVar10 = 0;
        bVar2 = true;
        local_1d8 = local_1a8;
      }
      else {
        (**(code **)(*(long *)(local_1d0 + 0x48) + 0x10))();
        lVar10 = local_1d0;
        if (local_1d0 == 0) {
          bVar2 = true;
          local_1d8 = local_1a8;
        }
        else {
          (**(code **)(*(long *)(local_1d0 + 0x48) + 0x10))();
          bVar2 = false;
          local_1d8 = local_1a8;
        }
      }
      local_1a8 = local_1d8;
      if (local_1d8 != 0) {
        (**(code **)(*(long *)(local_1d8 + 0x48) + 0x10))();
      }
      local_250 = (undefined1 *)0x0;
      puStack_248 = (undefined1 *)0x0;
      local_230 = lVar5;
      local_260 = (undefined1 *)0x0;
      local_258 = (code *)0x0;
      local_240 = param_1;
      local_238 = param_3;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      local_260 = &LAB_00c44ae0;
      local_258 = FUN_00c44b20;
      local_250 = &LAB_00c44b60;
      puStack_248 = &LAB_00c44b90;
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (code *)0x0;
      local_2c0 = param_1;
      local_2b8 = param_4;
      local_2b0 = lVar10;
      if (!bVar2) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      local_2e0 = &LAB_00c44bc0;
      local_2d8 = FUN_00c44bf0;
      local_2d0 = &LAB_00c44c30;
      puStack_2c8 = &LAB_00c44c60;
      uVar6 = FUN_01229930(&local_1d8,auStack_16a,uVar7,&local_260,&local_2e0);
      pcVar3 = local_2d8;
      if (local_2d8 != (code *)0x0) {
        local_2d0 = (undefined1 *)0x0;
        puStack_2c8 = (undefined1 *)0x0;
        local_2e0 = (undefined1 *)0x0;
        local_2d8 = (code *)0x0;
        (*pcVar3)(&local_2c0);
      }
      pcVar3 = local_258;
      if (local_258 != (code *)0x0) {
        local_250 = (undefined1 *)0x0;
        puStack_248 = (undefined1 *)0x0;
        local_260 = (undefined1 *)0x0;
        local_258 = (code *)0x0;
        (*pcVar3)(&local_240);
      }
      if (local_1d8 != 0) {
        (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
        local_1d8 = 0;
      }
      if ((uVar6 & 1) == 0) {
        param_2 = param_4;
      }
      *(undefined4 *)(param_1 + 0x11) = param_2;
      if (!bVar2) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      if (local_1d0 != 0) {
        (**(code **)(*(long *)(local_1d0 + 0x48) + 0x18))();
        local_1d0 = 0;
      }
      if (local_1c8 == '\0') {
        return;
      }
    }
    if (local_1a8 != 0) {
      (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
      local_1a8 = 0;
    }
    if (local_1b8 != 0) {
      (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
    }
  }
  return;
}


