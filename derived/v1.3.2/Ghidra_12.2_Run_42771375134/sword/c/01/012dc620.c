/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012dc620; name: FUN_012dc620
 */


void FUN_012dc620(long param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
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
          goto LAB_012dc684;
        }
      }
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_012dc684:
  puVar4[0x1b] = param_2[1];
  puVar4[0x1a] = *param_2;
  *(undefined1 *)(puVar4 + 0x18) = 1;
  return;
}


