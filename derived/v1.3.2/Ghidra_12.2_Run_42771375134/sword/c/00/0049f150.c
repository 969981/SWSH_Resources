/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049f150; name: FUN_0049f150
 */


long FUN_0049f150(long param_1,ulong *param_2,long *param_3,undefined1 *param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  
  uVar6 = *param_2;
  if (((((uVar6 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
      (((char)param_2[3] == -1 && ((char)param_2[4] == -1)))) && (param_2[5] == 0)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = *(int *)(param_1 + 0x18) != 0;
    }
    lVar4 = 0;
    if (*(char *)(param_1 + 0xc) != '\0') {
      lVar4 = param_1 + 8;
    }
    return lVar4;
  }
  if ((param_3 != (long *)0x0) && (*(char *)(param_1 + 0xc) != '\0')) {
    *param_3 = param_1 + 8;
    uVar6 = *param_2;
  }
  iVar8 = *(int *)(param_1 + 0x18) + -1;
  if (-1 < iVar8) {
    iVar10 = 0;
    do {
      while( true ) {
        iVar3 = iVar8 - iVar10;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar10 + (iVar3 >> 1);
        uVar11 = *(ulong *)(*(long *)(param_1 + 0x10) + (long)iVar3 * 0x28 + 0x20);
        if (uVar6 > uVar11 || uVar11 == uVar6) break;
        iVar8 = iVar3 + -1;
        if (iVar8 < iVar10) {
          return 0;
        }
      }
      if (uVar6 <= uVar11) {
        lVar4 = *(long *)(param_1 + 0x10) + (long)iVar3 * 0x28;
        if (lVar4 == 0) {
          return 0;
        }
        uVar5 = (uint)param_2[1];
        if ((((uVar5 == 0) && ((int)param_2[2] == 0)) && ((char)param_2[3] == -1)) &&
           (((char)param_2[4] == -1 && (param_2[5] == 0)))) {
          if (param_4 != (undefined1 *)0x0) {
            *param_4 = *(int *)(lVar4 + 0x18) != 0;
          }
          lVar9 = 0;
          if (*(char *)(lVar4 + 0xc) != '\0') {
            lVar9 = lVar4 + 8;
          }
          return lVar9;
        }
        if ((param_3 != (long *)0x0) && (*(char *)(lVar4 + 0xc) != '\0')) {
          *param_3 = lVar4 + 8;
          uVar5 = (uint)param_2[1];
        }
        iVar8 = *(int *)(lVar4 + 0x18) + -1;
        if (iVar8 < 0) {
          return 0;
        }
        iVar10 = 0;
        while( true ) {
          while( true ) {
            iVar3 = iVar8 - iVar10;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            iVar3 = iVar10 + (iVar3 >> 1);
            uVar1 = *(uint *)(*(long *)(lVar4 + 0x10) + (long)iVar3 * 0x28 + 0x20);
            if (uVar1 <= uVar5) break;
            iVar8 = iVar3 + -1;
            if (iVar8 < iVar10) {
              return 0;
            }
          }
          if (uVar5 <= uVar1) break;
          iVar10 = iVar3 + 1;
          if (iVar8 < iVar10) {
            return 0;
          }
        }
        lVar4 = *(long *)(lVar4 + 0x10) + (long)iVar3 * 0x28;
        if (lVar4 == 0) {
          return 0;
        }
        uVar5 = (uint)param_2[2];
        if ((((uVar5 == 0) && ((char)param_2[3] == -1)) && ((char)param_2[4] == -1)) &&
           (param_2[5] == 0)) {
          if (param_4 != (undefined1 *)0x0) {
            *param_4 = *(int *)(lVar4 + 0x18) != 0;
          }
          lVar9 = 0;
          if (*(char *)(lVar4 + 0xc) != '\0') {
            lVar9 = lVar4 + 8;
          }
          return lVar9;
        }
        if ((param_3 != (long *)0x0) && (*(char *)(lVar4 + 0xc) != '\0')) {
          *param_3 = lVar4 + 8;
          uVar5 = (uint)param_2[2];
        }
        iVar8 = *(int *)(lVar4 + 0x18) + -1;
        if (iVar8 < 0) {
          return 0;
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        iVar10 = 0;
        while( true ) {
          while( true ) {
            iVar3 = iVar8 - iVar10;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            iVar3 = iVar10 + (iVar3 >> 1);
            lVar9 = (long)iVar3;
            uVar1 = *(uint *)(lVar4 + (long)iVar3 * 0x28 + 0x20);
            if (uVar1 <= uVar5) break;
            iVar8 = iVar3 + -1;
            if (iVar8 < iVar10) {
              return 0;
            }
          }
          if (uVar5 <= uVar1) break;
          iVar10 = iVar3 + 1;
          if (iVar8 < iVar10) {
            return 0;
          }
        }
        if (lVar4 + lVar9 * 0x28 == 0) {
          return 0;
        }
        bVar7 = (byte)param_2[3];
        if (((bVar7 == 0xff) && ((char)param_2[4] == -1)) && (param_2[5] == 0)) {
          if (param_4 != (undefined1 *)0x0) {
            *param_4 = *(int *)(lVar4 + lVar9 * 0x28 + 0x18) != 0;
          }
          lVar4 = lVar4 + lVar9 * 0x28;
          lVar9 = 0;
          if (*(char *)(lVar4 + 0xc) != '\0') {
            lVar9 = lVar4 + 8;
          }
          return lVar9;
        }
        if ((param_3 != (long *)0x0) && (*(char *)(lVar4 + lVar9 * 0x28 + 0xc) != '\0')) {
          *param_3 = lVar4 + lVar9 * 0x28 + 8;
          bVar7 = (byte)param_2[3];
        }
        iVar8 = *(int *)(lVar4 + lVar9 * 0x28 + 0x18) + -1;
        if (iVar8 < 0) {
          return 0;
        }
        lVar4 = *(long *)(lVar4 + lVar9 * 0x28 + 0x10);
        iVar10 = 0;
        while( true ) {
          while( true ) {
            iVar3 = iVar8 - iVar10;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            iVar3 = iVar10 + (iVar3 >> 1);
            bVar2 = *(byte *)(lVar4 + (long)iVar3 * 0x28 + 0x20);
            if (bVar2 <= bVar7) break;
            iVar8 = iVar3 + -1;
            if (iVar8 < iVar10) {
              return 0;
            }
          }
          if (bVar7 <= bVar2) break;
          iVar10 = iVar3 + 1;
          if (iVar8 < iVar10) {
            return 0;
          }
        }
        lVar4 = lVar4 + (long)iVar3 * 0x28;
        if (lVar4 == 0) {
          return 0;
        }
        bVar7 = (byte)param_2[4];
        if ((bVar7 == 0xff) && (param_2[5] == 0)) {
          if (param_4 != (undefined1 *)0x0) {
            *param_4 = *(int *)(lVar4 + 0x18) != 0;
          }
          lVar9 = 0;
          if (*(char *)(lVar4 + 0xc) != '\0') {
            lVar9 = lVar4 + 8;
          }
          return lVar9;
        }
        if ((param_3 != (long *)0x0) && (*(char *)(lVar4 + 0xc) != '\0')) {
          *param_3 = lVar4 + 8;
          bVar7 = (byte)param_2[4];
        }
        iVar8 = *(int *)(lVar4 + 0x18) + -1;
        if (iVar8 < 0) {
          return 0;
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        iVar10 = 0;
        while( true ) {
          while( true ) {
            iVar3 = iVar8 - iVar10;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            iVar3 = iVar10 + (iVar3 >> 1);
            lVar9 = (long)iVar3;
            bVar2 = *(byte *)(lVar4 + (long)iVar3 * 0x28 + 0x20);
            if (bVar2 <= bVar7) break;
            iVar8 = iVar3 + -1;
            if (iVar8 < iVar10) {
              return 0;
            }
          }
          if (bVar7 <= bVar2) break;
          iVar10 = iVar3 + 1;
          if (iVar8 < iVar10) {
            return 0;
          }
        }
        if (lVar4 + lVar9 * 0x28 == 0) {
          return 0;
        }
        if (param_2[5] == 0) {
          if (param_4 != (undefined1 *)0x0) {
            *param_4 = *(int *)(lVar4 + lVar9 * 0x28 + 0x18) != 0;
          }
          lVar4 = lVar4 + lVar9 * 0x28;
          lVar9 = 0;
          if (*(char *)(lVar4 + 0xc) != '\0') {
            lVar9 = lVar4 + 8;
          }
          return lVar9;
        }
        if ((param_3 != (long *)0x0) && (*(char *)(lVar4 + lVar9 * 0x28 + 0xc) != '\0')) {
          *param_3 = lVar4 + lVar9 * 0x28 + 8;
        }
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 0;
        }
        iVar8 = *(int *)(lVar4 + lVar9 * 0x28 + 0x18) + -1;
        if (iVar8 < 0) {
          return 0;
        }
        lVar4 = *(long *)(lVar4 + lVar9 * 0x28 + 0x10);
        iVar10 = 0;
        do {
          while( true ) {
            iVar3 = iVar8 - iVar10;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            iVar3 = iVar10 + (iVar3 >> 1);
            uVar6 = *(ulong *)(lVar4 + (long)iVar3 * 0x10 + 8);
            if (uVar6 <= param_2[5]) break;
            iVar8 = iVar3 + -1;
            if (iVar8 < iVar10) {
              return 0;
            }
          }
          if (param_2[5] <= uVar6) {
            return lVar4 + (long)iVar3 * 0x10;
          }
          iVar10 = iVar3 + 1;
        } while (iVar10 <= iVar8);
        return 0;
      }
      iVar10 = iVar3 + 1;
    } while (iVar10 <= iVar8);
  }
  return 0;
}


