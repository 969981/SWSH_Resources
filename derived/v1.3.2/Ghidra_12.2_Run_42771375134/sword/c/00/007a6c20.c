/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a6c20; name: _INIT_310
 */


void _INIT_310(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  DAT_029f4cbc = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_029f4cc0 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_029f4cc4 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_029f4ccc = 0xffff;
  DAT_029f4cc8 = 0xffffffff;
  DAT_029f4cd4 = 0;
  DAT_029f4cd0 = 0;
  if ((DAT_029f4cbb & 1) == 0) {
    DAT_029f4cbb = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/request_forced_proceed.pb.cc"
                );
    FUN_007e26f0(&DAT_01d148c5,0x82);
    FUN_00818650("request_forced_proceed.proto",&LAB_007a6210);
    plVar3 = operator_new(0x20);
    puVar2 = PTR_DAT_027166d0;
    puVar1 = PTR_DAT_027166c8;
    *(undefined4 *)((long)plVar3 + 0x1c) = 0;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_027166d8);
    return;
  }
  return;
}


