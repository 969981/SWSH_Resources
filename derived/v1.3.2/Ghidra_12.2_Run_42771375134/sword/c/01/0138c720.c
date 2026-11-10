/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138c720; name: FUN_0138c720
 */


undefined8 FUN_0138c720(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_28 [8];
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0)) {
    lVar4 = FUN_0138d570(0,auStack_28);
  }
  else {
    puVar2 = (undefined8 *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
      uVar5 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar5;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (puVar2 == (undefined8 *)PTR_DAT_02715080) {
          puVar3 = puVar6 + -10;
          goto LAB_0138c7a8;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      puVar3 = (undefined8 *)0x0;
    }
LAB_0138c7a8:
    lVar4 = FUN_0138d570(puVar3,auStack_28);
  }
  if (lVar4 == 0) {
    return 0;
  }
  if (*(float *)(param_1 + 0x88) < *(float *)(param_1 + 0x7c) - *(float *)(lVar4 + 0x100)) {
    *(float *)(param_1 + 0x7c) = *(float *)(lVar4 + 0x100);
    return 1;
  }
  return 0;
}


