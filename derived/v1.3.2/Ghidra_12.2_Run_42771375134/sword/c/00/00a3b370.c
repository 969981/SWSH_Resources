/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a3b370; name: FUN_00a3b370
 */


void FUN_00a3b370(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x630);
  FUN_016b7700(uVar2,param_2,&local_28,0);
  uVar1 = FUN_016b8210(uVar2,&local_28);
  if ((uVar1 & 1) != 0) {
    local_28 = 0;
    local_38 = 0;
    FUN_016b7700(*(undefined8 *)(param_1 + 0x630),param_2,&local_28,&local_38);
    *(undefined8 *)(param_1 + 0x638) = local_28;
  }
  return;
}


