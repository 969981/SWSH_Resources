/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009beed0; name: FUN_009beed0
 */


long FUN_009beed0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR_DAT_02718790;
  if (*(long *)PTR_DAT_02718790 != 0) {
    return *(long *)PTR_DAT_02718790;
  }
  if ((DAT_02a4fe5b & 1) == 0) {
    DAT_02a4fe5b = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out/data/server_version.pb.cc"
                );
    FUN_007e26f0(&DAT_01d1e7b2,0x7f);
    FUN_00818650("server_version.proto",&LAB_009bec70);
    plVar3 = operator_new(0x30);
    *(undefined4 *)(plVar3 + 5) = 0;
    puVar1 = PTR_DAT_02718788;
    plVar3[3] = 0;
    plVar3[4] = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    *(long **)puVar2 = plVar3;
    *(undefined1 *)(plVar3 + 2) = 1;
    FUN_008010b0(PTR_LAB_02718798);
    return *(long *)puVar2;
  }
  return 0;
}


