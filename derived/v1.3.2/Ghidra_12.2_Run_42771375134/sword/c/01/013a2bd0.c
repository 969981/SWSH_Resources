/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a2bd0; name: FUN_013a2bd0
 */


void FUN_013a2bd0(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *apuStack_c0 [12];
  
  if ((*(long *)(param_1 + 0xf18) != 0) &&
     (uVar1 = FUN_00d15c50(*(undefined8 *)(*(long *)(param_1 + 0xf18) + 0x508),0x9035f878ddf73263),
     (uVar1 & 1) != 0)) {
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    uStack_e8 = 0x437f0000437f0000;
    local_f0 = 0x437f0000437f0000;
    FUN_00d940b0(*(undefined8 *)PTR_DAT_02710868,0,0,&local_e0,&local_f0,4,0,0);
    FUN_00d15c10(*(undefined8 *)(*(long *)(param_1 + 0xf18) + 0x508),0x9035f878ddf73263);
  }
  uVar1 = FUN_00d6b6b0(*(undefined8 *)(param_1 + 0xf18));
  if ((uVar1 & 1) != 0) {
    local_f0 = CONCAT71(local_f0._1_7_,1);
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
          apuStack_c0[0] = (undefined1 *)&local_f0;
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
    pcVar3 = *(code **)(param_1 + 0x968);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x978) = 0;
      *(undefined8 *)(param_1 + 0x970) = 0;
      *(undefined8 *)(param_1 + 0x968) = 0;
      *(undefined8 *)(param_1 + 0x960) = 0;
      (*pcVar3)(param_1 + 0x980);
    }
    pcVar3 = *(code **)(param_1 + 0x8e8);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x8f0) = 0;
      *(undefined8 *)(param_1 + 0x8f8) = 0;
      *(undefined8 *)(param_1 + 0x8e0) = 0;
      *(undefined8 *)(param_1 + 0x8e8) = 0;
      (*pcVar3)(param_1 + 0x900);
    }
    *(long *)(param_1 + 0x900) = param_1;
    *(undefined1 **)(param_1 + 0x8e0) = &LAB_013a3ed0;
    *(undefined1 **)(param_1 + 0x8e8) = &LAB_013a3f80;
    *(undefined1 **)(param_1 + 0x8f0) = &LAB_013a3f90;
    *(undefined1 **)(param_1 + 0x8f8) = &LAB_013a3fa0;
    FUN_013a20a0(param_1,1);
  }
  return;
}


