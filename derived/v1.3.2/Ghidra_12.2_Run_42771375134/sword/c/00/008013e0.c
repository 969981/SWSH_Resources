/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008013e0; name: FUN_008013e0
 */


void FUN_008013e0(undefined8 *param_1)

{
  pthread_mutex_destroy((pthread_mutex_t *)*param_1);
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


