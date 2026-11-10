/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001408f0; name: FUN_001408f0
 */


void FUN_001408f0(undefined8 *param_1,undefined8 param_2)

{
  void *__dest;
  
  __dest = (void *)FUN_003c3120(param_2,*(int *)((long)param_1 + 0xc) << 3,1);
  memcpy(__dest,(void *)*param_1,(ulong)(uint)(*(int *)((long)param_1 + 0xc) << 2));
  FUN_00111d30(param_2,*param_1);
  *param_1 = __dest;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) << 1;
  return;
}


