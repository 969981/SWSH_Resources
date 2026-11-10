/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea09f0; name: FUN_00ea09f0
 */


undefined8 FUN_00ea09f0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 local_18;
  
  if (*(long **)(param_1 + 0x418) == *(long **)(param_1 + 0x420)) {
    return 0;
  }
  lVar4 = **(long **)(param_1 + 0x418);
  if (lVar4 == 0) {
    return 0;
  }
  puVar5 = *(undefined8 **)(lVar4 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    return 0;
  }
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  if (((*PTR_DAT_027150a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar1 != 0))
  {
    uVar3 = FUN_00706e40();
    *(undefined8 *)PTR_DAT_027150b0 = uVar3;
    __cxa_guard_release(PTR_DAT_027150a8);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    if (plVar2 == (long *)PTR_DAT_027150b0) break;
    plVar2 = (long *)*plVar2;
  }
  local_18 = FUN_0069d2b0(puVar5 + -10);
  plVar2 = (long *)FUN_006b92e0(&local_18);
  lVar4 = *plVar2;
  if (lVar4 < 0x20bc64734786891b) {
    if (((lVar4 != -0x5ede15e58d5cf2b4) && (lVar4 != -0x5f7e0ab4c519dfe)) &&
       (lVar4 != 0xade7f9ba76923fc)) {
      return 0;
    }
  }
  else if (lVar4 < 0x4e8da957d620e016) {
    if ((lVar4 != 0x20bc64734786891b) && (lVar4 != 0x289c55baf0a88895)) {
      return 0;
    }
  }
  else if ((lVar4 != 0x72c7a349fd3ebde9) && (lVar4 != 0x4e8da957d620e016)) {
    return 0;
  }
  return 1;
}


