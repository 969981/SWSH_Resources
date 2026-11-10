/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006348c0; name: FUN_006348c0
 */


undefined8 FUN_006348c0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  FUN_006966f0(auStack_30,param_1 + 0x18,1);
  if (*(long *)(param_1 + 0xa0) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x20);
  }
  FUN_00696730(auStack_30);
  return uVar1;
}


