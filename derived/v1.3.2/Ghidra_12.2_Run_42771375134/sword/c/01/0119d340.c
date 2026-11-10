/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119d340; name: FUN_0119d340
 */


void FUN_0119d340(long param_1)

{
  if (*(char *)(param_1 + 0x360) != '\0') {
    if (*(long *)(param_1 + 0x380) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x380) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x380) = 0;
    }
    *(undefined1 *)(param_1 + 0x360) = 0;
  }
  return;
}


