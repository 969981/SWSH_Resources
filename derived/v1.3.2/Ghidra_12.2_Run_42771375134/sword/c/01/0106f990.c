/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106f990; name: FUN_0106f990
 */


ulong FUN_0106f990(ulong param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  
  puVar7 = PTR_DAT_02723ca0;
  puVar6 = PTR_DAT_02723c90;
  bVar8 = param_3 != '\x01';
  uVar10 = 3;
  if (bVar8) {
    uVar10 = 0;
  }
  uVar11 = 5;
  puVar3 = (uint *)PTR_DAT_02723c98;
  puVar2 = (uint *)PTR_DAT_02723c88;
  if (bVar8) {
    uVar11 = 0;
    puVar2 = (uint *)0x0;
    puVar3 = (uint *)0x0;
  }
  uVar12 = 2;
  if (bVar8) {
    uVar12 = 0xffffffff;
  }
  uVar15 = 4;
  if (bVar8) {
    uVar15 = 0xffffffff;
  }
  uVar1 = 2;
  if (param_3 != '\0') {
    uVar1 = uVar15;
  }
  param_1 = param_1 & 0xffffffff;
  if (param_3 != '\0') {
    do {
      uVar17 = (uint)param_1;
      puVar4 = puVar2;
      uVar15 = uVar11;
      if (7 < uVar17) {
        iVar13 = 3;
        if (uVar17 - 3 < 5) goto joined_r0x0106fac4;
LAB_0106fa48:
        puVar4 = puVar3;
        uVar15 = uVar10;
        if (uVar17 < 3) goto joined_r0x0106fac4;
        goto LAB_0106fb04;
      }
      iVar13 = *(int *)(&DAT_01d4db80 + (long)(int)uVar17 * 4);
      if (4 < uVar17 - 3) goto LAB_0106fa48;
joined_r0x0106fac4:
      uVar14 = 0;
      if ((((uVar15 != 0) && (uVar14 = 0, *puVar4 != uVar17)) && (param_3 == '\x01')) &&
         (uVar14 = (uint)(puVar4[1] == uVar17), puVar4[1] != uVar17)) {
        if (puVar4[2] == uVar17) {
          uVar14 = 2;
        }
        else if (uVar15 < 4) {
LAB_0106fb04:
          uVar14 = 0;
        }
        else if (puVar4[3] == uVar17) {
          uVar14 = 3;
        }
        else {
          if (uVar15 < 5) goto LAB_0106fb04;
          uVar14 = (uint)(puVar4[4] == uVar17) << 2;
        }
      }
      puVar4 = puVar3;
      uVar15 = uVar12;
      if (iVar13 != 0) {
        puVar4 = puVar2;
        uVar15 = uVar1;
      }
      uVar9 = 0;
      if (uVar15 != uVar14) {
        uVar9 = (ulong)(uVar14 + 1);
      }
      param_1 = (ulong)puVar4[uVar9];
      uVar9 = FUN_0106f400(param_2,param_1);
    } while ((uVar9 & 1) == 0);
  }
  else {
    do {
      uVar10 = (uint)param_1;
      if (uVar10 < 8) {
        iVar13 = *(int *)(&DAT_01d4db80 + (long)(int)uVar10 * 4);
        uVar16 = -(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3;
        uVar9 = 0;
        do {
          if (*(uint *)(*(long *)((long)&PTR_DAT_0266ce60 + uVar16) + uVar9 * 4) == uVar10)
          goto LAB_0106fba0;
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulong *)(&DAT_021633d0 + uVar16));
      }
      else {
        iVar13 = 3;
      }
      uVar9 = 0;
LAB_0106fba0:
      uVar10 = 1;
      if (iVar13 != 0) {
        uVar10 = uVar1;
      }
      puVar5 = puVar7;
      if (iVar13 != 0) {
        puVar5 = puVar6;
      }
      uVar16 = 0;
      if (uVar10 != ((uint)uVar9 & 0xff)) {
        uVar16 = (ulong)((uint)uVar9 + 1) & 0xff;
      }
      param_1 = (ulong)*(uint *)(puVar5 + uVar16 * 4);
      uVar9 = FUN_0106f400(param_2,param_1);
    } while ((uVar9 & 1) == 0);
  }
  return param_1;
}


