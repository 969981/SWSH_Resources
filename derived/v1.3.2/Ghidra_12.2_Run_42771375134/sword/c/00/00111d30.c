/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00111d30; name: FUN_00111d30
 */


void FUN_00111d30(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  
  if ((param_2 < (ulong)param_1[3]) || (param_1[3] + (ulong)*(uint *)(param_1 + 4) <= param_2)) {
    if (param_2 != 0) {
      plVar5 = (long *)FUN_00400d30();
                    /* WARNING: Could not recover jumptable at 0x00111e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
      return;
    }
  }
  else {
    FUN_003ff570(*param_1);
    uVar4 = *(uint *)(param_1 + 2);
    lVar8 = param_1[1];
    iVar6 = 0;
    do {
      uVar1 = (uVar4 - 1) + iVar6;
      iVar6 = iVar6 + -1;
    } while (*(ulong *)(lVar8 + (ulong)uVar1 * 8) < param_2);
    uVar2 = uVar4 + iVar6;
    uVar1 = uVar2 + 1;
    if (uVar1 < uVar4) {
      puVar7 = (undefined8 *)(lVar8 + (ulong)uVar2 * 8);
      uVar10 = uVar2 + 2;
      *puVar7 = *(undefined8 *)(lVar8 + (ulong)uVar1 * 8);
      if (uVar10 < uVar4) {
        uVar9 = (ulong)uVar1;
        if ((-iVar6 & 1U) != 0) {
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *(undefined8 *)(param_1[1] + uVar9 * 8);
          uVar10 = uVar2 + 3;
        }
        if (iVar6 != -3) {
          iVar6 = uVar4 - uVar10;
          lVar8 = uVar9 << 3;
          do {
            puVar7[1] = *(undefined8 *)(param_1[1] + lVar8 + 8);
            lVar3 = param_1[1] + lVar8;
            lVar8 = lVar8 + 0x10;
            iVar6 = iVar6 + -2;
            puVar7[2] = *(undefined8 *)(lVar3 + 0x10);
            puVar7 = puVar7 + 2;
          } while (iVar6 != 0);
        }
      }
    }
    *(uint *)(param_1 + 2) = uVar4 - 1;
                    /* try { // try from 00111e1c to 00111e1f has its CatchHandler @ 00111e50 */
    FUN_003ff5a0(*param_1);
  }
  return;
}


