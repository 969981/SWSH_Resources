/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc66f0; name: FUN_00bc66f0
 */


void FUN_00bc66f0(long param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  param_1 = param_1 + 0x100;
  local_18 = 0xddc788ee97937f68;
  FUN_00ffd010(param_1,&local_18);
  uVar1 = FUN_00ffdc80(param_1,"marking_panel");
  FUN_016b2d70(uVar1,0);
  local_18 = 0xcdb58c6bed828b7f;
  uVar1 = FUN_00ffdef0(param_1,&local_18);
  FUN_016b2da0(uVar1,0);
  return;
}


