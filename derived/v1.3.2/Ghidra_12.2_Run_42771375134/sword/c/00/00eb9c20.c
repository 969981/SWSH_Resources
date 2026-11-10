/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb9c20; name: _INIT_1094
 */


void _INIT_1094(void)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  DAT_02a5d28c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5d290 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5d294 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5d29c = 0xffff;
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
  DAT_02a5d298 = 0xffffffff;
  uVar1 = (ulong)((fVar3 / *(float *)PTR_FloatDegree180_027194f0) * 30.0);
  uVar2 = (ulong)((fVar3 / *(float *)PTR_FloatDegree180_027194f0) * DAT_01d4c5c0);
  DAT_02a5d2a4 = 0;
  fVar3 = (float)((uint)uVar2 & 0xffffff) * DAT_01d4bc78;
  fVar4 = *(float *)(PTR_SinCosSampleTable_02715d20 + (uVar2 >> 0x18 & 0xff) * 0x10);
  fVar5 = *(float *)((long)(PTR_SinCosSampleTable_02715d20 + (uVar2 >> 0x18 & 0xff) * 0x10) + 8);
  DAT_02a5d2a0 = 0;
  *(float *)PTR_DAT_02720240 =
       *(float *)(PTR_SinCosSampleTable_02715d20 + (uVar1 >> 0x18 & 0xff) * 0x10) +
       *(float *)((long)(PTR_SinCosSampleTable_02715d20 + (uVar1 >> 0x18 & 0xff) * 0x10) + 8) *
       (float)((uint)uVar1 & 0xffffff) * DAT_01d4bc78;
  *(float *)PTR_DAT_02720238 = fVar4 + fVar5 * fVar3;
  return;
}


