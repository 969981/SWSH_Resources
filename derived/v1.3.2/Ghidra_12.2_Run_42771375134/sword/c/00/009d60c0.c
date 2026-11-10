/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d60c0; name: FUN_009d60c0
 */


void FUN_009d60c0(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_027189b8;
  if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out_async/data/watch_clienttimer.pb.cc"
                 ,0x12e);
  }
  lVar6 = *(long *)PTR_DAT_027189b8;
  if (lVar6 == 0) {
    FUN_009d5790();
    lVar6 = *(long *)puVar2;
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
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out_async/data/watch_clienttimer.pb.cc"
                 ,0x13f);
  }
  if ((int)param_2[4] != 0) {
    *(int *)(param_1 + 4) = (int)param_2[4];
  }
  bVar1 = *(byte *)param_2[3];
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)((byte *)param_2[3] + 8) == 0) {
    return;
  }
  FUN_00860e40(param_1 + 3,*(undefined8 *)PTR_DAT_02716d10);
  return;
}


