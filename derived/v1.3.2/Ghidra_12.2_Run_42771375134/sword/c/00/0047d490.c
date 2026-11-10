/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047d490; name: FUN_0047d490
 */


undefined8 FUN_0047d490(long param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  puVar4 = PTR_DAT_02713240;
  plVar10 = *(long **)(PTR_DAT_02713240 + 0x10);
  if (plVar10 != (long *)0x0) {
    plVar12 = plVar10;
    plVar11 = (long *)0x0;
    do {
      plVar8 = plVar12;
      if (plVar8[2] == param_1) {
        if (param_1 == 0) goto joined_r0x0047d510;
        goto joined_r0x0047d508;
      }
      plVar12 = (long *)plVar8[1];
      plVar11 = plVar8;
    } while ((long *)plVar8[1] != (long *)0x0);
  }
  return 2;
joined_r0x0047d508:
  if (plVar10 == (long *)0x0) goto LAB_0047d56c;
  if (plVar10[2] == param_1) goto LAB_0047d534;
  plVar10 = (long *)plVar10[1];
  goto joined_r0x0047d508;
joined_r0x0047d510:
  if (plVar10 == (long *)0x0) goto LAB_0047d56c;
  uVar6 = (**(code **)(*plVar10 + 0x60))(plVar10);
  if ((uVar6 & 1) != 0) goto LAB_0047d534;
  plVar10 = (long *)plVar10[1];
  goto joined_r0x0047d510;
LAB_0047d534:
  lVar2 = plVar10[6];
  *(undefined4 *)(plVar10 + 6) = 0;
  if ((int)lVar2 != 0) {
    plVar12 = *(long **)(puVar4 + 0x10);
    *(undefined4 *)(PTR_DAT_02713250 + 0x10) = 0;
    for (; plVar12 != (long *)0x0; plVar12 = (long *)plVar12[1]) {
      if (plVar12 != plVar10) {
        FUN_0047d9f0(plVar12 + 4);
      }
    }
  }
LAB_0047d56c:
  if ((((param_2 & 1) != 0) && ((int)plVar8[3] != 0xb5)) &&
     (pcVar9 = *(code **)PTR_DAT_02713210, pcVar9 != (code *)0x0)) {
    uVar7 = FUN_0042eec0();
    (*pcVar9)(uVar7,(int)plVar8[0xb],*(undefined4 *)((long)plVar8 + 0x5c),1,1);
  }
  plVar10 = (long *)(puVar4 + 0x10);
  if (*(long **)(puVar4 + 0x10) != plVar8) {
    plVar10 = plVar11 + 1;
  }
  *plVar10 = plVar8[1];
  if (*(long **)(puVar4 + 8) == plVar8) {
    *(long **)(puVar4 + 8) = plVar11;
  }
  *(int *)puVar4 = *(int *)puVar4 + -1;
  puVar3 = PTR_DAT_02712a90;
  uVar1 = *(undefined4 *)PTR_DAT_02712a90;
  (**(code **)*plVar8)(plVar8);
  FUN_00404870(uVar1,plVar8);
  FUN_004c5bc0(0);
  puVar5 = PTR_DAT_02713248;
  if ((*(long *)PTR_DAT_02713248 != 0) && (*(long *)(puVar4 + 0x10) == 0)) {
    FUN_00404870(*(undefined4 *)puVar3);
    *(undefined8 *)puVar5 = 0;
  }
  return 1;
}


