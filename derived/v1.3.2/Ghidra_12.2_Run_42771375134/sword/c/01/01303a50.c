/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01303a50; name: _INIT_1590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1590(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  DAT_02a6ce24 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a6ce28 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a6ce2c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a6ce34 = 0xffff;
  DAT_02a6ce30 = 0xffffffff;
  uRam0000000002a6ce78 = _UNK_01d4b108;
  _DAT_02a6ce70 = _DAT_01d4b100;
  uRam0000000002a6ce88 = _UNK_01d4b828;
  _DAT_02a6ce80 = _DAT_01d4b820;
  uRam0000000002a6ce98 = _UNK_01d4a4c8;
  _DAT_02a6ce90 = _DAT_01d4a4c0;
  DAT_02a6ce3c = 0;
  uRam0000000002a6ceb8 = _UNK_01d4a428;
  _DAT_02a6ceb0 = _DAT_01d4a420;
  uRam0000000002a6cec8 = _UNK_01d4a308;
  _DAT_02a6cec0 = _DAT_01d4a300;
  DAT_02a6ce38 = 0;
  uRam0000000002a6ced8 = _UNK_01d4b158;
  _DAT_02a6ced0 = _DAT_01d4b150;
  uRam0000000002a6cea8 = _UNK_01d4aac8;
  _DAT_02a6cea0 = _DAT_01d4aac0;
  if ((DAT_02a6ce23 & 1) == 0) {
    DAT_02a6ce23 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/cooking_matching_data.pb.cc"
                );
    FUN_007e26f0(&DAT_0216bd34,0x239);
    FUN_00818650("cooking_matching_data.proto",&LAB_01302b00);
    plVar4 = operator_new(0x30);
    puVar1 = PTR_DAT_02727d38;
    *(undefined4 *)((long)plVar4 + 0x14) = 0;
    puVar3 = PTR_LAB_02727d48;
    *(undefined1 *)(plVar4 + 3) = 0;
    puVar2 = PTR_DAT_02727d40;
    *(undefined4 *)((long)plVar4 + 0x2c) = 0;
    *(undefined8 *)((long)plVar4 + 0x24) = 0;
    *(undefined8 *)((long)plVar4 + 0x1c) = 0;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[1] = 0;
    *(undefined1 *)(plVar4 + 2) = 1;
    *(long **)puVar2 = plVar4;
    FUN_008010b0(puVar3);
    return;
  }
  return;
}


