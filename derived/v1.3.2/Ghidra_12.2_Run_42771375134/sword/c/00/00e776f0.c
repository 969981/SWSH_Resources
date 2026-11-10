/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e776f0; name: FUN_00e776f0
 */


uint FUN_00e776f0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    plVar6 = (long *)*puVar1;
    if ((plVar6 != (long *)0x0 && plVar6[0x34] == *param_1) &&
       (uVar4 = (**(code **)(*plVar6 + 0x88))(plVar6), (uVar4 & 1) == 0)) break;
    puVar1 = puVar1 + 1;
  }
  plVar5 = plVar6 + 9;
  (**(code **)(*plVar5 + 0x10))(plVar5);
  uVar3 = (**(code **)(*plVar6 + 0x78))(plVar6);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return uVar3 & 1;
}


