/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f6670; name: FUN_006f6670
 */


void FUN_006f6670(long param_1)

{
  FUN_0199c7a0(param_1,PTR_DAT_027155e8);
  FUN_006f6820(param_1 + 0x48);
  FUN_006f6820(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  FUN_0199c6a0(param_1);
  return;
}


