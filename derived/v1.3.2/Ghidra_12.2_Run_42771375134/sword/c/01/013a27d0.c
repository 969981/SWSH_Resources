/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a27d0; name: FUN_013a27d0
 */


void FUN_013a27d0(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  code *pcVar8;
  long *plVar9;
  ulong *puVar10;
  long lVar11;
  long local_d8;
  long local_d0;
  long *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0x437f0000437f0000;
  local_80 = 0x437f0000437f0000;
  FUN_00d940b0(*(undefined8 *)PTR_DAT_02710868,0,0,&local_70,&local_80,8,0,0);
  *(undefined8 *)(param_1 + 0xae0) = 0x7c057b6284f70ed;
  *(char **)(param_1 + 0xae8) = "sd8014_magocoro";
  *(undefined8 *)(param_1 + 0xaf0) = 0xf;
  if (*(long *)(param_1 + 0xaf8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xaf8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xaf8) = 0;
  }
  *(undefined8 *)(param_1 + 0xaf8) = 0;
  uVar4 = thunk_FUN_012c8f90(0x14);
  *(undefined8 *)(param_1 + 0xb00) = uVar4;
  *(undefined1 *)(param_1 + 0xeec) = 1;
  puVar3 = PTR_DAT_02710860;
  plVar9 = *(long **)(param_1 + 8);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar10 = (ulong *)(lVar5 + 0x80);
  uVar6 = *puVar10;
  lVar11 = 0xd58;
  do {
    if (0xf < uVar6) goto LAB_013a2bc8;
    *(long **)(lVar5 + uVar6 * 8) = plVar9;
    *puVar10 = *puVar10 + 1;
    lVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,0x80,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar9 + 0xb8))(plVar9);
    }
    FUN_0077d050(lVar5,0x100);
    *(long **)(lVar5 + 8) = plVar9;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x80;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *puVar10 = *puVar10 - 1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + lVar11) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + lVar11) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + lVar11) = 0;
    }
    *(long *)(param_1 + lVar11) = lVar5;
    plVar9 = *(long **)(param_1 + 8);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    puVar10 = (ulong *)(lVar5 + 0x80);
    uVar6 = *puVar10;
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0xdf8);
  if (uVar6 < 0x10) {
    *(long **)(lVar5 + uVar6 * 8) = plVar9;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    local_d8 = 0;
    local_d0 = 0;
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
       (local_c8 = *(long **)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), local_c8 == (long *)0x0))
    {
      local_c8 = (long *)FUN_0075ecb0();
    }
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = (long *)0x0;
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
       (local_a8 = *(long **)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), local_a8 == (long *)0x0))
    {
      local_a8 = (long *)FUN_0075ecb0();
    }
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0x3f800000;
    FUN_00d10270(&local_d8);
    if (local_b0 != (long *)0x0) {
      pbVar7 = (byte *)(param_1 + 0xdfc);
      plVar9 = local_b0;
      do {
        bVar1 = *(byte *)((long)plVar9 + 0x14);
        *(int *)(pbVar7 + -4) = (int)plVar9[2];
        *pbVar7 = bVar1 & 1;
        plVar9 = (long *)*plVar9;
        pbVar7 = pbVar7 + 8;
        plVar2 = local_b0;
      } while (plVar9 != (long *)0x0);
      while (plVar2 != (long *)0x0) {
        lVar11 = *plVar2;
        (**(code **)(*local_a8 + 0x18))(local_a8,plVar2,0x18,4);
        plVar2 = (long *)lVar11;
      }
    }
    lVar11 = local_d8;
    local_d8 = 0;
    if (lVar11 != 0) {
      (**(code **)(*local_c8 + 0x18))(local_c8,lVar11,local_d0 << 3,4);
    }
    *puVar10 = *puVar10 - 1;
    plVar9 = (long *)thunk_FUN_012c8f90(0x14);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
    if (*(ulong *)(lVar11 + 0x80) < 0x10) {
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar9;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      lVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,0x588,8);
      if (lVar5 == 0) {
        (**(code **)(*plVar9 + 0xb8))(plVar9);
      }
      FUN_00d6aa00(lVar5,param_1 + 0xae0,param_1 + 0x80);
      *(long **)(lVar5 + 8) = plVar9;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x588;
      *(undefined8 *)(lVar5 + 0x20) = 8;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0xf18) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xf18) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xf18) = 0;
      }
      pcVar8 = *(code **)(param_1 + 0x8e8);
      *(long *)(param_1 + 0xf18) = lVar5;
      if (pcVar8 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x8f0) = 0;
        *(undefined8 *)(param_1 + 0x8f8) = 0;
        *(undefined8 *)(param_1 + 0x8e0) = 0;
        *(undefined8 *)(param_1 + 0x8e8) = 0;
        (*pcVar8)(param_1 + 0x900);
      }
      *(long *)(param_1 + 0x900) = param_1;
      *(undefined1 **)(param_1 + 0x8e0) = &LAB_013a3e20;
      *(undefined1 **)(param_1 + 0x8e8) = &LAB_013a3ea0;
      *(undefined1 **)(param_1 + 0x8f0) = &LAB_013a3eb0;
      *(undefined1 **)(param_1 + 0x8f8) = &LAB_013a3ec0;
      return;
    }
  }
LAB_013a2bc8:
                    /* WARNING: Subroutine does not return */
  abort();
}


