/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bde40; name: FUN_004bde40
 */


/* WARNING: Removing unreachable block (ram,0x004bdf18) */

long FUN_004bde40(long *param_1,undefined8 *param_2,ulong param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  
  puVar6 = PTR_DAT_02712a90;
  plVar2 = param_1 + 2;
  if (param_4 != 1) {
    plVar2 = param_1;
  }
  lVar9 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x48);
  if (lVar9 == 0) goto LAB_004bdfdc;
  FUN_004bd760(lVar9);
  iVar8 = FUN_004bd9f0(lVar9,param_2,*(undefined4 *)(*(long *)PTR_DAT_02712de0 + 0x78));
  if (iVar8 != 2) {
    uVar3 = *(uint *)(plVar2 + 1);
    uVar13 = *(uint *)((long)plVar2 + 0xc);
    if (uVar13 <= uVar3) {
      uVar13 = uVar13 + 0x80;
      puVar10 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar6,(ulong)uVar13 << 3);
      if (puVar10 == (undefined8 *)0x0) goto LAB_004bdfbc;
      puVar11 = (undefined8 *)*plVar2;
      if ((puVar11 != (undefined8 *)0x0) && (puVar11 != puVar10)) {
        uVar4 = *(uint *)(plVar2 + 1);
        if (uVar4 != 0) {
          *puVar10 = *puVar11;
          if (uVar4 != 1) {
            if (uVar4 == 2) {
              lVar12 = 1;
            }
            else {
              lVar7 = 0;
              do {
                lVar12 = lVar7;
                puVar10[lVar12 + 1] = *(undefined8 *)(*plVar2 + lVar12 * 8 + 8);
                puVar10[lVar12 + 2] = *(undefined8 *)(*plVar2 + lVar12 * 8 + 0x10);
                lVar7 = lVar12 + 2;
              } while (((ulong)uVar4 - 1) - (ulong)(~uVar4 & 1) != lVar12 + 2);
              lVar12 = lVar12 + 3;
              if ((~uVar4 & 1) == 0) goto LAB_004bdf74;
            }
            puVar10[lVar12] = *(undefined8 *)(*plVar2 + lVar12 * 8);
          }
LAB_004bdf74:
          puVar11 = (undefined8 *)*plVar2;
        }
        FUN_00404870(*(undefined4 *)puVar6,puVar11);
      }
      *plVar2 = (long)puVar10;
      *(uint *)((long)plVar2 + 0xc) = uVar13;
    }
    if (uVar3 < uVar13) {
      plVar1 = (long *)(*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 8);
      *(uint *)(plVar2 + 1) = *(uint *)(plVar2 + 1) + 1;
      if (plVar1 != (long *)0x0) {
        *plVar1 = lVar9;
        if ((param_3 & 1) == 0) {
          return lVar9;
        }
        *(undefined4 *)(lVar9 + 0x3c) = 1;
        return lVar9;
      }
    }
  }
LAB_004bdfbc:
  FUN_004bd7a0(lVar9);
  uVar5 = *(undefined4 *)puVar6;
  FUN_004bd790(lVar9);
  FUN_00404870(uVar5,lVar9);
LAB_004bdfdc:
  (*(code *)**(undefined8 **)*param_2)
            (*(undefined4 *)((long)param_2 + 0x14),(undefined8 *)*param_2,param_2[1],1);
  return 0;
}


