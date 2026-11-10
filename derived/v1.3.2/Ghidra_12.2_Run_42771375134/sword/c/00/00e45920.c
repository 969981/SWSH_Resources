/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e45920; name: FUN_00e45920
 */


undefined8 FUN_00e45920(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_18;
  
  if (((*(long **)(param_1 + 0x418) == *(long **)(param_1 + 0x420)) ||
      (lVar6 = **(long **)(param_1 + 0x418), lVar6 == 0)) ||
     (puVar7 = *(undefined8 **)(lVar6 + 0x60), puVar7 == (undefined8 *)0x0)) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_027150a8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar1 != 0)) {
      uVar5 = FUN_00706e40();
      *(undefined8 *)PTR_DAT_027150b0 = uVar5;
      __cxa_guard_release(PTR_DAT_027150a8);
    }
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (puVar2 == (undefined8 *)PTR_DAT_027150b0) {
          puVar3 = puVar7 + -10;
          goto LAB_00e45994;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      puVar3 = (undefined8 *)0x0;
    }
  }
LAB_00e45994:
  local_18 = FUN_0069d2b0(puVar3);
  plVar4 = (long *)FUN_006b92e0(&local_18);
  lVar6 = *plVar4;
  uVar5 = 1;
  if (lVar6 < 0x248cb78e45b7cfed) {
    if (lVar6 == -0x6a6da842a3e8b9ce) {
      return uVar5;
    }
    if (lVar6 == -0x42094e45547ab134) {
      return uVar5;
    }
  }
  else if (((lVar6 == 0x248cb78e45b7cfed) || (lVar6 == 0x4d1e146afda47076)) ||
          (lVar6 == 0x5d1d1bd83d038f3a)) {
    return uVar5;
  }
  return 0;
}


