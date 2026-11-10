/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01312400; name: FUN_01312400
 */


void FUN_01312400(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    FUN_012dcaa0(0);
    return;
  }
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x98) + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_012dcaa0(0);
    return;
  }
  puVar2 = (undefined8 *)(**(code **)*puVar5)(puVar5);
  if (((*PTR_DAT_0271df20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar1 != 0))
  {
    uVar4 = FUN_00d3ff90();
    *(undefined8 *)PTR_DAT_0271df28 = uVar4;
    __cxa_guard_release(PTR_DAT_0271df20);
  }
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      if (puVar2 == (undefined8 *)PTR_DAT_0271df28) {
        puVar3 = puVar5 + -10;
        goto LAB_01312488;
      }
      puVar2 = (undefined8 *)*puVar2;
    } while (puVar2 != (undefined8 *)0x0);
    puVar3 = (undefined8 *)0x0;
  }
LAB_01312488:
  FUN_012dcaa0(puVar3);
  return;
}


