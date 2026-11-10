/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a579b0; name: FUN_00a579b0
 */


void FUN_00a579b0(long param_1)

{
  undefined8 uVar1;
  undefined2 local_30 [2];
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_009e3340(*(undefined8 *)(param_1 + 0x40));
  FUN_00ffa3d0(uVar1,0);
  local_2c = 0x23;
  local_26 = 0;
  local_30[0] = 0;
  local_28 = 0x100;
  FUN_00a5a320(uVar1,*(undefined8 *)(param_1 + 0x40),local_30);
  return;
}


