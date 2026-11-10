/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ad660; name: FUN_009ad660
 */


void FUN_009ad660(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_28 [8];
  undefined2 local_18 [4];
  
  local_18[0] = 0;
  FUN_00942450();
  uVar1 = FUN_00925a80();
  FUN_009ac220(uVar1,auStack_28,local_18);
  uVar1 = FUN_00942380(param_1);
  uVar2 = FUN_008f93a0(uVar1,0);
  if ((uVar2 & 1) != 0) {
    FUN_009ad7b0(param_1,0);
  }
  uVar1 = FUN_00942380(param_1);
  uVar2 = FUN_008f93a0(uVar1,1);
  if ((uVar2 & 1) != 0) {
    FUN_009ad7b0(param_1,1);
  }
  uVar1 = FUN_009423b0(param_1);
  FUN_00938f70(uVar1,0);
  FUN_009ad700(param_1);
  return;
}


