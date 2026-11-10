/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00918e90; name: FUN_00918e90
 */


void FUN_00918e90(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 local_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_00915300(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_00925b90(*(undefined8 *)(param_1 + 0x18));
  FUN_009adad0(uVar1,local_30,auStack_28);
  *param_2 = local_30[0];
  return;
}


