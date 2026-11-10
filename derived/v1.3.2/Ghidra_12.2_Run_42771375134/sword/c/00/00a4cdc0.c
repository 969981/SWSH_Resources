/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a4cdc0; name: FUN_00a4cdc0
 */


void FUN_00a4cdc0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x5d8);
  local_38 = 0;
  FUN_016b7700(uVar2,param_2,&local_38,0);
  uVar1 = FUN_016b8210(uVar2,&local_38);
  if ((uVar1 & 1) != 0) {
    local_40 = 0;
    local_38 = 0;
    FUN_016b7700(*(undefined8 *)(param_1 + 0x5d8),param_2,&local_38,&local_40);
    *(undefined8 *)(param_1 + 0x6f8) = local_38;
    if ((param_3 & 1) != 0) {
      FUN_00a39fd0(param_1,*(undefined8 *)(param_1 + 0x5d8),local_38,1);
    }
  }
  return;
}


