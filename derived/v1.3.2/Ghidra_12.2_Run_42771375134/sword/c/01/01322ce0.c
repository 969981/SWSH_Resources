/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01322ce0; name: FUN_01322ce0
 */


void FUN_01322ce0(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  
  puVar2 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar6 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar9 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar2 = PTR_DAT_02727f98 + 0x48;
  *param_1 = (long)(PTR_DAT_02727f98 + 0x10);
  param_1[1] = lVar9;
  param_1[9] = (long)puVar2;
  plVar7 = param_1 + 0xb;
  *plVar7 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xe] = lVar9;
  param_1[0xf] = 0;
  if (1 < (ulong)(param_1[0xd] - *plVar7 >> 5)) {
    return;
  }
  lVar9 = param_1[0xc] - *plVar7 >> 5;
  lVar6 = (**(code **)(*(long *)param_1[0xe] + 0x10))((long *)param_1[0xe],0x40,0x10);
  if (lVar6 == 0) {
    (**(code **)(*(long *)param_1[0xe] + 0xb8))();
    puVar10 = (undefined8 *)(lVar9 * 0x20);
    lVar9 = *plVar7;
    lVar13 = param_1[0xc];
    if (lVar13 != lVar9) goto LAB_01322df8;
  }
  else {
    puVar10 = (undefined8 *)(lVar6 + lVar9 * 0x20);
    lVar9 = *plVar7;
    lVar13 = param_1[0xc];
    if (lVar13 != lVar9) {
LAB_01322df8:
      puVar2 = PTR_DAT_02710860;
      puVar11 = puVar10;
      do {
        lVar14 = param_1[0xe];
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar14;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        puVar1 = (undefined8 *)(lVar13 + -0x20);
        uVar4 = *(undefined8 *)(lVar13 + -0x18);
        uVar3 = *(undefined8 *)(lVar13 + -0x10);
        uVar5 = *(undefined8 *)(lVar13 + -8);
        lVar13 = lVar13 + -0x20;
        puVar12 = puVar11 + -4;
        *puVar12 = *puVar1;
        puVar11[-2] = uVar3;
        puVar11[-1] = uVar5;
        puVar11[-3] = uVar4;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        puVar11 = puVar12;
      } while (lVar9 != lVar13);
      lVar9 = *plVar7;
      goto LAB_01322e84;
    }
  }
  puVar12 = puVar10;
LAB_01322e84:
  lVar13 = param_1[0xd];
  param_1[0xd] = lVar6 + 0x40;
  *plVar7 = (long)puVar12;
  param_1[0xc] = (long)puVar10;
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01322ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0xe] + 0x18))((long *)param_1[0xe],lVar9,lVar13 - lVar9,0x10);
  return;
}


