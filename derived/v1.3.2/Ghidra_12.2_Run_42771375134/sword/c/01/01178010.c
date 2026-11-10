/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01178010; name: _INIT_1376
 */


void _INIT_1376(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  if ((DAT_02a64230 & 1) == 0) {
    DAT_02a64230 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_buffers/async_cmd_out/data/live_start_sync.pb.cc"
                );
    FUN_007e26f0(&DAT_01d1541d,0x5b);
    FUN_00818650("live_start_sync.proto",&LAB_01177900);
    plVar3 = operator_new(0x18);
    puVar2 = PTR_DAT_02725010;
    puVar1 = PTR_DAT_02725008;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02725018);
    return;
  }
  return;
}


