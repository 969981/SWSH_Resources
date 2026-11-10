/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1d940; name: FUN_00a1d940
 */


void FUN_00a1d940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  local_48 = *(undefined8 *)(param_1 + 0x240);
  local_40 = *(undefined8 *)(param_1 + 0x238);
  local_28 = 0x28;
  local_24 = 1;
  uStack_38 = param_2;
  local_30 = param_3;
  FUN_00a10760(param_1,&local_48);
  FUN_019a65b0(*(undefined8 *)(param_1 + 0x270));
  FUN_019a65b0(*(undefined8 *)(param_1 + 0x278));
  return;
}


