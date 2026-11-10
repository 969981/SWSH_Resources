/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f6090; name: FUN_007f6090
 */


void FUN_007f6090(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long extraout_x1;
  undefined1 local_60;
  undefined7 uStack_5f;
  char cStack_58;
  undefined7 uStack_57;
  char local_50;
  undefined4 uStack_4f;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  undefined1 auStack_28 [8];
  
  lVar2 = (**(code **)(*param_3 + 0xb8))(param_3);
  local_60 = 0x28;
  uStack_4a = 0;
  uStack_57 = s_uninterpreted_option_01cdde88._8_7_;
  local_50 = s_uninterpreted_option_01cdde88[0xf];
  uStack_5f = s_uninterpreted_option_01cdde88._0_7_;
  cStack_58 = s_uninterpreted_option_01cdde88[7];
  uStack_4b = 0;
  uStack_4f = 0x6e6f6974;
  iVar1 = FUN_007e3d50(*(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x98),lVar2,&local_60,2);
  if (((iVar1 == 0) || (*(char *)(extraout_x1 + 0x44) != '\0')) ||
     (lVar2 = extraout_x1, extraout_x1 == 0)) {
    FUN_00801270(&local_60,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.cc"
                 ,0x16ac);
    uVar3 = FUN_00800f30(&local_60,"CHECK failed: field != NULL: ");
    FUN_00800fa0(auStack_28,uVar3);
    FUN_00801290(&local_60);
    lVar2 = 0;
  }
  plVar4 = (long *)(**(code **)(*param_3 + 0xb0))(param_3);
  plVar4 = (long *)(**(code **)(*plVar4 + 600))(plVar4,param_3,lVar2,0);
  (**(code **)(*plVar4 + 0x88))(plVar4,param_2);
  return;
}


