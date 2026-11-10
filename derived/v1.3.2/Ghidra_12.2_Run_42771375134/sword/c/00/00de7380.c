/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de7380; name: FUN_00de7380
 */


void FUN_00de7380(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = *(long *)(param_1 + 0x170);
  FUN_0075efb0(auStack_30,*(undefined8 *)(lVar1 + 8),0,1);
  local_28 = lVar1 + 0x30;
  (*(code *)*param_2)(param_2 + 4,&local_28);
  FUN_0075f0a0(auStack_30);
  return;
}


