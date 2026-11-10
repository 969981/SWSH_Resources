/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009400e0; name: FUN_009400e0
 */


undefined1 FUN_009400e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18 [8];
  
  uVar1 = FUN_009258b0(*(undefined8 *)(param_1 + 0x20));
  FUN_0095e250(uVar1,local_18,param_2);
  return local_18[0];
}


