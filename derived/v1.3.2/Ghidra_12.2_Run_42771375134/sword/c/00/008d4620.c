/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d4620; name: FUN_008d4620
 */


void FUN_008d4620(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    return;
  }
  FUN_006e2100(*(long *)(param_1 + 0x68),param_1 + 0x60);
  lVar1 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x178) = 0;
  return;
}


