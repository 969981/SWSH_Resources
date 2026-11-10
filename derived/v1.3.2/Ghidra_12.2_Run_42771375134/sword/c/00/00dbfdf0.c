/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dbfdf0; name: FUN_00dbfdf0
 */


/* WARNING: Removing unreachable block (ram,0x00dbfec8) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_00dbfdf0(long param_1,ulong *param_2)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 local_38;
  
  if (((*(long **)(param_1 + 0x418) != *(long **)(param_1 + 0x420)) &&
      (lVar10 = **(long **)(param_1 + 0x418), lVar10 != 0)) &&
     (puVar18 = *(undefined8 **)(lVar10 + 0x60), puVar18 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar18)(puVar18);
    if (((*PTR_DAT_027150a8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar5 != 0)) {
      uVar9 = FUN_00706e40();
      *(undefined8 *)PTR_DAT_027150b0 = uVar9;
      __cxa_guard_release(PTR_DAT_027150a8);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_027150b0) {
        local_38 = FUN_0069d2b0(puVar18 + -10);
        uVar7 = FUN_006b94c0(&local_38);
        if ((uVar7 & 1) == 0) {
          return false;
        }
        puVar8 = (ulong *)FUN_006b94f0(&local_38);
        uVar7 = *puVar8;
        pcVar2 = (char *)puVar8[1];
        uVar1 = puVar8[2];
        uVar3 = puVar8[3];
        if (uVar3 != 0) {
          (**(code **)(*(long *)(uVar3 + 0x48) + 0x10))();
        }
        if (*pcVar2 == '\0') {
          bVar4 = false;
        }
        else {
          iVar5 = (int)uVar1;
          if ((0 < iVar5) && (uVar15 = uVar1 & 0xffffffff, uVar15 != 1)) {
            if (uVar15 == 2) {
              iVar12 = 0;
              lVar10 = 1;
            }
            else {
              lVar10 = 1;
              iVar11 = 0;
              do {
                iVar12 = (int)lVar10;
                if (pcVar2[lVar10] != '/') {
                  iVar12 = iVar11;
                }
                if ((pcVar2 + lVar10)[1] == '/') {
                  iVar12 = (int)lVar10 + 1;
                }
                lVar10 = lVar10 + 2;
                iVar11 = iVar12;
              } while (uVar15 - ((ulong)(iVar5 - 1U) & 1) != lVar10);
            }
            if ((iVar5 - 1U & 1) != 0) {
              iVar11 = (int)lVar10;
              if (pcVar2[lVar10] != '/') {
                iVar11 = iVar12;
              }
              iVar12 = iVar11;
            }
            if (0 < iVar12 && iVar12 < iVar5 + -1) {
              uVar16 = (ulong)(iVar12 + 1);
              uVar7 = 0xcbf29ce484222645;
              uVar15 = uVar1;
              if (uVar16 <= uVar1) {
                uVar15 = uVar16;
              }
              if (uVar1 - uVar15 != 0) {
                uVar17 = uVar16;
                if (uVar1 <= uVar16) {
                  uVar17 = uVar1;
                }
                pbVar14 = (byte *)(pcVar2 + uVar15);
                uVar15 = uVar1 - uVar15 & 1;
                if (uVar1 != uVar17 + 1) {
                  uVar17 = ~uVar1;
                  if (uVar17 < ~uVar16) {
                    uVar17 = ~uVar16;
                  }
                  lVar10 = ((uVar15 - 1) - uVar1) - uVar17;
                  pbVar13 = pbVar14;
                  do {
                    pbVar14 = pbVar13 + 2;
                    uVar7 = ((uVar7 ^ *pbVar13) * 0x100000001b3 ^ (ulong)pbVar13[1]) * 0x100000001b3
                    ;
                    lVar10 = lVar10 + 2;
                    pbVar13 = pbVar14;
                  } while (lVar10 != 0);
                }
                if (uVar15 != 0) {
                  uVar7 = (uVar7 ^ *pbVar14) * 0x100000001b3;
                }
              }
            }
          }
          bVar4 = uVar7 == *param_2;
        }
        if (uVar3 == 0) {
          return bVar4;
        }
        (**(code **)(*(long *)(uVar3 + 0x48) + 0x18))((long *)(uVar3 + 0x48));
        return bVar4;
      }
    }
  }
  return false;
}


