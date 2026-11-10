/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db6a70; name: FUN_00db6a70
 */


void FUN_00db6a70(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if ((*(long *)(param_1 + 0x298) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x298) + 0x80), lVar4 != 0)) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    puVar6 = *(undefined8 **)(lVar4 + 0x60);
    if (puVar6 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar6)(puVar6);
      if (((*PTR_DAT_02715280 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02715280), iVar1 != 0)) {
        uVar3 = FUN_01590a70();
        *(undefined8 *)PTR_DAT_02715288 = uVar3;
        __cxa_guard_release(PTR_DAT_02715280);
      }
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)PTR_DAT_02715288) {
          puVar6 = puVar6 + -10;
          goto LAB_00db6af4;
        }
      }
      puVar6 = (undefined8 *)0x0;
    }
LAB_00db6af4:
    (**(code **)(*plVar5 + 0x18))(plVar5);
    if ((puVar6 != (undefined8 *)0x0) && (puVar6[0x2c] != 0)) {
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x310);
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x318);
      *(undefined1 *)(param_1 + 0xc0) = 1;
    }
  }
  return;
}


