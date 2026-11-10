/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01366640; name: FUN_01366640
 */


void FUN_01366640(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long local_28;
  
  puVar4 = (undefined8 *)0x0;
  local_28 = param_2;
  if (*(long *)(param_2 + 0x68) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
        uVar3 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar3;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)PTR_DAT_02715080) {
          puVar4 = puVar4 + -10;
          goto LAB_013666a8;
        }
      }
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_013666a8:
  puVar4[0x17] = *(undefined8 *)(param_1 + 0x88);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  *(undefined1 *)(puVar4 + 0x18) = 1;
  puVar4[0x16] = uVar3;
  puVar4 = (undefined8 *)0x0;
  if (*(long *)(local_28 + 0x68) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(local_28 + 0x68) + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
        uVar3 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar3;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)PTR_DAT_02715080) {
          puVar4 = puVar4 + -10;
          goto LAB_01366714;
        }
      }
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_01366714:
  puVar4[0x15] = *(undefined8 *)(param_1 + 0x98);
  puVar4[0x14] = *(undefined8 *)(param_1 + 0x90);
  *(undefined1 *)(puVar4 + 0x18) = 1;
  puVar4 = (undefined8 *)0x0;
  if (*(long *)(local_28 + 0x68) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(local_28 + 0x68) + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
        uVar3 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar3;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)PTR_DAT_02715080) {
          puVar4 = puVar4 + -10;
          goto LAB_0136677c;
        }
      }
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_0136677c:
  puVar4[0x1b] = *(undefined8 *)(param_1 + 0xa8);
  puVar4[0x1a] = *(undefined8 *)(param_1 + 0xa0);
  *(undefined1 *)(puVar4 + 0x18) = 1;
  FUN_007947b0(local_28,*(undefined1 *)(param_1 + 0xb0));
  if (*(ulong *)(param_1 + 0xf0) < *(ulong *)(param_1 + 0xf8)) {
    FUN_01367b70(param_1 + 0x100,*(ulong *)(param_1 + 0xf0),&local_28);
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 0x10;
  }
  else {
    FUN_01367960(param_1 + 0xe8,&local_28);
  }
  return;
}


