/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013058b0; name: _INIT_1592
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1592(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  DAT_02a6cfb4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a6cfb8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a6cfbc = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a6cfc4 = 0xffff;
  DAT_02a6cfc0 = 0xffffffff;
  uRam0000000002a6cff8 = _UNK_01d4b108;
  _DAT_02a6cff0 = _DAT_01d4b100;
  uRam0000000002a6d008 = _UNK_01d4b828;
  _DAT_02a6d000 = _DAT_01d4b820;
  uRam0000000002a6d018 = _UNK_01d4a4c8;
  _DAT_02a6d010 = _DAT_01d4a4c0;
  DAT_02a6cfcc = 0;
  uRam0000000002a6d038 = _UNK_01d4a428;
  _DAT_02a6d030 = _DAT_01d4a420;
  uRam0000000002a6d048 = _UNK_01d4a308;
  _DAT_02a6d040 = _DAT_01d4a300;
  DAT_02a6cfc8 = 0;
  uRam0000000002a6d058 = _UNK_01d4b158;
  _DAT_02a6d050 = _DAT_01d4b150;
  uRam0000000002a6d028 = _UNK_01d4aac8;
  _DAT_02a6d020 = _DAT_01d4aac0;
  if ((DAT_02a6cfb3 & 1) == 0) {
    DAT_02a6cfb3 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/cooking_spiece.pb.cc"
                );
    FUN_007e26f0(&DAT_01d26073,0x7b);
    FUN_00818650("cooking_spiece.proto",&LAB_01304c90);
    plVar4 = operator_new(0x28);
    puVar3 = PTR_LAB_02727d88;
    puVar1 = PTR_DAT_02727d78;
    *(undefined1 *)((long)plVar4 + 0x11) = 0;
    *(undefined4 *)((long)plVar4 + 0x24) = 0;
    *(undefined8 *)((long)plVar4 + 0x1c) = 0;
    puVar2 = PTR_DAT_02727d80;
    *(undefined8 *)((long)plVar4 + 0x14) = 0;
    *(long **)puVar2 = plVar4;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[1] = 0;
    *(undefined1 *)(plVar4 + 2) = 1;
    FUN_008010b0(puVar3);
    return;
  }
  return;
}


