/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbe570; name: FUN_00dbe570
 */


undefined1  [16] FUN_00dbe570(undefined1 param_1 [16],long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  ulong local_28;
  
  uVar8 = param_1._8_8_;
  uVar6 = param_1._0_8_;
  if (((*(long **)(param_2 + 0x418) != *(long **)(param_2 + 0x420)) &&
      (lVar4 = **(long **)(param_2 + 0x418), lVar4 != 0)) &&
     (puVar5 = *(undefined8 **)(lVar4 + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    if (((*PTR_DAT_027150a8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar1 != 0)) {
      uVar3 = FUN_00706e40();
      *(undefined8 *)PTR_DAT_027150b0 = uVar3;
      __cxa_guard_release(PTR_DAT_027150a8);
    }
    for (; param_1._8_8_ = uVar8, param_1._0_8_ = uVar6, plVar2 != (long *)0x0;
        plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_027150b0) {
        local_28 = FUN_0069d160(puVar5 + -10,param_3);
        auVar7._8_8_ = uVar8;
        auVar7._0_8_ = uVar6;
        if ((local_28 & 0xff) == 0) {
          return auVar7;
        }
        auVar7 = FUN_0069d1a0(puVar5 + -10,&local_28);
        return auVar7;
      }
    }
  }
  return param_1;
}


