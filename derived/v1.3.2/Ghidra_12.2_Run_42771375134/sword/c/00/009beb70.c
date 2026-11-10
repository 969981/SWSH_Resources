/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009beb70; name: FUN_009beb70
 */


void FUN_009beb70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  if ((DAT_02a4fe5b & 1) == 0) {
    DAT_02a4fe5b = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out/data/server_version.pb.cc"
                );
    FUN_007e26f0(&DAT_01d1e7b2,0x7f);
    FUN_00818650("server_version.proto",&LAB_009bec70);
    plVar3 = operator_new(0x30);
    puVar2 = PTR_DAT_02718790;
    puVar1 = PTR_DAT_02718788;
    *(undefined4 *)(plVar3 + 5) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    plVar3[3] = 0;
    plVar3[4] = 0;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02718798);
    return;
  }
  return;
}


