/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117dec0; name: _INIT_1383
 */


void _INIT_1383(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((DAT_02a64380 & 1) == 0) {
    DAT_02a64380 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/poke_select/protocol_buffers/out/data/poke_select_async_data_holder.pb.cc"
                );
    FUN_0117e030();
    FUN_007e26f0(&DAT_021663d2,0x137);
    FUN_00818650("poke_select_async_data_holder.proto",&LAB_0117d3c0);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_027250e0;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_027250d8 = plVar2;
    DAT_02a64398 = operator_new(0x10);
    *DAT_02a64398 = 0;
    DAT_02a64398[1] = 0;
    *(undefined1 *)(plVar2 + 2) = 1;
    uVar3 = FUN_0117e500();
    *DAT_02a64398 = uVar3;
    uVar3 = FUN_0117ec10();
    DAT_02a64398[1] = uVar3;
    FUN_008010b0(PTR_FUN_027250e8);
    return;
  }
  return;
}


