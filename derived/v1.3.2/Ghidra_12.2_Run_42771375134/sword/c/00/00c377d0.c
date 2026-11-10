/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c377d0; name: FUN_00c377d0
 */


void FUN_00c377d0(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *local_1b0;
  code *local_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  long *local_190;
  undefined4 local_188;
  long local_180;
  undefined1 *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  long *local_110;
  undefined4 local_108;
  undefined8 *local_100;
  long lStack_f8;
  undefined4 local_a8 [2];
  long *local_a0;
  undefined8 uStack_98;
  long local_90;
  char local_88 [4];
  long local_84;
  long local_7c;
  
  if ((param_1[0xd] != 0) &&
     (puVar7 = *(undefined8 **)(param_1[0xd] + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    lVar4 = FUN_00be66c0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        FUN_00c1cec0(&local_130,puVar7 + -10);
        goto joined_r0x00c37944;
      }
    }
  }
  FUN_00c1cec0(&local_130,0);
joined_r0x00c37944:
  if (local_130 != (undefined1 *)0x0) {
    puVar7 = *(undefined8 **)(local_130 + 0x60);
    if (puVar7 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar7)(puVar7);
      lVar4 = FUN_00c1bbc0();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar7 = puVar7 + -10;
          goto joined_r0x00c37974;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
joined_r0x00c37974:
    if (local_130 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
      local_130 = (undefined1 *)0x0;
    }
    if ((puVar7 != (undefined8 *)0x0) && (FUN_00bdc2d0(local_88,puVar7), local_88[0] != '\0')) {
      if ((char)param_1[0x14] == '\0') {
        *(undefined4 *)(param_1 + 0x11) = param_4;
        return;
      }
      param_1[0x133] = local_7c;
      *(int *)((long)param_1 + 0x99c) = (int)param_1[0x15];
      bVar1 = true;
      param_1[0x132] = local_84;
      *(undefined1 *)(param_1 + 0x133) = 1;
      (**(code **)(*param_1 + 0x10))(&local_90,param_1);
      lVar4 = local_90;
      if (local_90 == 0) {
        lVar8 = 0;
      }
      else {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
        lVar8 = local_90;
        if (local_90 == 0) {
          bVar1 = true;
        }
        else {
          (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
          bVar1 = false;
        }
      }
      local_a8[0] = 0;
      uStack_98 = 0x10;
      local_120 = (undefined1 *)0x0;
      puStack_118 = (undefined1 *)0x0;
      local_130 = (undefined1 *)0x0;
      local_128 = (code *)0x0;
      lStack_f8 = lVar4;
      local_110 = param_1;
      local_108 = param_3;
      local_100 = puVar7;
      local_a0 = param_1 + 0x132;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      local_130 = &LAB_00c385b0;
      local_128 = FUN_00c38630;
      local_120 = &LAB_00c38670;
      puStack_118 = &LAB_00c386a0;
      local_1a0 = (undefined1 *)0x0;
      puStack_198 = (undefined1 *)0x0;
      local_1b0 = (undefined1 *)0x0;
      local_1a8 = (code *)0x0;
      local_190 = param_1;
      local_188 = param_4;
      local_180 = lVar8;
      if (!bVar1) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      local_1b0 = &LAB_00c386d0;
      local_1a8 = FUN_00c38700;
      local_1a0 = &LAB_00c38740;
      puStack_198 = &LAB_00c38770;
      uVar5 = FUN_01299050(1,local_a8,&local_130,&local_1b0);
      pcVar2 = local_1a8;
      if (local_1a8 != (code *)0x0) {
        local_1a0 = (undefined1 *)0x0;
        puStack_198 = (undefined1 *)0x0;
        local_1b0 = (undefined1 *)0x0;
        local_1a8 = (code *)0x0;
        (*pcVar2)(&local_190);
      }
      pcVar2 = local_128;
      if (local_128 != (code *)0x0) {
        local_120 = (undefined1 *)0x0;
        puStack_118 = (undefined1 *)0x0;
        local_130 = (undefined1 *)0x0;
        local_128 = (code *)0x0;
        (*pcVar2)(&local_110);
      }
      puVar9 = *(undefined1 **)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
      if (puVar9 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(puVar9 + 0x48) + 0x10))();
      }
      local_130 = puVar9;
      lVar6 = FUN_00fe2800(&local_130);
      FUN_012ae720(*(undefined8 *)(lVar6 + 0x80));
      if (local_130 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
        local_130 = (undefined1 *)0x0;
      }
      if ((uVar5 & 1) == 0) {
        param_2 = param_4;
      }
      *(undefined4 *)(param_1 + 0x11) = param_2;
      if (!bVar1) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      if (local_90 == 0) {
        return;
      }
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x11) = param_4;
  return;
}


