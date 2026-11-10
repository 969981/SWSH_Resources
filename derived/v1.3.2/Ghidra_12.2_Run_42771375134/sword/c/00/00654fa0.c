/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00654fa0; name: FUN_00654fa0
 */


void FUN_00654fa0(long param_1)

{
  if (*(char *)(param_1 + 0x158) != '\0') {
    (**(code **)PTR_DAT_027146a0)(param_1 + 0x88);
    *(undefined1 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_006530c0(*(long *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xc0) + 0x18))();
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
  }
  return;
}


