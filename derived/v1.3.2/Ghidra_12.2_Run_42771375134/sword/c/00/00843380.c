/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00843380; name: FUN_00843380
 */


undefined1  [16] FUN_00843380(byte *param_1)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  byte local_78 [16];
  void *local_68;
  undefined1 auStack_60 [48];
  byte *local_28;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar5 = param_1 + 1;
  }
  auVar6 = FUN_00843c90(pbVar5,&local_28);
  uVar7 = auVar6._8_8_;
  bVar2 = *local_28;
  pbVar3 = local_28;
  if ((bVar2 | 0x20) == 0x65) {
    bVar2 = local_28[1];
    if ((bVar2 == 0x2d) || (pbVar3 = local_28 + 1, bVar2 == 0x2b)) {
      bVar2 = local_28[2];
      pbVar3 = local_28 + 2;
    }
  }
  local_28 = pbVar3;
  if ((bVar2 | 0x20) == 0x66) {
    local_28 = local_28 + 1;
  }
  uVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (((long)local_28 - (long)pbVar5 != uVar1) || (*pbVar5 == 0x2d)) {
    FUN_00801270(auStack_60,2,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/io/tokenizer.cc"
                 ,0x397);
    uVar4 = FUN_00800f30(auStack_60,
                         " Tokenizer::ParseFloat() passed text that could not have been tokenized as a float: "
                        );
    FUN_007ff6d0(local_78,param_1);
    uVar4 = FUN_00800f60(uVar4,local_78);
    FUN_00800fa0(auStack_80,uVar4);
    if ((local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    FUN_00801290(auStack_60);
  }
  auVar6._8_8_ = uVar7;
  return auVar6;
}


