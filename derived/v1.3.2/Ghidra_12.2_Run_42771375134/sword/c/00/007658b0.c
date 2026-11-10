/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007658b0; name: FUN_007658b0
 */


undefined8 FUN_007658b0(long param_1)

{
  nn::os::SendMessageQueue((MessageQueueType *)(param_1 + 0x260),1);
  return 0;
}


