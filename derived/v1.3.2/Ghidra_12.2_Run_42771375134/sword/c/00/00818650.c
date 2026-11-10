/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00818650; name: FUN_00818650
 */


void FUN_00818650(undefined *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined *local_50;
  undefined1 *puStack_48;
  undefined1 local_40;
  
  if (DAT_029f5720 != 2) {
    local_40 = 0;
    local_50 = PTR_DAT_02716670 + 0x10;
    puStack_48 = &LAB_00818d20;
    FUN_00801c10(&DAT_029f5720,&local_50);
    FUN_00801390(&local_50);
  }
  local_50 = param_1;
  puStack_48 = (undefined1 *)param_2;
  uVar1 = FUN_00819b00(DAT_029f5728 + 8,&local_50);
  if ((uVar1 & 1) == 0) {
    FUN_00801270(&local_50,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message.cc"
                 ,0x14b);
    uVar2 = FUN_00800f30(&local_50,"File is already registered: ");
    uVar2 = FUN_00800f30(uVar2,param_1);
    FUN_00800fa0(auStack_58,uVar2);
    FUN_00801290(&local_50);
  }
  return;
}


