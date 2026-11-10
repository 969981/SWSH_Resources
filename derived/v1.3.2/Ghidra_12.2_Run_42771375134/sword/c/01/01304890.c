/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01304890; name: _INIT_1591
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1591(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  DAT_02a6cef4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a6cef8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a6cefc = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a6cf04 = 0xffff;
  DAT_02a6cf00 = 0xffffffff;
  uRam0000000002a6cf38 = _UNK_01d4b108;
  _DAT_02a6cf30 = _DAT_01d4b100;
  uRam0000000002a6cf48 = _UNK_01d4b828;
  _DAT_02a6cf40 = _DAT_01d4b820;
  uRam0000000002a6cf58 = _UNK_01d4a4c8;
  _DAT_02a6cf50 = _DAT_01d4a4c0;
  DAT_02a6cf0c = 0;
  uRam0000000002a6cf78 = _UNK_01d4a428;
  _DAT_02a6cf70 = _DAT_01d4a420;
  uRam0000000002a6cf88 = _UNK_01d4a308;
  _DAT_02a6cf80 = _DAT_01d4a300;
  DAT_02a6cf08 = 0;
  uRam0000000002a6cf98 = _UNK_01d4b158;
  _DAT_02a6cf90 = _DAT_01d4b150;
  uRam0000000002a6cf68 = _UNK_01d4aac8;
  _DAT_02a6cf60 = _DAT_01d4aac0;
  if ((DAT_02a6cef3 & 1) == 0) {
    DAT_02a6cef3 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/cooking_transform.pb.cc"
                );
    FUN_007e26f0(&DAT_0216bf78,0xcf);
    FUN_00818650("cooking_transform.proto",&LAB_01303e70);
    plVar3 = operator_new(0x20);
    puVar2 = PTR_DAT_02727d60;
    puVar1 = PTR_DAT_02727d58;
    *(undefined4 *)((long)plVar3 + 0x1c) = 0;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    *(long **)puVar2 = plVar3;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    FUN_008010b0(PTR_LAB_02727d68);
    return;
  }
  return;
}


