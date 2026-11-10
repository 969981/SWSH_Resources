/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007742d0; name: FUN_007742d0
 */


void FUN_007742d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x60) = 1;
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined1 *)(param_1 + 0x62) = 0;
  return;
}


