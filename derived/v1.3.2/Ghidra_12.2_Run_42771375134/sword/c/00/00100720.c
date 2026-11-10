/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00100720; name: _INIT_10
 */


void _INIT_10(void)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  DAT_02736184 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02736188 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_0273618c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  dVar3 = (double)NEON_ucvtf(*(undefined8 *)PTR_DAT_027104b8);
  dVar3 = DAT_01cd4f80 - dVar3;
  dVar5 = (double)NEON_ucvtf(*(undefined8 *)PTR_DAT_027104c8);
  uVar2 = *(ulong *)PTR_DAT_027104c0;
  uVar1 = uVar2 + *(long *)PTR_DAT_027104d0;
  DAT_02736194 = 0xffff;
  DAT_02736190 = 0xffffffff;
  dVar4 = dVar5 + DAT_01cd5450;
  DAT_0273619c = 0;
  DAT_02736198 = 0;
  dVar6 = dVar5 + DAT_01cd51c0;
  *(ulong *)PTR_DAT_027104d8 = uVar1 + 0x25d00000;
  *(ulong *)PTR_DAT_027104e0 = uVar1;
  *(long *)PTR_DAT_027104e8 = (long)(dVar4 + (double)uVar1);
  *(long *)PTR_DAT_027104f0 = (long)((dVar3 - dVar5) - (double)uVar2);
  *(long *)PTR_DAT_027104f8 = (long)dVar6;
  return;
}


