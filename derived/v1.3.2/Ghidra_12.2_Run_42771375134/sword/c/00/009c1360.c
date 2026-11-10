/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c1360; name: FUN_009c1360
 */


void FUN_009c1360(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((DAT_02a4ff23 & 1) == 0) {
    DAT_02a4ff23 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl_cmd_out/data/btl_cmd_data_holder.pb.cc"
                );
    FUN_009bc590();
    FUN_009baca0();
    FUN_009c28e0();
    FUN_009c0770();
    FUN_007e26f0(&DAT_0214c728,0x1ef);
    FUN_00818650("btl_cmd_data_holder.proto",&LAB_009c14e0);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_027187f0;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_027187e8 = plVar2;
    puVar3 = operator_new(0x28);
    puVar3[3] = 0;
    puVar3[4] = 0;
    *puVar3 = 0;
    DAT_02a4ff50 = puVar3;
    *(undefined1 *)(plVar2 + 2) = 1;
    puVar3[1] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_009bca80();
    *DAT_02a4ff50 = uVar4;
    uVar4 = FUN_009bd530();
    DAT_02a4ff50[1] = uVar4;
    uVar4 = FUN_009baff0();
    DAT_02a4ff50[2] = uVar4;
    uVar4 = FUN_009c2c30();
    DAT_02a4ff50[3] = uVar4;
    uVar4 = FUN_009c0aa0();
    DAT_02a4ff50[4] = uVar4;
    FUN_008010b0(PTR_LAB_027187f8);
    return;
  }
  return;
}


