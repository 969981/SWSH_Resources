/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c10e0; name: _INIT_741
 */


void _INIT_741(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  DAT_02a4fee4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a4fee8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a4feec = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a4fef4 = 0xffff;
  DAT_02a4fef0 = 0xffffffff;
  DAT_02a4fefc = 0;
  DAT_02a4fef8 = 0;
  if ((DAT_02a4fee3 & 1) == 0) {
    DAT_02a4fee3 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl_cmd_out/data/trainer_action_command.pb.cc"
                );
    FUN_007e26f0(&DAT_01cde06a,99);
    FUN_00818650("trainer_action_command.proto",&LAB_009c0860);
    plVar3 = operator_new(0x20);
    puVar2 = PTR_DAT_027187d0;
    puVar1 = PTR_DAT_027187c8;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_027187d8);
    return;
  }
  return;
}


