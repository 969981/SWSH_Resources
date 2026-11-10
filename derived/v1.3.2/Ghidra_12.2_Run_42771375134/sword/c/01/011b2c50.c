/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b2c50; name: FUN_011b2c50
 */


long FUN_011b2c50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR_DAT_027255d8;
  if (*(long *)PTR_DAT_027255d8 != 0) {
    return *(long *)PTR_DAT_027255d8;
  }
  if ((DAT_02a64ba8 & 1) == 0) {
    DAT_02a64ba8 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/async_cmd_out/data/will_left_async.pb.cc"
                );
    FUN_007e26f0(&DAT_01d30f39,0x5a);
    FUN_00818650("will_left_async.proto",&LAB_011b2a10);
    plVar3 = operator_new(0x18);
    puVar1 = PTR_DAT_027255d0;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *(long **)puVar2 = plVar3;
    *(undefined1 *)(plVar3 + 2) = 1;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_027255e0);
    return *(long *)puVar2;
  }
  return 0;
}


