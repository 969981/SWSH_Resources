/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c7100; name: FUN_012c7100
 */


void FUN_012c7100(long *param_1)

{
  long lVar1;
  long local_18;
  
  FUN_012c6870(&local_18);
  if (local_18 == 0) {
    *param_1 = 0;
    return;
  }
  lVar1 = *(long *)(local_18 + 0x78);
  *param_1 = lVar1;
  if ((lVar1 == 0) ||
     ((**(code **)(*(long *)(lVar1 + 0x48) + 0x10))((long *)(lVar1 + 0x48)), local_18 != 0)) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    return;
  }
  return;
}


