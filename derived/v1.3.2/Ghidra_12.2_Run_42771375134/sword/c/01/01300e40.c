/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01300e40; name: FUN_01300e40
 */


void FUN_01300e40(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/cooking_data.pb.cc"
                 ,0x1c2);
  }
  lVar1 = FUN_01300300();
  plVar2 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x280))();
  uVar3 = (**(code **)(*param_2 + 0xb8))(param_2);
  lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
  if (lVar1 != lVar4) {
    FUN_00824470(param_2,param_1);
    return;
  }
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00816410("C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/cooking_data.pb.cc"
                 ,0x1d3);
  }
  FUN_0081a4e0(param_1 + 4,param_2 + 4);
  if (*(int *)((long)param_2 + 0x14) != 0) {
    *(int *)((long)param_1 + 0x14) = *(int *)((long)param_2 + 0x14);
  }
  if ((int)param_2[3] != 0) {
    *(int *)(param_1 + 3) = (int)param_2[3];
  }
  if (*(int *)((long)param_2 + 0x34) != 0) {
    *(int *)((long)param_1 + 0x34) = *(int *)((long)param_2 + 0x34);
  }
  if ((char)param_2[7] != '\0') {
    *(undefined1 *)(param_1 + 7) = 1;
  }
  return;
}


