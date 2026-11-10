/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ecc790; name: thunk_FUN_00ecc7a0
 */


void thunk_FUN_00ecc7a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uStack_48;
  
  if (((*(long *)(param_1 + 0x4b0) == 0) || (*(int *)(*(long *)(param_1 + 0x4b0) + 0x54) == 0)) &&
     (plVar6 = (long *)FUN_00e7e260(), plVar6 != (long *)0x0)) {
    (**(code **)(*plVar6 + 0x10))(&uStack_48);
    if (*(long *)(param_1 + 0x4b0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x4b0) = 0;
    }
    *(undefined8 *)(param_1 + 0x4b0) = uStack_48;
  }
  puVar4 = PTR_DAT_02719530;
  puVar3 = PTR_DAT_02719528;
  if ((*(long *)(param_1 + 0x4b8) == 0) || (*(int *)(*(long *)(param_1 + 0x4b8) + 0x54) == 0)) {
    puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
    for (puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0); puVar1 != puVar2;
        puVar1 = puVar1 + 1) {
      plVar9 = (long *)*puVar1;
      plVar6 = (long *)(**(code **)plVar9[10])(plVar9 + 10);
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        uVar7 = FUN_015b5410();
        *(undefined8 *)puVar4 = uVar7;
        __cxa_guard_release(puVar3);
      }
      for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)puVar4) {
          uVar8 = (**(code **)(*(long *)*puVar1 + 0x88))();
          if ((uVar8 & 1) == 0) {
            (**(code **)(*plVar9 + 0x10))(&uStack_48,plVar9);
            if (*(long *)(param_1 + 0x4b8) != 0) {
              (**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x48) + 0x18))();
              *(undefined8 *)(param_1 + 0x4b8) = 0;
            }
            *(undefined8 *)(param_1 + 0x4b8) = uStack_48;
            return;
          }
          break;
        }
      }
    }
  }
  return;
}


