/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00481c40; name: FUN_00481c40
 */


void FUN_00481c40(undefined8 *param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  
  uVar2 = *(ushort *)(param_1 + 2);
  if (uVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar2 <= uVar1 && uVar1 != uVar2) {
      plVar7 = (long *)*param_1;
      uVar9 = 0;
      lVar8 = (ulong)uVar1 << 3;
      do {
        lVar3 = *plVar7;
        if (((*(uint *)(lVar3 + 0x26b) & 0xe010000) == 0) &&
           ((uVar4 = FUN_0048e100(), (uVar4 & 1) != 0 || ((*(uint *)(lVar3 + 0x26b) & 0x78) == 0))))
        {
          uVar9 = uVar9 + 1;
        }
        plVar7 = plVar7 + 1;
        lVar8 = lVar8 + -8;
      } while ((lVar8 != 0) && (uVar9 < uVar2));
      if (lVar8 != 0) {
        lVar3 = 0;
        uVar6 = 1;
        if (param_1 == (undefined8 *)PTR_DAT_02712df8) {
          uVar6 = 2;
        }
        do {
          while (lVar5 = *(long *)((long)plVar7 + lVar3),
                (*(uint *)(lVar5 + 0x26b) & 0x4010000) != 0) {
            lVar3 = lVar3 + 8;
            lVar8 = lVar8 + -8;
            if (lVar8 == 0) {
              return;
            }
          }
          if (*(char *)((long)param_1 + 0x13) == '\0') {
            FUN_0048e060(lVar5,uVar6);
          }
          else {
            FUN_0048e420(lVar5,uVar6);
          }
          lVar8 = lVar8 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar8 != 0);
      }
    }
  }
  return;
}


