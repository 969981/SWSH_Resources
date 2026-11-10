/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014f710; name: _INIT_78
 */


/* WARNING: Type propagation algorithm not settling */

void _INIT_78(void)

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
  DAT_02736a20 = 0xffffffffffffffff;
  DAT_02736a28 = 0xffffffff;
  return;
}


