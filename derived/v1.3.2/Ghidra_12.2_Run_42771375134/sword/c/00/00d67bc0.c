/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d67bc0; name: FUN_00d67bc0
 */


void FUN_00d67bc0(long param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (*(long *)(param_1 + 0x7a8) == param_2) {
    puVar1 = (undefined8 *)(param_1 + 0x7a8);
  }
  else if (*(long *)(param_1 + 0x7b0) == param_2) {
    puVar1 = (undefined8 *)(param_1 + 0x7b0);
  }
  else if (*(long *)(param_1 + 0x7b8) == param_2) {
    puVar1 = (undefined8 *)(param_1 + 0x7b8);
  }
  else if (*(long *)(param_1 + 0x7c0) == param_2) {
    puVar1 = (undefined8 *)(param_1 + 0x7c0);
  }
  else {
    if (*(long *)(param_1 + 0x7c8) != param_2) {
      return;
    }
    puVar1 = (undefined8 *)(param_1 + 0x7c8);
  }
  *puVar1 = 0xcbf29ce484222645;
  return;
}


