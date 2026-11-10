/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b3d40; name: FUN_011b3d40
 */


void FUN_011b3d40(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((DAT_02a64bf8 & 1) == 0) {
    DAT_02a64bf8 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/async_cmd_out/data/nbr_async_data_holder.pb.cc"
                );
    FUN_011b4d60();
    FUN_011b3330();
    FUN_011b2920();
    FUN_007e26f0(&DAT_02167450,0x1c7);
    FUN_00818650("nbr_async_data_holder.proto",&LAB_011b3ea0);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02725618;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_02725610 = plVar2;
    DAT_02a64c10 = operator_new(0x18);
    DAT_02a64c10[1] = 0;
    DAT_02a64c10[2] = 0;
    *DAT_02a64c10 = 0;
    *(undefined1 *)(plVar2 + 2) = 1;
    uVar3 = FUN_011b50a0();
    *DAT_02a64c10 = uVar3;
    uVar3 = FUN_011b3660();
    DAT_02a64c10[1] = uVar3;
    uVar3 = FUN_011b2c50();
    DAT_02a64c10[2] = uVar3;
    FUN_008010b0(PTR_LAB_02725620);
    return;
  }
  return;
}


