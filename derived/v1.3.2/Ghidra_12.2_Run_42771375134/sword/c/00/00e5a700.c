/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5a700; name: _INIT_1048
 */


void _INIT_1048(void)

{
  ulong uVar1;
  float fVar2;
  
  DAT_02a5b9e4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5b9e8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5b9ec = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5b9f4 = 0xffff;
  DAT_02a5b9f0 = 0xffffffff;
  DAT_02a5b9fc = 0;
  DAT_02a5b9f8 = 0;
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
  uVar1 = (ulong)((fVar2 / *(float *)PTR_FloatDegree180_027194f0) * 20.0);
  *(float *)PTR_DAT_0271fc08 =
       *(float *)(PTR_SinCosSampleTable_02715d20 + (uVar1 >> 0x18 & 0xff) * 0x10) +
       *(float *)((long)(PTR_SinCosSampleTable_02715d20 + (uVar1 >> 0x18 & 0xff) * 0x10) + 8) *
       (float)((uint)uVar1 & 0xffffff) * DAT_01d4bc78;
  return;
}


