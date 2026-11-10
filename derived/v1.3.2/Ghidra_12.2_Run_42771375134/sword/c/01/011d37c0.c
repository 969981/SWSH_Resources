/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d37c0; name: _INIT_1420
 */


void _INIT_1420(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  if ((DAT_02a65158 & 1) == 0) {
    DAT_02a65158 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/trade/box/box_sync_state/protocol_buffers/out/data/box_sync_state.pb.cc"
                );
    FUN_007e26f0(&DAT_01d29a1b,0x7b);
    FUN_00818650("box_sync_state.proto",&LAB_011d2f30);
    plVar3 = operator_new(0x20);
    puVar2 = PTR_DAT_02725938;
    puVar1 = PTR_DAT_02725930;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02725940);
    return;
  }
  return;
}


