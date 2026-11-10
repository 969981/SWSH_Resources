/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f5c830; name: FUN_00f5c830
 */


ulong FUN_00f5c830(undefined8 param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  
  if (param_3 < 0x21) {
    if (0x10 < param_3) {
      lVar8 = *(long *)((long)param_2 + (param_3 - 8));
      uVar7 = *param_2 * -0x4b6d499041670d8d - param_2[1];
      uVar6 = param_2[1] ^ 0xc949d7c7509e6557;
      uVar6 = *param_2 * -0x4b6d499041670d8d + param_3 + lVar8 * 0x651e95c4d06fbfb1 +
              (uVar6 >> 0x14 | uVar6 << 0x2c);
      uVar7 = ((uVar7 >> 0x2b | uVar7 * 0x200000) +
               *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 +
               (lVar8 * -0x41befec400000000 | (ulong)(lVar8 * -0x651e95c4d06fbfb1) >> 0x1e) ^ uVar6)
              * -0x622015f714c7d297;
      uVar6 = (uVar7 ^ uVar6 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
      return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    }
    if (8 < param_3) {
      uVar7 = *(ulong *)((long)param_2 + (param_3 - 8));
      uVar6 = uVar7 + param_3;
      uVar10 = uVar6 << ((ulong)(uint)-(int)param_3 & 0x3f) | uVar6 >> (param_3 & 0x3f);
      uVar6 = (uVar10 ^ *param_2) * -0x622015f714c7d297;
      uVar6 = (uVar6 ^ uVar10 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
      return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297 ^ uVar7;
    }
    if (3 < param_3) {
      uVar7 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
      uVar6 = ((uint)((int)*param_2 << 3) + param_3 ^ uVar7) * -0x622015f714c7d297;
      uVar6 = (uVar6 ^ uVar7 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
      return (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    }
    uVar6 = 0x9ae16a3b2f90404f;
    if (param_3 != 0) {
      uVar6 = (ulong)((int)param_3 + (uint)*(byte *)((long)param_2 + (param_3 - 1)) * 4) *
              -0x36b62838af619aa9 ^
              (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
              -0x651e95c4d06fbfb1;
      return (uVar6 ^ uVar6 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
  }
  else {
    if (param_3 < 0x41) {
      lVar1 = *(long *)((long)param_2 + (param_3 - 0x10));
      uVar12 = param_2[3];
      uVar10 = *param_2 + (lVar1 + param_3) * -0x3c5a37a36834ced9;
      lVar8 = *(long *)((long)param_2 + (param_3 - 8)) + uVar12;
      uVar6 = uVar10 + param_2[1];
      uVar7 = uVar6 + param_2[2];
      lVar15 = (uVar6 >> 7 | uVar6 << 0x39) + (uVar10 >> 0x25 | uVar10 * 0x8000000) +
               (uVar10 + uVar12 >> 0x34 | (uVar10 + uVar12) * 0x1000) +
               (uVar7 >> 0x1f | uVar7 << 0x21);
      uVar6 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
      uVar10 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar6;
      uVar11 = lVar8 + uVar6;
      uVar13 = uVar10 + lVar1;
      uVar6 = (uVar13 + lVar8 + lVar15) * -0x3c5a37a36834ced9 +
              (uVar7 + uVar12 + (uVar6 >> 0x25 | uVar6 * 0x8000000) + (uVar10 >> 7 | uVar10 << 0x39)
               + (uVar11 >> 0x34 | uVar11 * 0x1000) + (uVar13 >> 0x1f | uVar13 << 0x21)) *
              -0x651e95c4d06fbfb1;
      uVar6 = lVar15 + (uVar6 ^ uVar6 >> 0x2f) * -0x3c5a37a36834ced9;
      return (uVar6 ^ uVar6 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
    lVar1 = *(long *)((long)param_2 + (param_3 - 0x30));
    lVar2 = *(long *)((long)param_2 + (param_3 - 0x28));
    uVar12 = *(ulong *)((long)param_2 + (param_3 - 0x18));
    lVar14 = *(long *)((long)param_2 + (param_3 - 0x10));
    lVar3 = *(long *)((long)param_2 + (param_3 - 8));
    uVar9 = (uVar12 ^ lVar1 + param_3) * -0x622015f714c7d297;
    lVar4 = *(long *)((long)param_2 + (param_3 - 0x38));
    uVar6 = lVar4 + lVar14;
    lVar8 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
    lVar15 = uVar6 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
    uVar7 = lVar8 + lVar4 + lVar1;
    uVar10 = lVar15 + uVar12 + lVar14;
    uVar11 = lVar15 + lVar2 + lVar3;
    uVar13 = uVar10 + lVar3;
    uVar12 = (uVar9 ^ uVar12 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
    puVar5 = param_2 + 4;
    uVar9 = *param_2;
    uVar10 = (uVar10 >> 0x2c | uVar10 * 0x100000) + lVar15 + (uVar11 >> 0x15 | uVar11 << 0x2b);
    uVar16 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
    uVar11 = lVar2 + lVar8 + uVar16;
    uVar12 = uVar7 + lVar2;
    lVar15 = uVar9 + lVar2 * -0x4b6d499041670d8d;
    uVar7 = (uVar7 >> 0x2c | uVar7 * 0x100000) + lVar8 + (uVar11 >> 0x15 | uVar11 << 0x2b);
    lVar8 = -(param_3 - 1 & 0xffffffffffffffc0);
    while( true ) {
      lVar8 = lVar8 + 0x40;
      lVar14 = uVar9 + uVar7 * -0x4b6d499041670d8d;
      uVar11 = lVar15 + uVar12 + uVar6 + puVar5[-3];
      uVar6 = uVar6 + uVar7 + puVar5[2];
      uVar6 = puVar5[1] + uVar12 + (uVar6 >> 0x2a | uVar6 * 0x400000) * -0x4b6d499041670d8d;
      uVar7 = lVar14 + puVar5[-3] + puVar5[-2];
      uVar12 = uVar7 + puVar5[-1];
      lVar15 = (uVar16 + uVar13 >> 0x21 | (uVar16 + uVar13) * 0x80000000) * -0x4b6d499041670d8d;
      uVar16 = (uVar11 >> 0x25 | uVar11 * 0x8000000) * -0x4b6d499041670d8d ^ uVar10;
      uVar11 = lVar14 + uVar13 + puVar5[-1] + uVar16;
      lVar1 = lVar15 + uVar10 + *puVar5;
      uVar10 = uVar6 + puVar5[-2] + lVar1 + puVar5[3];
      uVar7 = (uVar7 >> 0x2c | uVar7 * 0x100000) + lVar14 + (uVar11 >> 0x15 | uVar11 << 0x2b);
      uVar11 = lVar1 + puVar5[1] + puVar5[2];
      uVar13 = uVar11 + puVar5[3];
      uVar10 = (uVar11 >> 0x2c | uVar11 * 0x100000) + lVar1 + (uVar10 >> 0x15 | uVar10 << 0x2b);
      if (lVar8 == 0) break;
      uVar9 = puVar5[4];
      puVar5 = puVar5 + 8;
    }
    uVar11 = (uVar13 ^ uVar12) * -0x622015f714c7d297;
    uVar7 = (uVar10 ^ uVar7) * -0x622015f714c7d297;
    uVar11 = (uVar11 ^ uVar13 ^ uVar11 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = (uVar7 ^ uVar10 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = lVar15 + (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = (uVar7 ^ uVar16 + (uVar6 ^ uVar6 >> 0x2f) * -0x4b6d499041670d8d +
                     (uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar7 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  }
  return uVar6;
}


