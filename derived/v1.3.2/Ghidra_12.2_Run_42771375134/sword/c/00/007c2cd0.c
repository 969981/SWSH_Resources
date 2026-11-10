/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c2cd0; name: FUN_007c2cd0
 */


void FUN_007c2cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 local_1a0 [384];
  
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 != 0) {
    FUN_007c1fa0(local_1a0,param_2,param_3);
    FUN_007c34a0(lVar1,local_1a0);
  }
  return;
}


