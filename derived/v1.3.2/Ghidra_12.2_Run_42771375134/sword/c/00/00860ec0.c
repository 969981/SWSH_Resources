/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00860ec0; name: FUN_00860ec0
 */


void FUN_00860ec0(long *param_1)

{
  void *pvVar1;
  ulong uVar2;
  
  *param_1 = (long)(PTR_DAT_02717348 + 0x10);
  pvVar1 = (void *)param_1[10];
  if ((void *)param_1[0xb] != pvVar1) {
    uVar2 = 0;
    do {
      operator_delete(*(void **)((long)pvVar1 + uVar2 * 8));
      pvVar1 = (void *)param_1[10];
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)(param_1[0xb] - (long)pvVar1 >> 3));
  }
  if (pvVar1 != (void *)0x0) {
    param_1[0xb] = (long)pvVar1;
    operator_delete(pvVar1);
  }
  FUN_00861830(param_1 + 7,param_1[8]);
  FUN_00861880(param_1 + 4,param_1[5]);
  FUN_00861880(param_1 + 1,param_1[2]);
  return;
}


