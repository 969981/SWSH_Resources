/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a6eb0; name: FUN_007a6eb0
 */


void FUN_007a6eb0(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((DAT_029f4cfb & 1) == 0) {
    DAT_029f4cfb = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/sequence_data_holder.pb.cc"
                );
    FUN_007a3b80();
    FUN_007a4940();
    FUN_007a5520();
    FUN_007a6110();
    FUN_007e26f0(&DAT_0213fc44,0x1de);
    FUN_00818650("sequence_data_holder.proto",&LAB_007a7020);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_027166f0;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_027166e8 = plVar2;
    puVar3 = operator_new(0x20);
    puVar3[2] = 0;
    puVar3[3] = 0;
    DAT_029f4d28 = puVar3;
    *(undefined1 *)(plVar2 + 2) = 1;
    *puVar3 = 0;
    puVar3[1] = 0;
    uVar4 = FUN_007a3ef0();
    *DAT_029f4d28 = uVar4;
    uVar4 = FUN_007a4c70();
    DAT_029f4d28[1] = uVar4;
    uVar4 = FUN_007a5850();
    DAT_029f4d28[2] = uVar4;
    uVar4 = FUN_007a6460();
    DAT_029f4d28[3] = uVar4;
    FUN_008010b0(PTR_LAB_027166f8);
    return;
  }
  return;
}


