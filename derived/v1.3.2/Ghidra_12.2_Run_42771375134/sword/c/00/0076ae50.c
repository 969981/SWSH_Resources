/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076ae50; name: FUN_0076ae50
 */


undefined8 FUN_0076ae50(MultiWaitType *param_1)

{
  MultiWaitHolderType *pMVar1;
  
  pMVar1 = (MultiWaitHolderType *)FUN_0076b010();
  nn::os::LinkMultiWaitHolder(param_1,pMVar1);
  return 0;
}


