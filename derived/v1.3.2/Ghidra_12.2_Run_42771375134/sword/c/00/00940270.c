/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00940270; name: FUN_00940270
 */


undefined1 FUN_00940270(long param_1,undefined1 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined1 local_18 [8];
  
  local_20[0] = param_2;
  local_1c = param_3;
  uVar1 = FUN_009255a0(*(undefined8 *)(param_1 + 0x20));
  FUN_0096bf20(uVar1,local_18,local_20);
  return local_18[0];
}


