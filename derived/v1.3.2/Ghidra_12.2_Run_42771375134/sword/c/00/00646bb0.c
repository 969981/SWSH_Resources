/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00646bb0; name: FUN_00646bb0
 */


void FUN_00646bb0(long param_1)

{
  if (*(long **)(param_1 + 0xae0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xae0) + 0x18))();
    *(undefined8 *)(param_1 + 0xae0) = 0;
  }
                    /* WARNING: Subroutine does not return */
  memset((void *)(param_1 + 0x820),0,0x2c0);
}


