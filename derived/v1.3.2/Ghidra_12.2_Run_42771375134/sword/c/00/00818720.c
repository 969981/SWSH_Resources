/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00818720; name: FUN_00818720
 */


void FUN_00818720(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *local_60;
  undefined1 *puStack_58;
  undefined1 local_50;
  undefined1 auStack_28 [8];
  
  if (DAT_029f5720 != 2) {
    local_50 = 0;
    local_60 = PTR_DAT_02716670 + 0x10;
    puStack_58 = &LAB_00818d20;
    FUN_00801c10(&DAT_029f5720,&local_60);
    FUN_00801390(&local_60);
  }
  lVar1 = DAT_029f5728;
  FUN_00801560(DAT_029f5728 + 0x30);
  local_60 = param_1;
  puStack_58 = (undefined1 *)param_2;
  uVar2 = FUN_00819d70(lVar1 + 0x38,&local_60);
  if ((uVar2 & 1) == 0) {
    FUN_00801270(&local_60,2,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message.cc"
                 ,0x15a);
    uVar3 = FUN_00800f30(&local_60,"Type is already registered: ");
    uVar3 = FUN_00800f60(uVar3,*(undefined8 *)(param_1 + 8));
    FUN_00800fa0(auStack_28,uVar3);
    FUN_00801290(&local_60);
  }
  return;
}


