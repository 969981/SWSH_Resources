/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013d4b40; name: FUN_013d4b40
 */


long FUN_013d4b40(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long local_30;
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar5 == (undefined8 *)0x0) goto LAB_013d4ba4;
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar4 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar4;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_02715080) {
        puVar5 = puVar5 + -10;
        goto LAB_013d4ba4;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_013d4ba4:
  lVar3 = FUN_01341cb0(auStack_28,*(undefined8 *)(param_1 + 8));
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_30 = lVar3;
  FUN_006d9640(puVar5,&local_30);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return lVar3;
}


