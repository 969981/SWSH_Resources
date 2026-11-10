/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f8840; name: FUN_004f8840
 */


void FUN_004f8840(long *param_1)

{
  if (((*(byte *)((long)param_1 + 0x34) & 1) != 0) && (*param_1 != 0)) {
    FUN_00404870(*(undefined4 *)PTR_DAT_027137c8);
  }
  FUN_00404870(*(undefined4 *)PTR_DAT_027137c8,param_1);
  return;
}


