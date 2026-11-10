/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e5b10; name: FUN_005e5b10
 */


void FUN_005e5b10(long param_1,char *param_2)

{
  bool bVar1;
  char *pcVar2;
  size_t __n;
  ulong uVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  size_t sVar12;
  undefined2 local_34 [2];
  
  local_34[0] = 0x2e;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    lVar10 = 0;
    do {
      pcVar2 = (char *)(((ulong)local_34 | 1) + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar2 != '\0');
    lVar7 = -1;
    if ((0 < lVar5) && (lVar10 != 0)) {
      lVar10 = lVar5;
      do {
        lVar7 = lVar10 + -1;
        if (*(char *)(*(long *)(param_1 + 8) + lVar7) == '.') goto LAB_005e5b90;
        bVar1 = 1 < lVar10;
        lVar10 = lVar7;
      } while (bVar1);
      lVar7 = -1;
    }
LAB_005e5b90:
    iVar6 = (int)lVar7;
    if (0 < lVar5) {
      lVar10 = lVar5;
      do {
        cVar4 = *(char *)(*(long *)(param_1 + 8) + lVar10 + -1);
        if ((cVar4 == '\\') || (cVar4 == '/')) {
          iVar9 = (int)lVar10 + -1;
          if (iVar6 < 0) goto LAB_005e5c18;
          goto LAB_005e5bd0;
        }
        bVar1 = 1 < lVar10;
        lVar10 = lVar10 + -1;
      } while (bVar1);
    }
    iVar9 = -1;
    if (-1 < iVar6) {
LAB_005e5bd0:
      if (iVar9 <= iVar6) {
        lVar5 = (lVar7 << 0x20) + 0x100000000 >> 0x20;
        FUN_005ca160(param_1,*(long *)(param_1 + 8) + lVar5,param_2,lVar5,0,1);
        return;
      }
    }
  }
LAB_005e5c18:
  if (param_2 != (char *)0x0) {
    uVar8 = lVar5 + 1;
    if (*(ulong *)(param_1 + 0x20) <= uVar8) {
      uVar8 = lVar5 + 2;
      uVar11 = *(ulong *)(param_1 + 0x20) * 2;
      uVar3 = uVar8;
      if (uVar8 <= uVar11) {
        uVar3 = uVar11;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar3 = *(long *)(param_1 + 0x18) + uVar8;
      }
      FUN_005c5e00(param_1,uVar3,1);
      lVar5 = *(long *)(param_1 + 0x10);
      uVar8 = lVar5 + 1;
    }
    *(undefined1 *)(*(long *)(param_1 + 8) + lVar5) = 0x2e;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
    *(undefined1 *)(*(long *)(param_1 + 8) + uVar8) = 0;
    if (*param_2 != '\0') {
      sVar12 = 0;
      do {
        __n = sVar12 + 1;
        lVar5 = sVar12 + 1;
        sVar12 = __n;
      } while (param_2[lVar5] != '\0');
      lVar5 = *(long *)(param_1 + 0x10);
      uVar8 = lVar5 + __n;
      if (*(ulong *)(param_1 + 0x20) <= uVar8) {
        uVar11 = *(ulong *)(param_1 + 0x20) * 2;
        uVar3 = uVar8 + 1;
        if (uVar8 + 1 <= uVar11) {
          uVar3 = uVar11;
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar3 = *(long *)(param_1 + 0x18) + lVar5 + __n + 1;
        }
        FUN_005c5e00(param_1,uVar3,1);
        lVar5 = *(long *)(param_1 + 0x10);
        uVar8 = lVar5 + __n;
      }
      memcpy((void *)(*(long *)(param_1 + 8) + lVar5),param_2,__n);
      *(size_t *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + __n;
      *(undefined1 *)(*(long *)(param_1 + 8) + uVar8) = 0;
    }
  }
  return;
}


