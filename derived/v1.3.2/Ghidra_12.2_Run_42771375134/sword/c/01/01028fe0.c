/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01028fe0; name: FUN_01028fe0
 */


undefined8 FUN_01028fe0(void)

{
  undefined8 local_18;
  
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_18,8);
  return local_18;
}


