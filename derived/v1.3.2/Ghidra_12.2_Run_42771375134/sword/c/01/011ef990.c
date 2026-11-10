/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ef990; name: FUN_011ef990
 */


void FUN_011ef990(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if ((DAT_02a65518 & 1) == 0) {
    DAT_02a65518 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/underground/protocol_buffers/out/data/underground_async_data_holder.pb.cc"
                );
    FUN_011e7460();
    FUN_007e26f0(&DAT_021681cc,0x60d);
    FUN_00818650("underground_async_data_holder.proto",&LAB_011efad0);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02725cb0;
    *(undefined1 *)(plVar2 + 2) = 0;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_02725ca8 = plVar2;
    puVar3 = operator_new(0x70);
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    DAT_02a65530 = puVar3;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    FUN_011efb60(plVar2);
    FUN_008010b0(PTR_FUN_02725cb8);
    return;
  }
  return;
}


