/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fb220; name: FUN_004fb220
 */


void FUN_004fb220(long *param_1)

{
  *param_1 = (long)(PTR_DAT_027137f8 + 0x10);
  if (*(char *)((long)param_1 + 0x69) != '\0') {
    (**(code **)(**(long **)(param_1[10] + 0x608) + 0x10))
              (*(long **)(param_1[10] + 0x608),param_1[4]);
  }
  if (param_1[3] != 0) {
    FUN_004f8840();
    param_1[3] = 0;
  }
  if (param_1[0xb] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_027137c8);
  }
  if (param_1[4] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_027137c8);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 5));
  FUN_004ff990(param_1);
  return;
}


