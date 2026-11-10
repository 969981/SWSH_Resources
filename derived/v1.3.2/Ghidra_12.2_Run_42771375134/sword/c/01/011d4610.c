/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d4610; name: _INIT_1421
 */


void _INIT_1421(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((DAT_02a65180 & 1) == 0) {
    DAT_02a65180 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_state/protocol_buffers/out/data/box_sync_state_data_holder.pb.cc"
                );
    FUN_011d2220();
    FUN_011d2e40();
    FUN_007e26f0(&DAT_02167c0c,0x184);
    FUN_00818650("box_sync_state_data_holder.proto",&LAB_011d3b10);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02725958;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_02725950 = plVar2;
    DAT_02a65198 = operator_new(0x10);
    *DAT_02a65198 = 0;
    DAT_02a65198[1] = 0;
    *(undefined1 *)(plVar2 + 2) = 1;
    uVar3 = FUN_011d2660();
    *DAT_02a65198 = uVar3;
    uVar3 = FUN_011d3170();
    DAT_02a65198[1] = uVar3;
    FUN_008010b0(PTR_LAB_02725960);
    return;
  }
  return;
}


