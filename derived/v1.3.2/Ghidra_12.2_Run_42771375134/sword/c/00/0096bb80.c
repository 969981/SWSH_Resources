/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096bb80; name: FUN_0096bb80
 */


void FUN_0096bb80(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  undefined8 local_28;
  undefined1 local_18 [8];
  
  local_30[0] = *param_3;
  local_28 = *(undefined8 *)(param_3 + 2);
  FUN_00942450();
  uVar1 = FUN_00925330();
  FUN_00947340(uVar1,local_18,local_30);
  *param_2 = local_18[0];
  return;
}


