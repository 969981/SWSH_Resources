/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a2620; name: FUN_013a2620
 */


void FUN_013a2620(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *apuStack_c0 [12];
  undefined1 local_54 [4];
  
  local_54[0] = 0;
  lVar2 = *(long *)(*(long *)PTR_DAT_027194e0 + 0x108);
  if (lVar2 != 0) {
    puVar4 = *(undefined8 **)(*(long *)PTR_DAT_027194e0 + 0x100);
    lVar2 = lVar2 << 3;
    do {
      uVar1 = (**(code **)(*(long *)*puVar4 + 0x40))();
      if ((uVar1 & 1) == 0) {
        local_d0 = &LAB_013a4000;
        local_c8 = &LAB_013a4010;
        local_e0 = &LAB_013a3fb0;
        local_d8 = FUN_013a3ff0;
        apuStack_c0[0] = local_54;
        FUN_00dcd4a0(*puVar4,&local_e0);
        pcVar3 = local_d8;
        if (local_d8 != (code *)0x0) {
          local_d0 = (undefined1 *)0x0;
          local_c8 = (undefined1 *)0x0;
          local_e0 = (undefined1 *)0x0;
          local_d8 = (code *)0x0;
          (*pcVar3)(apuStack_c0);
        }
      }
      puVar4 = puVar4 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  FUN_00d6b680(*(undefined8 *)(param_1 + 0xf18));
  pcVar3 = *(code **)(param_1 + 0x8e8);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x8f0) = 0;
    *(undefined8 *)(param_1 + 0x8f8) = 0;
    *(undefined8 *)(param_1 + 0x8e0) = 0;
    *(undefined8 *)(param_1 + 0x8e8) = 0;
    (*pcVar3)(param_1 + 0x900);
  }
  *(long *)(param_1 + 0x900) = param_1;
  *(undefined1 **)(param_1 + 0x8e0) = &LAB_013a3de0;
  *(undefined1 **)(param_1 + 0x8e8) = &LAB_013a3df0;
  *(undefined1 **)(param_1 + 0x8f0) = &LAB_013a3e00;
  *(undefined1 **)(param_1 + 0x8f8) = &LAB_013a3e10;
  FUN_00d939e0(*(undefined8 *)PTR_DAT_02710868,0,0,8);
  local_e0 = (undefined1 *)0x1fc92349acbb99e1;
  local_d8 = (code *)0x1d29bb6;
  local_d0 = (undefined1 *)0x25;
  local_c8 = (undefined1 *)0x0;
  FUN_012d6d40(&local_e0);
  if (local_c8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_c8 + 0x48) + 0x18))();
  }
  return;
}


