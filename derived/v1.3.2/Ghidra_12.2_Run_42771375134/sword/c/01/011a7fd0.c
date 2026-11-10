/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011a7fd0; name: FUN_011a7fd0
 */


void FUN_011a7fd0(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if ((DAT_02a64968 & 1) == 0) {
    DAT_02a64968 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/network/net_contents/source/battle/nbr/protocol_buffers/out/data/nbr_data_holder.pb.cc"
                );
    FUN_011ad430();
    FUN_011abf50();
    FUN_011b1130();
    FUN_011ae0e0();
    FUN_011b1f00();
    FUN_011a75a0();
    FUN_011aa540();
    FUN_011b02f0();
    FUN_011af7d0();
    FUN_011aeba0();
    FUN_007e26f0(&DAT_02166dd8,0x61a);
    FUN_00818650("nbr_data_holder.proto",&LAB_011a8140);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_02725458;
    *(undefined1 *)(plVar2 + 2) = 0;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_02725450 = plVar2;
    puVar3 = operator_new(0x70);
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    DAT_02a64980 = puVar3;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    FUN_011a81d0(plVar2);
    FUN_008010b0(PTR_LAB_02725460);
    return;
  }
  return;
}


