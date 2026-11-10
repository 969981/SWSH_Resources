/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7e390; name: FUN_00e7e390
 */


long FUN_00e7e390(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  if (puVar4 != puVar1) {
    lVar5 = *param_1;
    do {
      plVar3 = (long *)*puVar4;
      if ((plVar3 != (long *)0x0 && plVar3[0x34] == lVar5) &&
         (uVar2 = (**(code **)(*plVar3 + 0x88))(plVar3), (uVar2 & 1) == 0)) {
        return plVar3[0x3a];
      }
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar4);
  }
  return -0x340d631b7bddd9bb;
}


