/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c33d0; name: _INIT_743
 */


void _INIT_743(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  DAT_02a4ff8c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a4ff90 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a4ff94 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a4ff9c = 0xffff;
  DAT_02a4ff98 = 0xffffffff;
  DAT_02a4ffa4 = 0;
  DAT_02a4ffa0 = 0;
  if ((DAT_02a4ff8b & 1) == 0) {
    DAT_02a4ff8b = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/btl_cmd_out/data/timer.pb.cc"
                );
    FUN_007e26f0(&DAT_01cde0ce,0x5a);
    FUN_00818650("timer.proto",&LAB_009c29e0);
    plVar3 = operator_new(0x20);
    puVar2 = PTR_DAT_02718810;
    puVar1 = PTR_DAT_02718808;
    *(undefined4 *)((long)plVar3 + 0x1c) = 0;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02718818);
    return;
  }
  return;
}


