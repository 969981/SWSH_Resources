/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007340f0; name: FUN_007340f0
 */


void FUN_007340f0(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar5 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar2 = PTR_DAT_02715c68;
  *param_1 = (long)(PTR_DAT_02715c68 + 0x10);
  param_1[1] = lVar5;
  param_1[9] = (long)(puVar2 + 0x50);
  FUN_0199e500(param_1 + 0xb);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x15] = -1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0x1a] = lVar3;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0x20] = lVar3;
  param_1[0x21] = 0;
  plVar6 = param_1 + 0x17;
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_2 <= (ulong)(param_1[0x19] - *plVar6 >> 4)) {
    return;
  }
  lVar3 = param_1[0x18] - *plVar6 >> 4;
  lVar5 = (**(code **)(*(long *)param_1[0x1a] + 0x10))((long *)param_1[0x1a],param_2 << 4,8);
  if (lVar5 == 0) {
    (**(code **)(*(long *)param_1[0x1a] + 0xb8))();
    plVar7 = (long *)*plVar6;
    plVar9 = (long *)param_1[0x18];
    lVar3 = lVar3 * 0x10;
    lVar8 = lVar3;
    if (plVar9 != plVar7) goto LAB_0073428c;
  }
  else {
    plVar7 = (long *)*plVar6;
    plVar9 = (long *)param_1[0x18];
    lVar3 = lVar5 + lVar3 * 0x10;
    lVar8 = lVar3;
    if (plVar9 != plVar7) {
LAB_0073428c:
      puVar1 = PTR_DAT_02710860;
      lVar3 = 0;
      do {
        lVar10 = param_1[0x1a];
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        lVar10 = *(long *)((long)plVar9 + lVar3 + -0x10);
        *(long *)(lVar8 + lVar3 + -0x10) = lVar10;
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
        }
        *(undefined8 *)(lVar8 + lVar3 + -8) = *(undefined8 *)((long)plVar9 + lVar3 + -8);
        lVar3 = lVar3 + -0x10;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      } while ((long)plVar7 - (long)plVar9 != lVar3);
      plVar7 = (long *)*plVar6;
      lVar3 = lVar8 + lVar3;
      plVar9 = (long *)param_1[0x18];
      goto LAB_00734344;
    }
  }
  lVar8 = lVar3;
  plVar9 = plVar7;
LAB_00734344:
  lVar4 = param_1[0x19];
  *plVar6 = lVar3;
  param_1[0x18] = lVar8;
  param_1[0x19] = lVar5 + param_2 * 0x10;
  if (plVar9 != plVar7) {
    do {
      plVar6 = plVar9 + -2;
      if (*plVar6 != 0) {
        (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
        plVar9[-2] = 0;
      }
      plVar9 = plVar6;
    } while (plVar7 != plVar6);
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007343bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x1a] + 0x18))((long *)param_1[0x1a],plVar7,lVar4 - (long)plVar7,8);
  return;
}


