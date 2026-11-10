/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01028f70; name: FUN_01028f70
 */


void FUN_01028f70(undefined8 *param_1)

{
  undefined8 local_18;
  
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_18,8);
  *param_1 = local_18;
  param_1[1] = 0x82a2b175229d6a5b;
  param_1[2] = local_18;
  return;
}


