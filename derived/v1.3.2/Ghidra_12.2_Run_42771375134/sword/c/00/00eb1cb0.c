/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb1cb0; name: FUN_00eb1cb0
 */


undefined4 FUN_00eb1cb0(long param_1)

{
  long lVar1;
  long local_18;
  
  FUN_00deff50(&local_18,param_1 + 0x560);
  lVar1 = FUN_00eb1b80(local_18 + 0x50);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  if (lVar1 == 0) {
    return 1;
  }
  return *(undefined4 *)(lVar1 + 0x600);
}


