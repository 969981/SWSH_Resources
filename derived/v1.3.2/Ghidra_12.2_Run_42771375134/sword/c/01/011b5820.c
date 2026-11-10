/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b5820; name: _INIT_1409
 */


void _INIT_1409(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  if ((DAT_02a64c40 & 1) == 0) {
    DAT_02a64c40 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/async_cmd_out/data/player_position_async.pb.cc"
                );
    FUN_007e26f0(&DAT_01d3eade,0x8b);
    FUN_00818650("player_position_async.proto",&LAB_011b4e50);
    plVar3 = operator_new(0x28);
    puVar2 = PTR_DAT_02725638;
    puVar1 = PTR_DAT_02725630;
    plVar3[3] = 0;
    plVar3[4] = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02725640);
    return;
  }
  return;
}


