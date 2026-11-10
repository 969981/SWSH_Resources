/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d092a0; name: FUN_00d092a0
 */


void FUN_00d092a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  if ((DAT_02a58018 & 1) == 0) {
    DAT_02a58018 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffers/out/data/empty_cmd.pb.cc"
                );
    FUN_007e26f0(&DAT_01d0ac00,0x4e);
    FUN_00818650("empty_cmd.proto",&LAB_00d09390);
    plVar3 = operator_new(0x18);
    puVar2 = PTR_DAT_0271cda0;
    puVar1 = PTR_DAT_0271cd98;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_0271cda8);
    return;
  }
  return;
}


