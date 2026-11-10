/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a4690; name: _INIT_307
 */


void _INIT_307(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  DAT_029f4bfc = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_029f4c00 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_029f4c04 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_029f4c0c = 0xffff;
  DAT_029f4c08 = 0xffffffff;
  DAT_029f4c14 = 0;
  DAT_029f4c10 = 0;
  if ((DAT_029f4bfb & 1) == 0) {
    DAT_029f4bfb = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/src/p2p/framework/protocol_buffers/out/data/cancel_accepted.pb.cc"
                );
    FUN_007e26f0(&DAT_01cf2adc,0x72);
    FUN_00818650("cancel_accepted.proto",&LAB_007a3c80);
    plVar3 = operator_new(0x20);
    puVar2 = PTR_DAT_02716660;
    puVar1 = PTR_DAT_02716658;
    *(undefined4 *)((long)plVar3 + 0x1c) = 0;
    *(undefined4 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)(plVar3 + 3) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02716668);
    return;
  }
  return;
}


