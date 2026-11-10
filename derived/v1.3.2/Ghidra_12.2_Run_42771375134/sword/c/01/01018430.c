/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01018430; name: FUN_01018430
 */


uint FUN_01018430(undefined8 param_1,long *param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  uVar8 = FUN_01029540();
  if ((uVar8 & 1) != 0) {
    puVar9 = (uint *)FUN_010295e0(param_1);
    uVar8 = (ulong)*puVar9;
    piVar1 = (int *)((long)puVar9 + uVar8);
    uVar10 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
    uVar12 = (ulong)*(uint *)((long)piVar1 + uVar10);
    uVar14 = (ulong)*(uint *)((long)((long)piVar1 + uVar10) + uVar12);
    if (uVar14 != 0) {
      lVar2 = uVar8 + uVar12 + uVar10;
      lVar16 = 0;
      do {
        uVar17 = (ulong)*(uint *)((long)puVar9 + lVar16 + lVar2 + 4);
        lVar13 = lVar16 + uVar17 + lVar2;
        lVar3 = lVar16 + (uVar17 - (long)*(int *)((long)puVar9 + lVar13 + 4)) + lVar2;
        if ((*(ushort *)((long)puVar9 + lVar3 + 4) < 5) ||
           (uVar15 = (ulong)*(ushort *)((long)puVar9 + lVar3 + 8), uVar15 == 0)) {
          if (*param_2 == 0) goto LAB_0101851c;
        }
        else if (*(long *)((long)puVar9 + lVar16 + uVar17 + uVar15 + lVar2 + 4) == *param_2) {
LAB_0101851c:
          if ((long)puVar9 + lVar16 + uVar17 + uVar10 + uVar8 + uVar12 == -4) {
            return param_6;
          }
          uVar4 = nn::time::IsLeapYear(param_3);
          iVar5 = nn::time::DateToDays(param_3,1,1);
          iVar6 = nn::time::DateToDays(param_3,param_4,param_5);
          uVar4 = (((uint)(2 < param_4) & (uVar4 ^ 1)) - iVar5) + iVar6;
          uVar7 = nn::time::IsValidDate(param_3,param_4,param_5);
          lVar13 = (long)*(int *)((long)puVar9 + lVar13 + 4);
          if (0x16d < uVar4 || ((uVar7 ^ 0xffffffff) & 1) != 0) {
            uVar4 = 0xffffffff;
          }
          puVar11 = (uint *)0x0;
          if (6 < *(ushort *)((long)puVar9 + lVar16 + (uVar17 - lVar13) + lVar2 + 4)) {
            uVar8 = (ulong)*(ushort *)((long)puVar9 + lVar16 + (uVar17 - lVar13) + lVar2 + 10);
            puVar11 = (uint *)0x0;
            if (uVar8 != 0) {
              puVar11 = (uint *)((long)puVar9 +
                                lVar16 + uVar8 + *(uint *)((long)puVar9 +
                                                          lVar16 + uVar8 + uVar17 + lVar2 + 4) +
                                         uVar17 + lVar2 + 4);
            }
          }
          if ((int)uVar4 < 0) {
            return param_6;
          }
          if (uVar4 < *puVar11) {
            return (uint)*(byte *)((long)puVar11 + (ulong)uVar4 + 4);
          }
          return param_6;
        }
        lVar16 = lVar16 + 4;
      } while (uVar14 * 4 != lVar16);
    }
  }
  return param_6;
}


