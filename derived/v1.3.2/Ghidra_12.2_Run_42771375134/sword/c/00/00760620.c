/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00760620; name: FUN_00760620
 */


bool FUN_00760620(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return true;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  FUN_00760090(auStack_38,param_1,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  return lVar1 == local_28;
}


