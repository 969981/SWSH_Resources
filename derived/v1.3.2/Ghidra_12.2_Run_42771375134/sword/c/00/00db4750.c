/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db4750; name: FUN_00db4750
 */


void FUN_00db4750(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((*(long *)(param_2 + 0x80) == 0) || (*(int *)(*(long *)(param_2 + 0x80) + 0x54) == 0)) {
    return;
  }
  if (*(long *)(param_2 + 0x80) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(param_2 + 0x80) + 0x60);
    if (puVar4 == (undefined8 *)0x0) goto LAB_00db47d8;
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    if (((*PTR_DAT_02715290 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715290), iVar1 != 0)) {
      uVar3 = FUN_01590a70();
      *(undefined8 *)PTR_DAT_02715298 = uVar3;
      __cxa_guard_release(PTR_DAT_02715290);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_02715298) {
        puVar4 = puVar4 + -10;
        goto LAB_00db47d8;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_00db47d8:
  FUN_006cb0d0(puVar4);
  FUN_006cb440(param_1,puVar4,param_3);
  FUN_012c4020(param_2,*(undefined4 *)(param_2 + 0xa8));
  return;
}


