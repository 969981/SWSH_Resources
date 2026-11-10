/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d8aa0; name: FUN_009d8aa0
 */


void FUN_009d8aa0(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((DAT_02a5043b & 1) == 0) {
    DAT_02a5043b = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out_async/data/btlwatch_async_data_holder.pb.cc"
                );
    FUN_009db160();
    FUN_009d5790();
    FUN_009d3a20();
    FUN_009d2090();
    FUN_009da450();
    FUN_009d6510();
    FUN_009d2d10();
    FUN_009d4a70();
    FUN_007e26f0(&DAT_0214cbf4,0x341);
    FUN_00818650("btlwatch_async_data_holder.proto",&LAB_009d8c50);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02718a40;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_02718a38 = plVar2;
    puVar3 = operator_new(0x40);
    puVar3[6] = 0;
    puVar3[7] = 0;
    DAT_02a50468 = puVar3;
    *(undefined1 *)(plVar2 + 2) = 1;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    uVar4 = FUN_009db790();
    *DAT_02a50468 = uVar4;
    uVar4 = FUN_009d5bc0();
    DAT_02a50468[1] = uVar4;
    uVar4 = FUN_009d3e80();
    DAT_02a50468[2] = uVar4;
    uVar4 = FUN_009d24d0();
    DAT_02a50468[3] = uVar4;
    uVar4 = FUN_009da7a0();
    DAT_02a50468[4] = uVar4;
    uVar4 = FUN_009d6950();
    DAT_02a50468[5] = uVar4;
    uVar4 = FUN_009d3060();
    DAT_02a50468[6] = uVar4;
    uVar4 = FUN_009d4dc0();
    DAT_02a50468[7] = uVar4;
    FUN_008010b0(PTR_FUN_02718a48);
    return;
  }
  return;
}


