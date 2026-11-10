/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa96f0; name: FUN_00aa96f0
 */


void FUN_00aa96f0(long param_1)

{
  if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xcbf29ce484222645;
  *(undefined1 **)(param_1 + 0x20) = &DAT_01d38550;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x30) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


