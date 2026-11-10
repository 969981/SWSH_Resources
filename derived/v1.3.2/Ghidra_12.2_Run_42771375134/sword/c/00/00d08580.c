/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d08580; name: _INIT_989
 */


void _INIT_989(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((DAT_02a57fa8 & 1) == 0) {
    DAT_02a57fa8 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/comp_organize/source/state/protocol_buffers/out/data/comp_organize_data_holder.pb.cc"
                );
    FUN_00d092a0();
    FUN_00d08690();
    FUN_007e26f0(&DAT_0215f204,300);
    FUN_00818650("comp_organize_data_holder.proto",&LAB_00d07a80);
    plVar2 = operator_new(0x28);
    puVar1 = PTR_DAT_0271cd60;
    plVar2[4] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    plVar2[1] = 0;
    *(long **)PTR_DAT_0271cd58 = plVar2;
    DAT_02a57fc0 = operator_new(0x10);
    *DAT_02a57fc0 = 0;
    DAT_02a57fc0[1] = 0;
    *(undefined1 *)(plVar2 + 2) = 1;
    uVar3 = FUN_00d095d0();
    *DAT_02a57fc0 = uVar3;
    uVar3 = FUN_00d08ad0();
    DAT_02a57fc0[1] = uVar3;
    FUN_008010b0(PTR_LAB_0271cd68);
    return;
  }
  return;
}


