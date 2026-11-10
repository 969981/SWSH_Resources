/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00192490; name: FUN_00192490
 */


long * FUN_00192490(long param_1,long *param_2)

{
  long *plVar1;
  
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 0x16) & 1) == 0) {
    (**(code **)(*param_2 + 0x20))(param_2);
    plVar1 = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0x768) = 1;
    *(long **)(param_1 + 0x760) = param_2;
    plVar1 = (long *)(param_1 + 0x748);
    (**(code **)(*param_2 + 0x20))(param_2);
    *(undefined8 *)(param_1 + 0x758) = *(undefined8 *)(*(long *)(param_1 + 0x760) + 0x10);
  }
  return plVar1;
}


