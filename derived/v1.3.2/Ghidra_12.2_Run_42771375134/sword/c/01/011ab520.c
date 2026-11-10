/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ab520; name: FUN_011ab520
 */


void FUN_011ab520(long *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_02725478;
  if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/out/data/player_position.pb.cc"
                 ,0x276);
  }
  lVar5 = *(long *)PTR_DAT_02725478;
  if (lVar5 == 0) {
    FUN_011aa540();
    lVar5 = *(long *)puVar1;
  }
  plVar2 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x280))();
  uVar3 = (**(code **)(*param_2 + 0xb8))(param_2);
  lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
  if (lVar5 != lVar4) {
    FUN_00824470(param_2,param_1);
    return;
  }
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/out/data/player_position.pb.cc"
                 ,0x287);
  }
  FUN_011ab600(param_1 + 3,param_2 + 3);
  return;
}


