/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01565760; name: FUN_01565760
 */


undefined8 FUN_01565760(undefined8 param_1,long param_2)

{
  long local_28;
  long local_18;
  
  FUN_015768f0(&local_18,param_1,*(undefined8 *)(param_2 + 8));
  FUN_0156c010(&local_28,*(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68),&local_18,param_1);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_00770690(param_1,0xc);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return 1;
}


