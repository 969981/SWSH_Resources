/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc7580; name: FUN_00bc7580
 */


undefined8 FUN_00bc7580(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  
  local_28 = 0xf78f08aee6d6cde6;
  if ((*(long *)(param_1 + 0x2b0) == 0) ||
     (uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28), (uVar1 & 1) != 0)) {
    uVar2 = FUN_00ffdc80(param_1 + 0x100,"poke_panel");
    local_28 = FUN_016b8190();
    uVar3 = 1;
    FUN_016b7990(uVar2,&local_28,1,0);
    FUN_00bb6fe0(param_1,0xb4fcbe101d4d322d,0xdc82951337bf2d1b);
    *(undefined4 *)(param_1 + 0x68c) = 0;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


