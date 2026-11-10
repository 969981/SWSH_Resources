/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01178b20; name: _INIT_1377
 */


void _INIT_1377(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((DAT_02a64258 & 1) == 0) {
    DAT_02a64258 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/live/protocol_buffers/async_cmd_out/data/net_live_async_data_holder.pb.cc"
                );
    FUN_01177810();
    FUN_007e26f0(&DAT_021661a8,0xe4);
    FUN_00818650("net_live_async_data_holder.proto",&LAB_01178340);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02725030;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_02725028 = plVar2;
    DAT_02a64278 = operator_new(8);
    *DAT_02a64278 = 0;
    *(undefined1 *)(plVar2 + 2) = 1;
    uVar3 = FUN_01177b40();
    *DAT_02a64278 = uVar3;
    FUN_008010b0(PTR_LAB_02725038);
    return;
  }
  return;
}


