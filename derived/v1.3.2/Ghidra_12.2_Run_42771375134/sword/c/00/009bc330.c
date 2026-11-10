/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009bc330; name: _INIT_736
 */


void _INIT_736(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  DAT_02a4fd5c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a4fd60 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a4fd64 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a4fd6c = 0xffff;
  DAT_02a4fd68 = 0xffffffff;
  DAT_02a4fd74 = 0;
  DAT_02a4fd70 = 0;
  if ((DAT_02a4fd5b & 1) == 0) {
    DAT_02a4fd5b = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/battle/battle_logic/source/net/protocol_buffers/out/data/others.pb.cc"
                );
    FUN_007e26f0(&DAT_01d10eb7,0x40);
    FUN_00818650("others.proto",&LAB_009bbc20);
    plVar3 = operator_new(0x18);
    puVar2 = PTR_DAT_02718720;
    puVar1 = PTR_DAT_02718718;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02718728);
    return;
  }
  return;
}


