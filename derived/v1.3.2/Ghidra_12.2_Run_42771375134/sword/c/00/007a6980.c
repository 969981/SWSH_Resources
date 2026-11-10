/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a6980; name: FUN_007a6980
 */


void FUN_007a6980(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_027166d0;
  if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/request_forced_proceed.pb.cc"
                 ,0x13f);
  }
  lVar6 = *(long *)PTR_DAT_027166d0;
  if (lVar6 == 0) {
    if ((DAT_029f4cbb & 1) == 0) {
      DAT_029f4cbb = 1;
      FUN_00800890(3000000,3000000,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/request_forced_proceed.pb.cc"
                  );
      FUN_007e26f0(&DAT_01d148c5,0x82);
      FUN_00818650("request_forced_proceed.proto",&LAB_007a6210);
      plVar3 = operator_new(0x20);
      *(undefined4 *)((long)plVar3 + 0x1c) = 0;
      puVar1 = PTR_DAT_027166c8;
      *(undefined8 *)((long)plVar3 + 0x14) = 0;
      *(long **)puVar2 = plVar3;
      *plVar3 = (long)(puVar1 + 0x10);
      plVar3[1] = 0;
      *(undefined1 *)(plVar3 + 2) = 1;
      FUN_008010b0(PTR_LAB_027166d8);
      lVar6 = *(long *)puVar2;
    }
    else {
      lVar6 = 0;
    }
  }
  plVar3 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x280))();
  uVar4 = (**(code **)(*param_2 + 0xb8))(param_2);
  lVar5 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar4);
  if (lVar6 != lVar5) {
    FUN_00824470(param_2,param_1);
    return;
  }
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/request_forced_proceed.pb.cc"
                 ,0x150);
  }
  if (*(int *)((long)param_2 + 0x14) != 0) {
    *(int *)((long)param_1 + 0x14) = *(int *)((long)param_2 + 0x14);
  }
  if ((int)param_2[3] != 0) {
    *(int *)(param_1 + 3) = (int)param_2[3];
  }
  return;
}


