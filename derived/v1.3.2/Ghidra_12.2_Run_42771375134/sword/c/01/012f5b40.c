/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f5b40; name: FUN_012f5b40
 */


void * FUN_012f5b40(undefined8 param_1,long param_2)

{
  void *pvVar1;
  
  if (param_2 == 0) {
    pvVar1 = operator_new(0x20);
    FUN_012f9d80();
    return pvVar1;
  }
  pvVar1 = (void *)FUN_0080efb0(param_2,0,0x20);
  FUN_012f9d80();
  FUN_0080eeb0(param_2,pvVar1,PTR_LAB_02727c18);
  return pvVar1;
}


