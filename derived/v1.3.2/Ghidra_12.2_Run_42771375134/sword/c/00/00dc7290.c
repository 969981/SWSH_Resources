/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc7290; name: FUN_00dc7290
 */


void FUN_00dc7290(undefined8 param_1,long param_2,undefined8 param_3)

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
    if (puVar4 == (undefined8 *)0x0) goto LAB_00dc7318;
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    if (((*PTR_DAT_02715280 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_02715280), iVar1 != 0)) {
      uVar3 = FUN_01590a70();
      *(undefined8 *)PTR_DAT_02715288 = uVar3;
      __cxa_guard_release(PTR_DAT_02715280);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_02715288) {
        puVar4 = puVar4 + -10;
        goto LAB_00dc7318;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_00dc7318:
  FUN_006cb610(puVar4);
  FUN_006cb440(param_1,puVar4,param_3);
  FUN_00dc84d0(param_2,*(undefined4 *)(param_2 + 0xa8));
  return;
}


