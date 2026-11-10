/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007bdc50; name: FUN_007bdc50
 */


void FUN_007bdc50(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  char cVar4;
  char cVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  
  if ((((*(long *)PTR_DAT_027104b0 != 0) && (*(int *)(param_1 + 0x78) != 4)) &&
      (uVar7 = FUN_007b56f0(), (uVar7 & 1) == 0)) &&
     (FUN_007bd630(param_1), *(int *)(param_1 + 0x78) != 4)) {
    lVar8 = *(long *)PTR_DAT_02716a30;
    if (lVar8 != 0) {
      *(undefined4 *)(param_1 + 0x160) =
           *(undefined4 *)(lVar8 + (ulong)*(byte *)(lVar8 + 0x162) * 4 + 0x180);
    }
    *(undefined4 *)(param_1 + 0x78) = 4;
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    FUN_007cddc0();
  }
  if (*(int *)(param_1 + 0x78) == 2) {
    if (*(long *)PTR_DAT_02716a30 != 0) {
      puVar1 = *(ulong **)(param_1 + 0x130);
      puVar3 = *(ulong **)(param_1 + 0x138);
      if (puVar1 != puVar3) {
        puVar10 = puVar1;
        do {
          if (((char)puVar10[3] != '\0') && (*(char *)((long)puVar10 + 0x1c) != '\0')) {
            cVar4 = *(char *)((long)puVar10 + 0x1b);
            cVar5 = *(char *)((long)puVar10 + 0x1d);
            if ((cVar5 != '\0') || (cVar4 == '\0')) {
              if ((cVar4 == '\0') && (cVar5 != '\0')) goto LAB_007be00c;
              if (cVar4 != '\0' && cVar5 != '\0') {
                if (*(ulong *)(*(long *)PTR_DAT_02716a30 + 0xf0) <= *puVar10) goto LAB_007be00c;
                break;
              }
            }
          }
          puVar10 = puVar10 + 4;
        } while (puVar3 != puVar10);
      }
      if ((long)puVar3 - (long)puVar1 >> 5 != (ulong)*(byte *)(param_1 + 0x7c)) {
LAB_007bde88:
        uVar7 = FUN_007be220(param_1,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
        if (*(int *)(param_1 + 0x78) == 4) {
          return;
        }
        *(undefined4 *)(param_1 + 0x78) = 1;
        return;
      }
      if (puVar1 != puVar3) {
        puVar10 = puVar1;
        do {
          if (*(char *)((long)puVar10 + 0x19) == '\0') goto LAB_007bde88;
          puVar10 = puVar10 + 4;
        } while (puVar3 != puVar10);
        for (; puVar1 != puVar3; puVar1 = puVar1 + 4) {
          if (*(char *)((long)puVar1 + 0x1c) == '\0') {
            return;
          }
          if (*(char *)((long)puVar1 + 0x1d) != '\0') {
            return;
          }
          if (*(char *)((long)puVar1 + 0x1b) != '\0') {
            return;
          }
          if (*(char *)((long)puVar1 + 0x1a) == '\0') {
            return;
          }
        }
      }
      FUN_007bd630(param_1);
      if (*(int *)(param_1 + 0x78) == 4) {
        return;
      }
      *(undefined4 *)(param_1 + 0x78) = 3;
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x78) != 1) {
      return;
    }
    uVar7 = FUN_007ce5a0(*(undefined8 *)(param_1 + 0x168));
    if ((uVar7 & 1) == 0) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0x130);
    lVar2 = *(long *)(param_1 + 0x138);
    if (lVar8 != lVar2) {
      lVar9 = lVar8;
      do {
        if (((*(char *)(lVar9 + 0x18) == '\0') && (*(char *)(lVar9 + 0x1c) != '\0')) &&
           (*(char *)(lVar9 + 0x1d) != '\0')) goto LAB_007bdfc0;
        lVar9 = lVar9 + 0x20;
      } while (lVar2 != lVar9);
      lVar9 = lVar8;
      do {
        if (*(char *)(lVar9 + 0x18) == '\0' && *(char *)(lVar9 + 0x1b) != '\0') goto LAB_007bdfc0;
        lVar9 = lVar9 + 0x20;
      } while (lVar2 != lVar9);
    }
    if ((*(int *)(param_1 + 0x78) - 1U < 2) &&
       (lVar2 - lVar8 >> 5 == (ulong)*(byte *)(param_1 + 0x7c))) {
      for (; lVar8 != lVar2; lVar8 = lVar8 + 0x20) {
        if (*(char *)(lVar8 + 0x19) == '\0') goto LAB_007bdeb8;
      }
    }
    else {
LAB_007bdeb8:
      FUN_007be050(param_1);
    }
    if (*(long *)PTR_DAT_02716a30 != 0) {
      puVar1 = *(ulong **)(param_1 + 0x130);
      puVar3 = *(ulong **)(param_1 + 0x138);
      if (puVar1 != puVar3) {
        puVar10 = puVar1;
        do {
          if (((char)puVar10[3] != '\0') && (*(char *)((long)puVar10 + 0x1c) != '\0')) {
            cVar4 = *(char *)((long)puVar10 + 0x1b);
            cVar5 = *(char *)((long)puVar10 + 0x1d);
            if ((cVar5 != '\0') || (cVar4 == '\0')) {
              if ((cVar4 == '\0') && (cVar5 != '\0')) goto LAB_007be00c;
              if (cVar4 != '\0' && cVar5 != '\0') {
                if (*(ulong *)(*(long *)PTR_DAT_02716a30 + 0xf0) <= *puVar10) goto LAB_007be00c;
                break;
              }
            }
          }
          puVar10 = puVar10 + 4;
        } while (puVar3 != puVar10);
      }
      if (1 < *(int *)(param_1 + 0x78) - 1U) {
        return;
      }
      if ((long)puVar3 - (long)puVar1 >> 5 != (ulong)*(byte *)(param_1 + 0x7c)) {
        return;
      }
      if (puVar1 != puVar3) {
        puVar10 = puVar1;
        do {
          if (*(char *)((long)puVar10 + 0x19) == '\0') {
            return;
          }
          puVar10 = puVar10 + 4;
        } while (puVar3 != puVar10);
        for (; puVar1 != puVar3; puVar1 = puVar1 + 4) {
          if (*(char *)((long)puVar1 + 0x1b) != '\0') {
            return;
          }
        }
      }
      uVar7 = FUN_007be220(param_1,1);
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x78) == 4) {
        return;
      }
      *(undefined4 *)(param_1 + 0x78) = 2;
      return;
    }
  }
LAB_007be00c:
  puVar6 = PTR_DAT_02716a30;
  FUN_007bd630(param_1);
  if (*(int *)(param_1 + 0x78) == 4) {
    return;
  }
  lVar8 = *(long *)puVar6;
joined_r0x007bdfe0:
  if (lVar8 != 0) {
    *(undefined4 *)(param_1 + 0x160) =
         *(undefined4 *)(lVar8 + (ulong)*(byte *)(lVar8 + 0x162) * 4 + 0x180);
  }
  *(undefined4 *)(param_1 + 0x78) = 4;
  return;
LAB_007bdfc0:
  FUN_007bd630(param_1);
  if (*(int *)(param_1 + 0x78) == 4) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_02716a30;
  goto joined_r0x007bdfe0;
}


