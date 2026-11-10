/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0082b780; name: FUN_0082b780
 */


uint FUN_0082b780(undefined8 param_1,ulong param_2,undefined8 param_3,long *param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte local_a0;
  char local_9f;
  undefined1 auStack_80 [48];
  undefined1 auStack_48 [8];
  
  uVar5 = param_2 >> 3 & 0x1fffffff;
  uVar3 = (**(code **)(*param_4 + 0x10))(param_4,uVar5,&local_a0);
  if ((uVar3 & 1) == 0) {
LAB_0082b874:
    uVar2 = (**(code **)(*param_5 + 0x10))(param_5,param_3,param_2 & 0xffffffff);
    goto LAB_0082b88c;
  }
  uVar1 = *(uint *)(PTR_DAT_02716f98 + (ulong)local_a0 * 4);
  uVar2 = (uint)param_2 & 7;
  if ((uVar2 == 2) && (local_9f != '\0')) {
    if (5 < uVar1) {
      FUN_00801270(auStack_80,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_set.cc"
                   ,0x4a);
      uVar4 = FUN_00800f30(auStack_80,"can\'t reach here.");
      FUN_00800fa0(auStack_48,uVar4);
      FUN_00801290(auStack_80);
      if (uVar1 != 2) goto LAB_0082b874;
      goto LAB_0082b810;
    }
    uVar4 = 1;
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x1cU) != 0) goto LAB_0082b808;
  }
  else {
LAB_0082b808:
    if (uVar1 != uVar2) goto LAB_0082b874;
LAB_0082b810:
    uVar4 = 0;
  }
  uVar2 = FUN_0082b8b0(param_1,uVar5,uVar4,&local_a0,param_3,param_5);
LAB_0082b88c:
  return uVar2 & 1;
}


