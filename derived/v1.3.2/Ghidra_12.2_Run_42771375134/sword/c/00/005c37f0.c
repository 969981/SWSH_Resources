/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c37f0; name: FUN_005c37f0
 */


void FUN_005c37f0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined1 auStack_458 [8];
  undefined1 auStack_450 [1024];
  
  puVar2 = PTR_DAT_02713ea8;
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar3 = (ulong)uVar1;
  if (uVar1 == 0) {
    return;
  }
  uVar5 = 0;
  iVar9 = 0;
  do {
    for (lVar7 = *(long *)(param_1 + uVar5 * 0x28 + 0x48); lVar7 != 0; lVar7 = *(long *)(lVar7 + 8))
    {
      iVar9 = iVar9 + 1;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < uVar3);
  if (iVar9 < 1000) {
    if (iVar9 < 1) {
      return;
    }
    lVar7 = (long)iVar9;
  }
  else {
    lVar7 = 1000;
  }
  if (uVar1 == 0) {
    iVar4 = 0;
  }
  else {
    uVar5 = 0;
    lVar6 = 0;
    do {
      if (((int)lVar6 < (int)lVar7) &&
         (lVar8 = *(long *)(param_1 + uVar5 * 0x28 + 0x48), lVar8 != 0)) {
        lVar6 = (long)(int)lVar6;
        do {
          *(long *)(puVar2 + lVar6 * 8) = lVar8;
          lVar6 = lVar6 + 1;
          if (lVar7 <= lVar6) break;
          lVar8 = *(long *)(lVar8 + 8);
        } while (lVar8 != 0);
        uVar3 = (ulong)*(uint *)(param_1 + 0x30);
      }
      iVar4 = (int)lVar6;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  puVar2 = PTR_DAT_02713ea8;
  FUN_005c3ef0(auStack_458,(long)iVar4,PTR_DAT_02713ea8);
  if (0 < iVar9) {
    lVar6 = 0;
    iVar4 = 0;
    do {
      lVar8 = *(long *)(puVar2 + lVar6 * 8);
      if (0 < *(long *)(lVar8 + 0x38)) {
        if (*(long *)(lVar8 + 0x30) == 0) {
          FUN_005c55d0(auStack_450,0x400,"Unknown File",0xffffffffffffffff);
        }
        else {
          FUN_005c5550(auStack_450,0x400);
        }
        if (0x62 < iVar4) break;
        iVar4 = iVar4 + 1;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar7);
    if (0 < iVar9) {
      lVar6 = 0;
      iVar9 = 0;
      do {
        while (lVar8 = *(long *)(puVar2 + lVar6 * 8), *(long *)(lVar8 + 0x38) == 0) {
          if (*(long *)(lVar8 + 0x30) == 0) {
            FUN_005c55d0(auStack_450,0x400,"Unknown File",0xffffffffffffffff);
          }
          else {
            FUN_005c5550(auStack_450,0x400);
          }
          if (0x62 < iVar9) {
            return;
          }
          iVar9 = iVar9 + 1;
          lVar6 = lVar6 + 1;
          if (lVar7 <= lVar6) {
            return;
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar7);
    }
  }
  return;
}


