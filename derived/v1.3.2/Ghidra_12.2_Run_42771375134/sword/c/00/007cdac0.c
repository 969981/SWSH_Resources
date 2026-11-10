/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007cdac0; name: FUN_007cdac0
 */


void FUN_007cdac0(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x168) = 0;
    lVar1 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}


