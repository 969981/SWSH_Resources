/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039ace0; name: FUN_0039ace0
 */


void FUN_0039ace0(long *param_1)

{
  if ((char)param_1[0x12] == '\0') {
    return;
  }
  FUN_003ff570(param_1[0xe]);
  if ((char)param_1[0x12] != '\0') {
    FUN_0039ab70(param_1);
    if ((long *)*param_1 != (long *)0x0) {
      (**(code **)(*(long *)*param_1 + 0x20))();
    }
    if ((long *)param_1[6] != (long *)0x0) {
      (**(code **)(*(long *)param_1[6] + 0x20))();
    }
    DataMemoryBarrier(2,3);
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  FUN_003ff5a0(param_1[0xe]);
  return;
}


