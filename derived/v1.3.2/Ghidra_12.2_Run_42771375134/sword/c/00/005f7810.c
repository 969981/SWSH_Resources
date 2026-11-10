/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f7810; name: FUN_005f7810
 */


void FUN_005f7810(long *param_1)

{
  (**(code **)(*param_1 + 0x40))();
  if ((long *)param_1[0x4d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4d] + 0x18))();
    param_1[0x4d] = 0;
  }
  if ((long *)param_1[0x4c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4c] + 0x18))();
    param_1[0x4c] = 0;
  }
  if ((long *)param_1[0x4b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4b] + 0x18))();
    param_1[0x4b] = 0;
  }
  if ((long *)param_1[0x73] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x73] + 0x18))();
    param_1[0x73] = 0;
  }
  FUN_005f7a10(param_1);
  FUN_005f7bd0(param_1);
  if ((long *)param_1[0x4a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x4a] + 0x18))();
    param_1[0x4a] = 0;
  }
  return;
}


