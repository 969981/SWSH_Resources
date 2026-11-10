/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083e2a0; name: FUN_0083e2a0
 */


undefined8 * FUN_0083e2a0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == 0) {
    puVar1 = operator_new(0x18);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    return puVar1;
  }
  puVar1 = (undefined8 *)FUN_0080efb0(param_2,0,0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_0080eeb0(param_2,puVar1,PTR_LAB_02716e80);
  return puVar1;
}


