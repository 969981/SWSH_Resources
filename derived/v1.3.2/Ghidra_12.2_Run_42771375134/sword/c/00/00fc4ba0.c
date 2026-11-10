/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc4ba0; name: _INIT_1210
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1210(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  DAT_02a61444 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a61448 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a6144c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar5 = PTR_DAT_02722ee8;
  uVar3 = _UNK_01d49f58;
  uVar2 = _DAT_01d49f50;
  DAT_02a61454 = 0xffff;
  DAT_02a6145c = 0;
  DAT_02a61450 = 0xffffffff;
  DAT_02a61458 = 0;
  uVar1 = *(undefined8 *)PTR_DAT_02715420;
  *(undefined8 *)(PTR_DAT_02722ee8 + 8) = *(undefined8 *)(PTR_DAT_02715420 + 8);
  puVar4 = PTR_DAT_02722ee0;
  *(undefined8 *)puVar5 = uVar1;
  *(undefined8 *)(puVar4 + 8) = uVar3;
  *(undefined8 *)puVar4 = uVar2;
  return;
}


