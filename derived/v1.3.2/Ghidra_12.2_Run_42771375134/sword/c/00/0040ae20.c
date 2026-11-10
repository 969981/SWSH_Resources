/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040ae20; name: FUN_0040ae20
 */


undefined8 FUN_0040ae20(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  
  FUN_00408a20();
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_00406a70(*(undefined8 *)PTR_DAT_02712a60,param_1,param_3,param_2,param_4 & 1);
    return uVar1;
  }
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60);
  return 1;
}


