/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014bca0; name: _INIT_76
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_76(void)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined *puVar14;
  
  puVar6 = PTR_DAT_02710d18;
  if ((*PTR_DAT_02710d18 & 1) == 0) {
    *(undefined4 *)PTR_DAT_02710d60 = 0xbf800000;
    *(undefined8 *)puVar6 = 1;
    bVar1 = *PTR_DAT_02710d20;
    puVar6 = PTR_DAT_02710d20;
  }
  else {
    bVar1 = *PTR_DAT_02710d20;
    puVar6 = PTR_DAT_02710d20;
  }
  PTR_DAT_02710d20 = puVar6;
  if ((bVar1 & 1) == 0) {
    *(undefined4 *)PTR_DAT_02710d68 = 0x3f000000;
    *(undefined8 *)puVar6 = 1;
    bVar1 = *PTR_DAT_02710d28;
    puVar6 = PTR_DAT_02710d28;
  }
  else {
    bVar1 = *PTR_DAT_02710d28;
    puVar6 = PTR_DAT_02710d28;
  }
  PTR_DAT_02710d28 = puVar6;
  if ((bVar1 & 1) == 0) {
    *(undefined4 *)PTR_DAT_02710d70 = 0x40000000;
    *(undefined8 *)puVar6 = 1;
    bVar1 = *PTR_DAT_02710d30;
    puVar6 = PTR_DAT_02710d30;
  }
  else {
    bVar1 = *PTR_DAT_02710d30;
    puVar6 = PTR_DAT_02710d30;
  }
  PTR_DAT_02710d30 = puVar6;
  if ((bVar1 & 1) == 0) {
    *(undefined4 *)PTR_DAT_02710d78 = 0x40490fdb;
    *(undefined8 *)puVar6 = 1;
    bVar1 = *PTR_DAT_02710d38;
    puVar6 = PTR_DAT_02710d38;
  }
  else {
    bVar1 = *PTR_DAT_02710d38;
    puVar6 = PTR_DAT_02710d38;
  }
  PTR_DAT_02710d38 = puVar6;
  if ((bVar1 & 1) == 0) {
    *(undefined4 *)PTR_DAT_02710d80 = 0x34000000;
    *(undefined8 *)puVar6 = 1;
    bVar1 = *PTR_DAT_02710d40;
    puVar6 = PTR_DAT_02710d40;
  }
  else {
    bVar1 = *PTR_DAT_02710d40;
    puVar6 = PTR_DAT_02710d40;
  }
  PTR_DAT_02710d40 = puVar6;
  if ((bVar1 & 1) == 0) {
    *(undefined4 *)PTR_DAT_02710d88 = 0x7f7fffff;
    *(undefined8 *)puVar6 = 1;
    bVar1 = *PTR_DAT_02710d48;
    puVar4 = (undefined8 *)PTR_DAT_02710d48;
    puVar5 = (undefined8 *)PTR_DAT_02710d90;
  }
  else {
    bVar1 = *PTR_DAT_02710d48;
    puVar4 = (undefined8 *)PTR_DAT_02710d48;
    puVar5 = (undefined8 *)PTR_DAT_02710d90;
  }
  PTR_DAT_02710d48 = (undefined *)puVar4;
  PTR_DAT_02710d90 = (undefined *)puVar5;
  if ((bVar1 & 1) == 0) {
    *puVar5 = 0xffffffff;
    puVar5[1] = 0;
    *puVar4 = 1;
    bVar1 = *PTR_DAT_02710d50;
    pbVar3 = PTR_DAT_02710d50;
    puVar4 = (undefined8 *)PTR_DAT_02710d98;
  }
  else {
    bVar1 = *PTR_DAT_02710d50;
    pbVar3 = PTR_DAT_02710d50;
    puVar4 = (undefined8 *)PTR_DAT_02710d98;
  }
  PTR_DAT_02710d50 = pbVar3;
  PTR_DAT_02710d98 = (undefined *)puVar4;
  if ((bVar1 & 1) == 0) {
    *puVar4 = 0xffffffffffffffff;
    puVar4[1] = 0xffffffff;
    pbVar3[0] = 1;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    bVar1 = *PTR_DAT_02710d58;
    puVar2 = (undefined4 *)PTR_DAT_02710da0;
  }
  else {
    bVar1 = *PTR_DAT_02710d58;
    puVar2 = (undefined4 *)PTR_DAT_02710da0;
  }
  PTR_DAT_02710da0 = (undefined *)puVar2;
  if ((bVar1 & 1) == 0) {
    pbVar3 = PTR_DAT_02710d58 + 1;
    pbVar7 = PTR_DAT_02710d58 + 2;
    pbVar8 = PTR_DAT_02710d58 + 3;
    pbVar9 = PTR_DAT_02710d58 + 4;
    pbVar10 = PTR_DAT_02710d58 + 5;
    pbVar11 = PTR_DAT_02710d58 + 6;
    pbVar12 = PTR_DAT_02710d58 + 7;
    PTR_DAT_02710d58[0] = 1;
    *pbVar3 = 0;
    *pbVar7 = 0;
    *pbVar8 = 0;
    *pbVar9 = 0;
    *pbVar10 = 0;
    *pbVar11 = 0;
    *pbVar12 = 0;
    *puVar2 = 1;
  }
  puVar14 = PTR_DAT_02710e08;
  puVar6 = PTR_DAT_02710de0;
  *(undefined8 *)(PTR_DAT_02710e08 + 8) = 0x200000002;
  *(undefined8 *)puVar14 = 0x200000002;
  puVar14 = PTR_DAT_02710df0;
  *(undefined8 *)(PTR_DAT_02710df0 + 8) = 0x700000007;
  *(undefined8 *)puVar14 = 0x700000007;
  puVar14 = PTR_DAT_02710de8;
  uVar13 = _DAT_01d4a2a0;
  *(undefined8 *)(puVar6 + 8) = _UNK_01d4a2a8;
  *(undefined8 *)puVar6 = uVar13;
  DAT_02736940 = 0xffffffff;
  DAT_02736948 = 0;
  *(undefined8 *)(puVar14 + 8) = 0x302010003020100;
  *(undefined8 *)puVar14 = 0x302010003020100;
  DAT_02736950 = 0;
  DAT_02736958 = 0xffffffff;
  DAT_02736960 = 0;
  DAT_02736968 = 0xffffffff00000000;
  DAT_02736970 = 0x3f8000003f800000;
  DAT_02736978 = 0x3f800000;
  _DAT_027369a8 = 0x38d1b71740fff7cf;
  DAT_02736980 = 0xff7fffffff7fffff;
  DAT_02736988 = 0xff7fffff;
  return;
}


