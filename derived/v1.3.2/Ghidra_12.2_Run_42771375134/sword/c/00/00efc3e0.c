/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00efc3e0; name: FUN_00efc3e0
 */


void FUN_00efc3e0(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_28;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN_00ed9a40(&local_28,lVar5);
  if (local_28 != 0) {
    puVar6 = *(undefined8 **)(local_28 + 0x60);
    if (puVar6 == (undefined8 *)0x0) goto LAB_00efc470;
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_02720438 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02720438), iVar1 != 0)) {
      uVar4 = FUN_0156a3b0();
      *(undefined8 *)PTR_DAT_02720440 = uVar4;
      __cxa_guard_release(PTR_DAT_02720438);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_02720440) {
        puVar6 = puVar6 + -10;
        goto LAB_00efc470;
      }
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_00efc470:
  lVar3 = puVar6[0x12];
  *(undefined4 *)(puVar6 + 0x11) = 2;
  puVar6[0x12] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined1 *)(puVar6 + 0x13) = 0;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


