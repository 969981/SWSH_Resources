/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00442a40; name: FUN_00442a40
 */


void FUN_00442a40(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02712fc8 + 0x10);
  FUN_0044d120(param_1 + 0x1b);
  if (param_1[0x15] != 0) {
    *(undefined4 *)(param_1 + 0x16) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x15] = 0;
    *(undefined4 *)((long)param_1 + 0xb4) = 0;
  }
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0xe] = 0;
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 9));
  FUN_0044dcf0(param_1 + 1);
  return;
}


