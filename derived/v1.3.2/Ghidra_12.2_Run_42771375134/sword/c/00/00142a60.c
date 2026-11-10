/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00142a60; name: _INIT_73
 */


void _INIT_73(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined *puVar11;
  
  puVar11 = PTR_DAT_02710d18;
  if ((*PTR_DAT_02710d18 & 1) == 0) {
    *(undefined4 *)PTR_DAT_02710d60 = 0xbf800000;
    *(undefined8 *)puVar11 = 1;
    bVar1 = *PTR_DAT_02710d20;
    puVar3 = (undefined8 *)PTR_DAT_02710d20;
  }
  else {
    bVar1 = *PTR_DAT_02710d20;
    puVar3 = (undefined8 *)PTR_DAT_02710d20;
  }
  PTR_DAT_02710d20 = (undefined *)puVar3;
  if ((bVar1 & 1) == 0) {
    *(undefined4 *)PTR_DAT_02710d68 = 0x3f000000;
    *puVar3 = 1;
    bVar1 = *PTR_DAT_02710d28;
    pbVar2 = PTR_DAT_02710d28;
  }
  else {
    bVar1 = *PTR_DAT_02710d28;
    pbVar2 = PTR_DAT_02710d28;
  }
  PTR_DAT_02710d28 = pbVar2;
  if ((bVar1 & 1) == 0) {
    *(undefined4 *)PTR_DAT_02710d70 = 0x40000000;
    pbVar2[0] = 1;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    bVar1 = *PTR_DAT_02710d30;
    pbVar2 = PTR_DAT_02710d30;
  }
  else {
    bVar1 = *PTR_DAT_02710d30;
    pbVar2 = PTR_DAT_02710d30;
  }
  PTR_DAT_02710d30 = pbVar2;
  if ((bVar1 & 1) == 0) {
    *(undefined4 *)PTR_DAT_02710d78 = 0x40490fdb;
    pbVar2[0] = 1;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    bVar1 = *PTR_DAT_02710d38;
    pbVar2 = PTR_DAT_02710d38;
  }
  else {
    bVar1 = *PTR_DAT_02710d38;
    pbVar2 = PTR_DAT_02710d38;
  }
  PTR_DAT_02710d38 = pbVar2;
  if ((bVar1 & 1) == 0) {
    *(undefined4 *)PTR_DAT_02710d80 = 0x34000000;
    pbVar2[0] = 1;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    bVar1 = *PTR_DAT_02710d40;
    pbVar2 = PTR_DAT_02710d40;
  }
  else {
    bVar1 = *PTR_DAT_02710d40;
    pbVar2 = PTR_DAT_02710d40;
  }
  PTR_DAT_02710d40 = pbVar2;
  if ((bVar1 & 1) == 0) {
    *(undefined4 *)PTR_DAT_02710d88 = 0x7f7fffff;
    pbVar2[0] = 1;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    bVar1 = *PTR_DAT_02710d48;
    pbVar2 = PTR_DAT_02710d48;
    puVar3 = (undefined8 *)PTR_DAT_02710d90;
  }
  else {
    bVar1 = *PTR_DAT_02710d48;
    pbVar2 = PTR_DAT_02710d48;
    puVar3 = (undefined8 *)PTR_DAT_02710d90;
  }
  PTR_DAT_02710d48 = pbVar2;
  PTR_DAT_02710d90 = (undefined *)puVar3;
  if ((bVar1 & 1) == 0) {
    *puVar3 = 0xffffffff;
    puVar3[1] = 0;
    pbVar2[0] = 1;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    bVar1 = *PTR_DAT_02710d50;
    pbVar2 = PTR_DAT_02710d50;
    puVar3 = (undefined8 *)PTR_DAT_02710d98;
  }
  else {
    bVar1 = *PTR_DAT_02710d50;
    pbVar2 = PTR_DAT_02710d50;
    puVar3 = (undefined8 *)PTR_DAT_02710d98;
  }
  PTR_DAT_02710d50 = pbVar2;
  PTR_DAT_02710d98 = (undefined *)puVar3;
  if ((bVar1 & 1) == 0) {
    *puVar3 = 0xffffffffffffffff;
    puVar3[1] = 0xffffffff;
    pbVar2[0] = 1;
    pbVar2[1] = 0;
    pbVar2[2] = 0;
    pbVar2[3] = 0;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
    pbVar2[6] = 0;
    pbVar2[7] = 0;
    bVar1 = *PTR_DAT_02710d58;
    puVar4 = (undefined4 *)PTR_DAT_02710da0;
  }
  else {
    bVar1 = *PTR_DAT_02710d58;
    puVar4 = (undefined4 *)PTR_DAT_02710da0;
  }
  if ((bVar1 & 1) == 0) {
    pbVar2 = PTR_DAT_02710d58 + 1;
    pbVar5 = PTR_DAT_02710d58 + 2;
    pbVar6 = PTR_DAT_02710d58 + 3;
    pbVar7 = PTR_DAT_02710d58 + 4;
    pbVar8 = PTR_DAT_02710d58 + 5;
    pbVar9 = PTR_DAT_02710d58 + 6;
    pbVar10 = PTR_DAT_02710d58 + 7;
    PTR_DAT_02710da0 = (undefined *)puVar4;
    PTR_DAT_02710d58[0] = 1;
    *pbVar2 = 0;
    *pbVar5 = 0;
    *pbVar6 = 0;
    *pbVar7 = 0;
    *pbVar8 = 0;
    *pbVar9 = 0;
    *pbVar10 = 0;
    *puVar4 = 1;
    return;
  }
  PTR_DAT_02710da0 = (undefined *)puVar4;
  return;
}


