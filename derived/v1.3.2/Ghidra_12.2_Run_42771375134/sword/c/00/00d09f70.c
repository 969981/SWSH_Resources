/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d09f70; name: FUN_00d09f70
 */


undefined8 FUN_00d09f70(long param_1)

{
  ulong uVar1;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x78) == 2) {
    uVar1 = FUN_010384a0(*(undefined8 *)(param_1 + 0x80));
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x110) != 0) {
      local_14 = FUN_010386e0(*(undefined8 *)(param_1 + 0x80));
      (**(code **)(param_1 + 0x110))(param_1 + 0x130,&local_14);
    }
  }
  else {
    if (*(int *)(param_1 + 0x78) != 1) {
      return 0;
    }
    uVar1 = FUN_010384a0(*(undefined8 *)(param_1 + 0x80));
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (*(code **)(param_1 + 0x90) != (code *)0x0) {
      (**(code **)(param_1 + 0x90))(param_1 + 0xb0);
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  return 0;
}


