/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084fb10; name: FUN_0084fb10
 */


void FUN_0084fb10(long *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_02716e58;
  if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/descriptor.pb.cc"
                 ,0x15fb);
  }
  lVar5 = *(long *)PTR_DAT_02716e58;
  if (lVar5 == 0) {
    FUN_00844a80();
    lVar5 = *(long *)puVar1;
  }
  plVar2 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x280))();
  uVar3 = (**(code **)(*param_2 + 0xb8))(param_2);
  lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
  if (lVar5 == lVar4) {
    FUN_0084f110(param_1,param_2);
    return;
  }
  FUN_00824470(param_2,param_1);
  return;
}


