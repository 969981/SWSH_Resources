/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013010f0; name: _INIT_1588
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1588(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  DAT_02a6cc74 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a6cc78 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a6cc7c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a6cc84 = 0xffff;
  DAT_02a6cc80 = 0xffffffff;
  uRam0000000002a6ccb8 = _UNK_01d4b108;
  _DAT_02a6ccb0 = _DAT_01d4b100;
  uRam0000000002a6ccc8 = _UNK_01d4b828;
  _DAT_02a6ccc0 = _DAT_01d4b820;
  uRam0000000002a6ccd8 = _UNK_01d4a4c8;
  _DAT_02a6ccd0 = _DAT_01d4a4c0;
  DAT_02a6cc8c = 0;
  uRam0000000002a6ccf8 = _UNK_01d4a428;
  _DAT_02a6ccf0 = _DAT_01d4a420;
  uRam0000000002a6cd08 = _UNK_01d4a308;
  _DAT_02a6cd00 = _DAT_01d4a300;
  DAT_02a6cc88 = 0;
  uRam0000000002a6cd18 = _UNK_01d4b158;
  _DAT_02a6cd10 = _DAT_01d4b150;
  uRam0000000002a6cce8 = _UNK_01d4aac8;
  _DAT_02a6cce0 = _DAT_01d4aac0;
  if ((DAT_02a6cc73 & 1) == 0) {
    DAT_02a6cc73 = 1;
    FUN_00800890(3000000,3000000,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/prog/contents/pokecamp/include/protocol_buffers/out/data/cooking_data.pb.cc"
                );
    FUN_007e26f0(&DAT_01d0e452,0xa3);
    FUN_00818650("cooking_data.proto",&LAB_013000a0);
    plVar3 = operator_new(0x40);
    puVar1 = PTR_DAT_02727cf8;
    plVar3[4] = 0;
    plVar3[5] = 0;
    puVar2 = PTR_DAT_02727d00;
    *(undefined4 *)((long)plVar3 + 0x3c) = 0;
    *(undefined8 *)((long)plVar3 + 0x14) = 0;
    *(undefined4 *)((long)plVar3 + 0x34) = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar3[1] = 0;
    *(long **)puVar2 = plVar3;
    puVar1 = PTR_LAB_02727d08;
    *(undefined1 *)(plVar3 + 7) = 0;
    *(undefined1 *)(plVar3 + 2) = 1;
    FUN_008010b0(puVar1);
    return;
  }
  return;
}


