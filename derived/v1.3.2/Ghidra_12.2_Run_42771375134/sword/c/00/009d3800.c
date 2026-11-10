/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d3800; name: _INIT_761
 */


void _INIT_761(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  DAT_02a50244 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a50248 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5024c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a50254 = 0xffff;
  DAT_02a50250 = 0xffffffff;
  DAT_02a5025c = 0;
  DAT_02a50258 = 0;
  if ((DAT_02a50243 & 1) == 0) {
    DAT_02a50243 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/netwatch/protocol_buffers/out_async/data/watch_timer.pb.cc"
                );
    FUN_007e26f0(&DAT_01ce8866,0x6b);
    FUN_00818650("watch_timer.proto",&LAB_009d2e10);
    plVar3 = operator_new(0x20);
    puVar2 = PTR_DAT_02718960;
    puVar1 = PTR_DAT_02718958;
    *(undefined4 *)((long)plVar3 + 0x1c) = 0;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02718968);
    return;
  }
  return;
}


