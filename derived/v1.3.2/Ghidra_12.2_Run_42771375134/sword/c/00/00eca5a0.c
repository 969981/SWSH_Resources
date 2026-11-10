/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eca5a0; name: FUN_00eca5a0
 */


undefined8 FUN_00eca5a0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e59a30(param_2);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar1 = (**(code **)(*param_2 + 0x178))(param_2);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x469) = 1;
    return 1;
  }
  if (*(char *)((long)param_2 + 0x469) == '\0') {
    return 0;
  }
  uVar1 = FUN_00dc3e70(param_2);
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)((long)param_2 + 0x469) = 0;
    return 0;
  }
  return 1;
}


