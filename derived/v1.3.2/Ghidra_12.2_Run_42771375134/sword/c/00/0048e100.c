/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048e100; name: FUN_0048e100
 */


undefined8 FUN_0048e100(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  
  plVar1 = *(long **)(param_1 + 0x200);
  if (plVar1 != (long *)0x0) {
    local_14[0] = 1;
    local_18[0] = 1;
    uVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,local_14,local_18);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


