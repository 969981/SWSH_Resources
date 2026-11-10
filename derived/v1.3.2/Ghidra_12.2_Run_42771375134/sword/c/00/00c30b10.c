/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c30b10; name: FUN_00c30b10
 */


long FUN_00c30b10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR_DAT_0271bc38;
  if (*(long *)PTR_DAT_0271bc38 != 0) {
    return *(long *)PTR_DAT_0271bc38;
  }
  if ((DAT_02a56ea3 & 1) == 0) {
    DAT_02a56ea3 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/btl_spot/source/state/protocol_buffers/out/data/btl_spot_empty.pb.cc"
                );
    FUN_007e26f0(&DAT_01ce564b,0x56);
    FUN_00818650("btl_spot_empty.proto",&LAB_00c308d0);
    plVar3 = operator_new(0x18);
    puVar1 = PTR_DAT_0271bc30;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *(long **)puVar2 = plVar3;
    *(undefined1 *)(plVar3 + 2) = 1;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_0271bc40);
    return *(long *)puVar2;
  }
  return 0;
}


