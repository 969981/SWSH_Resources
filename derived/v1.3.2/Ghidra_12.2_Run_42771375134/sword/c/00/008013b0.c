/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008013b0; name: FUN_008013b0
 */


int FUN_008013b0(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  
  __mutex = operator_new(0x20);
  *param_1 = &__mutex->__data;
  iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  return iVar1;
}


