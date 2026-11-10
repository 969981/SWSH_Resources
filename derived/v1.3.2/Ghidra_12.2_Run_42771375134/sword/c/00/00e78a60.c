/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e78a60; name: FUN_00e78a60
 */


undefined8 FUN_00e78a60(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    plVar4 = (long *)*puVar1;
    if ((plVar4 != (long *)0x0 && plVar4[0x34] == *param_1) &&
       (uVar3 = (**(code **)(*plVar4 + 0x88))(plVar4), (uVar3 & 1) == 0)) break;
    puVar1 = puVar1 + 1;
  }
  plVar5 = plVar4 + 9;
  (**(code **)(*plVar5 + 0x10))(plVar5);
  if (plVar4[0x53] != 0) {
    FUN_00dc73b0(plVar4[0x53],param_2 & 1);
  }
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return 1;
}


