/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7df00; name: FUN_00e7df00
 */


uint FUN_00e7df00(long *param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (plVar5 == plVar1) {
      return 1;
    }
    plVar4 = (long *)*plVar5;
    uVar3 = FUN_01593050(plVar4 + 10);
    if ((((uVar3 & 1) != 0) && (plVar4[0x34] == *param_1)) &&
       (uVar3 = (**(code **)(*(long *)*plVar5 + 0x88))(), (uVar3 & 1) == 0)) break;
    plVar5 = plVar5 + 1;
  }
  plVar5 = plVar4 + 9;
  (**(code **)(*plVar5 + 0x10))(plVar5);
  uVar2 = (**(code **)(*plVar4 + 0x88))(plVar4);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return uVar2 & 1;
}


