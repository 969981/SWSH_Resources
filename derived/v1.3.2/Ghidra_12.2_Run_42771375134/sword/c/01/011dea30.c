/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011dea30; name: FUN_011dea30
 */


long FUN_011dea30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR_DAT_02725b10;
  if (*(long *)PTR_DAT_02725b10 != 0) {
    return *(long *)PTR_DAT_02725b10;
  }
  if ((DAT_02a652e0 & 1) == 0) {
    DAT_02a652e0 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/trade/common/sync_save/protocol_buffers/out/data/sync_command.pb.cc"
                );
    FUN_007e26f0(&DAT_01ce9238,0x6f);
    FUN_00818650("sync_command.proto",&LAB_011de7f0);
    plVar3 = operator_new(0x20);
    puVar1 = PTR_DAT_02725b08;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *(long **)puVar2 = plVar3;
    *(undefined1 *)(plVar3 + 2) = 1;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02725b18);
    return *(long *)puVar2;
  }
  return 0;
}


