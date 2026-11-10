/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00801010; name: FUN_00801010
 */


void FUN_00801010(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = DAT_029f55f0;
  if (DAT_029f55f0 != (undefined8 *)0x0) {
    pthread_mutex_destroy((pthread_mutex_t *)*DAT_029f55f0);
    pvVar2 = (void *)*puVar1;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    operator_delete(puVar1);
  }
  DAT_029f55f0 = (undefined8 *)0x0;
  return;
}


