/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0068ecc0; name: FUN_0068ecc0
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_0068ecc0(long param_1,ulong param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  
  uVar6 = *(uint *)(param_1 + 0x9c);
  uVar9 = *(int *)(param_1 + 0x44) - 0x106;
  lVar16 = *(long *)(param_1 + 0x50);
  uVar18 = (ulong)(int)*(uint *)(param_1 + 0xa8);
  uVar7 = *(uint *)(param_1 + 0xa4);
  pcVar1 = (char *)(lVar16 + (ulong)uVar6);
  cVar10 = (pcVar1 + uVar18)[-1];
  if (uVar6 <= uVar9) {
    uVar6 = uVar9;
  }
  uVar20 = *(uint *)(param_1 + 0xac);
  if (*(uint *)(param_1 + 0xbc) <= *(uint *)(param_1 + 0xa8)) {
    uVar20 = *(uint *)(param_1 + 0xac) >> 2;
  }
  iVar19 = (int)pcVar1 + 0x102;
  cVar11 = pcVar1[uVar18];
  uVar5 = uVar7;
  if (*(uint *)(param_1 + 0xc0) <= uVar7) {
    uVar5 = *(uint *)(param_1 + 0xc0);
  }
  do {
    pcVar2 = (char *)(lVar16 + (param_2 & 0xffffffff));
    iVar17 = (int)uVar18;
    if ((((pcVar2[iVar17] == cVar11) && (pcVar2[(long)iVar17 + -1] == cVar10)) &&
        (*pcVar2 == *pcVar1)) && (pcVar2[1] == pcVar1[1])) {
      lVar14 = 0;
      lVar3 = lVar16 + 5 + (param_2 & 0xffffffff);
      do {
        pcVar2 = pcVar1 + lVar14;
        lVar4 = lVar3 + lVar14;
        iVar12 = (int)pcVar2;
        if (pcVar2[3] != *(char *)(lVar4 + -2)) {
          uVar15 = 0x102 - (long)(iVar19 - (iVar12 + 3));
          iVar12 = (int)uVar15;
          goto joined_r0x0068ee58;
        }
        if (pcVar2[4] != *(char *)(lVar4 + -1)) {
          uVar15 = 0x102 - (long)(iVar19 - (iVar12 + 4));
          iVar12 = (int)uVar15;
          goto joined_r0x0068ee58;
        }
        if (pcVar2[5] != *(char *)(lVar3 + lVar14)) {
          uVar15 = 0x102 - (long)(iVar19 - (iVar12 + 5));
          iVar12 = (int)uVar15;
          goto joined_r0x0068ee58;
        }
        if (pcVar2[6] != *(char *)(lVar4 + 1)) {
          uVar15 = 0x102 - (long)(iVar19 - (iVar12 + 6));
          iVar12 = (int)uVar15;
          goto joined_r0x0068ee58;
        }
        if (pcVar2[7] != *(char *)(lVar4 + 2)) {
          uVar15 = 0x102 - (long)(iVar19 - (iVar12 + 7));
          iVar12 = (int)uVar15;
          goto joined_r0x0068ee58;
        }
        if (pcVar2[8] != *(char *)(lVar4 + 3)) {
          uVar15 = 0x102 - (long)(iVar19 - (iVar12 + 8));
          iVar12 = (int)uVar15;
          goto joined_r0x0068ee58;
        }
        if (pcVar2[9] != *(char *)(lVar4 + 4)) {
          uVar15 = 0x102 - (long)(iVar19 - (iVar12 + 9));
          iVar12 = (int)uVar15;
          goto joined_r0x0068ee58;
        }
        uVar15 = lVar14 + 2;
        lVar14 = lVar14 + 8;
      } while ((uVar15 < 0xfa) && (pcVar2[10] == *(char *)(lVar4 + 5)));
      uVar15 = 0x102 - (long)(iVar19 - ((int)pcVar1 + (int)lVar14 + 2));
      iVar12 = (int)uVar15;
joined_r0x0068ee58:
      if (iVar17 < iVar12) {
        uVar13 = (uint)uVar15;
        *(int *)(param_1 + 0xa0) = (int)param_2;
        if ((int)uVar5 <= (int)uVar13) {
LAB_0068ef08:
          if (uVar13 <= uVar7) {
            uVar7 = uVar13;
          }
          return uVar7;
        }
        cVar10 = pcVar1[(long)(int)uVar13 + -1];
        uVar18 = uVar15 & 0xffffffff;
        cVar11 = pcVar1[uVar15];
      }
    }
    uVar13 = (uint)uVar18;
    uVar8 = *(ushort *)(*(long *)(param_1 + 0x60) + (param_2 & *(uint *)(param_1 + 0x4c)) * 2);
    param_2 = (ulong)uVar8;
    if (((uint)uVar8 <= uVar6 - uVar9) || (uVar20 = uVar20 - 1, uVar20 == 0)) goto LAB_0068ef08;
  } while( true );
}


