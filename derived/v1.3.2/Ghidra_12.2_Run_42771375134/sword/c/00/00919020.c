/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00919020; name: FUN_00919020
 */


undefined1 FUN_00919020(long param_1)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined1 auStack_18 [8];
  
  FUN_00915300(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_00925b80(*(undefined8 *)(param_1 + 0x18));
  FUN_009abe30(uVar1,local_28,auStack_18);
  return local_28[0];
}


