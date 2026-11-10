/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006033c0; name: FUN_006033c0
 */


void FUN_006033c0(long param_1,undefined8 param_2)

{
  uint *puVar1;
  
  if ((*(long *)(param_1 + 0x128) == 0) ||
     (puVar1 = (uint *)(*(long *)(param_1 + 0x128) + 8), (*(byte *)puVar1 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    if (*(long *)(param_1 + 0xa8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xb8) + 0x10))();
      puVar1 = (uint *)(*(long *)(param_1 + 0x128) + 8);
    }
    *(long *)(param_1 + 0xa8) = 0;
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  return;
}


