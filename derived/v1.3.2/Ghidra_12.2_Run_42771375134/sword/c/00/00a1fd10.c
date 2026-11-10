/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1fd10; name: FUN_00a1fd10
 */


void FUN_00a1fd10(void)

{
  long local_30 [3];
  long local_18;
  
  FUN_00a1fb60(local_30);
  if (local_30[0] != 0) {
    FUN_016d3620(local_30);
  }
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


