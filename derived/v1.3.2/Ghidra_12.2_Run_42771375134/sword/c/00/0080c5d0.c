/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080c5d0; name: FUN_0080c5d0
 */


undefined8 FUN_0080c5d0(long *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if ((*param_2 & 1) == 0) {
    uVar7 = (uint)(*param_2 >> 1);
  }
  else {
    uVar7 = (uint)*(undefined8 *)(param_2 + 8);
  }
  iVar2 = (**(code **)(*param_1 + 0x60))(param_1);
  if (iVar2 < 0) {
    FUN_00801270(auStack_60,2,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/message_lite.cc"
                 ,0x126);
    uVar4 = FUN_00800f30(auStack_60,"Error computing ByteSize (possible overflow?).");
    FUN_00800fa0(auStack_68,uVar4);
    FUN_00801290(auStack_60);
    return 0;
  }
  std::string::resize((ulong)param_2,(char)iVar2 + (char)uVar7);
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) {
LAB_0080c63c:
      if ((bVar1 & 1) == 0) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = *(byte **)(param_2 + 0x10);
      }
      goto LAB_0080c6a0;
    }
  }
  else if (*(long *)(param_2 + 8) != 0) goto LAB_0080c63c;
  param_2 = (byte *)0x0;
LAB_0080c6a0:
  lVar5 = (**(code **)(*param_1 + 0x70))(param_1,param_2 + (int)uVar7);
  uVar6 = lVar5 - (long)(param_2 + (int)uVar7);
  if (uVar6 != (long)iVar2) {
    uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
    FUN_0080c430(iVar2,uVar3,uVar6 & 0xffffffff,param_1);
  }
  return 1;
}


