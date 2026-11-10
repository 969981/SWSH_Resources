/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7e2e0; name: FUN_00e7e2e0
 */


undefined8 FUN_00e7e2e0(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  if (plVar4 == plVar1) {
    return 0;
  }
  while ((lVar2 = FUN_00e813b0(*plVar4 + 0x50), lVar2 == 0 ||
         (uVar3 = (**(code **)(*(long *)*plVar4 + 0x88))(), (uVar3 & 1) != 0))) {
    plVar4 = plVar4 + 1;
    if (plVar1 == plVar4) {
      return 0;
    }
  }
  plVar4 = *(long **)(*(long *)PTR_DAT_02717c48 + 0x148);
  if (*(long **)(*(long *)PTR_DAT_02717c48 + 0x150) == plVar4) {
    return 0;
  }
  return *(undefined8 *)(*plVar4 + 0x3a0);
}


