/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b4820; name: FUN_012b4820
 */


void FUN_012b4820(ulong *param_1,undefined8 *param_2,ulong *param_3)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  ushort *puVar8;
  uint *puVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  uint *__s;
  int *piVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  piVar13 = (int *)*param_2;
  if ((((piVar13 == (int *)0x0) || (*(uint *)(param_2 + 1) == 0xffffffff)) ||
      (puVar8 = (ushort *)((long)piVar13 - (long)*piVar13), *puVar8 < 5)) ||
     ((((ulong)puVar8[2] == 0 ||
       (puVar9 = (uint *)((long)piVar13 + (ulong)puVar8[2]), lVar1 = (long)puVar9 + (ulong)*puVar9,
       lVar1 == 0)) ||
      (puVar9 = (uint *)(lVar1 + (ulong)*(uint *)(param_2 + 1) * 4 + 4),
      piVar2 = (int *)((long)puVar9 + (ulong)*puVar9), piVar2 == (int *)0x0)))) {
LAB_012b48bc:
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    uVar11 = param_3[3];
    param_1[3] = uVar11;
    if (uVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x012b4904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(uVar11 + 0x48) + 0x10))();
      return;
    }
  }
  else {
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
       (uVar11 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar11 == 0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(uint *)((long)piVar2 + uVar11);
      if (uVar14 == 0xffffffff) goto LAB_012b48bc;
    }
    uVar5 = puVar8[3];
    puVar9 = (uint *)((long)piVar13 + (ulong)uVar5);
    uVar15 = (ulong)*puVar9;
    uVar11 = 0xcbf29ce484222645;
    puVar9 = (uint *)((long)puVar9 + (ulong)uVar14 * 4 + uVar15 + 4);
    uVar16 = (ulong)*puVar9;
    piVar2 = (int *)((long)puVar9 + uVar16);
    puVar8 = (ushort *)((long)piVar2 - (long)*piVar2);
    if (((*puVar8 < 5) || ((ulong)puVar8[2] == 0)) ||
       (*(char *)((long)piVar2 + (ulong)puVar8[2]) != '\x03')) {
      param_1[2] = 0;
      *param_1 = 0xcbf29ce484222645;
      param_1[1] = (ulong)&DAT_01d38550;
    }
    else {
      uVar6 = puVar8[3];
      puVar9 = (uint *)((long)piVar2 + (ulong)uVar6);
      uVar12 = (ulong)*puVar9;
      piVar2 = (int *)((long)puVar9 + uVar12);
      uVar17 = (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2));
      puVar9 = (uint *)((long)piVar2 + uVar17);
      uVar18 = (ulong)*puVar9;
      puVar9 = (uint *)((long)puVar9 + uVar18);
      __s = puVar9 + 1;
      uVar3 = *puVar9;
      uVar7 = (ulong)uVar3;
      if (uVar3 == 0) {
        uVar7 = strlen((char *)__s);
      }
      bVar4 = (byte)*__s;
      if (bVar4 != 0) {
        pbVar10 = (byte *)((long)piVar13 +
                          uVar18 + (ulong)uVar14 * 4 + uVar17 + uVar12 + (ulong)uVar6 + uVar16 +
                          uVar15 + (ulong)uVar5 + 9);
        do {
          uVar11 = (uVar11 ^ bVar4) * 0x100000001b3;
          bVar4 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar4 != 0);
      }
      *param_1 = uVar11;
      param_1[1] = (ulong)__s;
      param_1[2] = uVar7;
    }
    param_1[3] = 0;
  }
  return;
}


