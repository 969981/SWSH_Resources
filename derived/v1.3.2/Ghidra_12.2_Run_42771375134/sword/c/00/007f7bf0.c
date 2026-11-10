/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f7bf0; name: FUN_007f7bf0
 */


void * FUN_007f7bf0(undefined8 param_1,long param_2)

{
  void *pvVar1;
  
  if (param_2 == 0) {
    pvVar1 = operator_new(0x40);
    FUN_0084fd90();
    return pvVar1;
  }
  pvVar1 = (void *)FUN_0080efb0(param_2,0,0x40);
  FUN_0084fd90();
  FUN_0080eeb0(param_2,pvVar1,PTR_LAB_02716e90);
  return pvVar1;
}


