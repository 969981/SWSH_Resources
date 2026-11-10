/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011dfba0; name: _INIT_1428
 */


void _INIT_1428(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((DAT_02a65308 & 1) == 0) {
    DAT_02a65308 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/trade/common/sync_save/protocol_buffers/out/data/sync_save_data_holder.pb.cc"
                );
    FUN_011de700();
    FUN_007e26f0(&DAT_02167f78,0xea);
    FUN_00818650("sync_save_data_holder.proto",&LAB_011df3c0);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02725b30;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_02725b28 = plVar2;
    DAT_02a65328 = operator_new(8);
    *DAT_02a65328 = 0;
    *(undefined1 *)(plVar2 + 2) = 1;
    uVar3 = FUN_011dea30();
    *DAT_02a65328 = uVar3;
    FUN_008010b0(PTR_LAB_02725b38);
    return;
  }
  return;
}


