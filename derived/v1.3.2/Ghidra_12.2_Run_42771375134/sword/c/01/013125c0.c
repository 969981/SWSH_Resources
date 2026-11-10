/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013125c0; name: FUN_013125c0
 */


void FUN_013125c0(uint param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_30;
  ulong uStack_28;
  
  if ((*(long *)(param_2 + 0x98) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(param_2 + 0x98) + 0x60), puVar5 == (undefined8 *)0x0)) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)*puVar5)(puVar5);
    if (((*PTR_DAT_0271df20 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar1 != 0)) {
      uVar4 = FUN_00d3ff90();
      *(undefined8 *)PTR_DAT_0271df28 = uVar4;
      __cxa_guard_release(PTR_DAT_0271df20);
    }
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (puVar2 == (undefined8 *)PTR_DAT_0271df28) {
          puVar3 = puVar5 + -10;
          goto LAB_0131262c;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      puVar3 = (undefined8 *)0x0;
    }
  }
LAB_0131262c:
  local_30 = CONCAT44(param_1,param_1);
  uStack_28 = (ulong)param_1;
  FUN_012dc620(puVar3,&local_30);
  return;
}


