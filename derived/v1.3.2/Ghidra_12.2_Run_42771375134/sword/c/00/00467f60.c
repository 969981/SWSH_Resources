/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00467f60; name: FUN_00467f60
 */


void FUN_00467f60(void)

{
  bool bVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  
  puVar4 = PTR_DAT_02713110;
  *(undefined8 *)PTR_DAT_02713110 = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar5 = PTR_DAT_02713108;
  puVar4 = PTR_DAT_02712e28;
  puVar6 = *(undefined8 **)PTR_DAT_02713108;
  puVar2 = (undefined4 *)PTR_DAT_02712e28;
  do {
    PTR_DAT_02712e28 = (undefined *)puVar2;
    if (puVar6 == (undefined8 *)0x0) {
      puVar3 = (ulong *)*(ulong *)(puVar5 + 0x10);
      while (puVar3 != (ulong *)0x0) {
        puVar8 = (ulong *)*puVar3;
        if ((puVar3 < *(ulong *)(puVar5 + 0x18)) ||
           (bVar1 = *(ulong *)(puVar5 + 0x18) + (ulong)*(uint *)(puVar5 + 0x20) * 0x18 <= puVar3,
           puVar3 = puVar8, bVar1)) {
          FUN_00404870(*puVar2);
          puVar3 = puVar8;
        }
      }
      if (*(long *)(puVar5 + 0x18) != 0) {
        FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
        *(undefined8 *)(puVar5 + 0x18) = 0;
      }
      *(undefined4 *)(puVar5 + 0x20) = 0;
      *(undefined8 *)puVar5 = 0;
      *(undefined8 *)(puVar5 + 8) = 0;
      *(undefined8 *)(puVar5 + 0x10) = 0;
      return;
    }
    *(undefined8 *)puVar5 = *puVar6;
    if (*(undefined8 **)(puVar5 + 8) == puVar6) {
      *(undefined8 *)(puVar5 + 8) = 0;
      puVar7 = *(undefined8 **)(puVar5 + 0x18);
      if (puVar7 <= puVar6) goto LAB_00467fc8;
LAB_00467ff8:
      FUN_00404870(*(undefined4 *)puVar4);
    }
    else {
      puVar7 = *(undefined8 **)(puVar5 + 0x18);
      if (puVar6 < puVar7) goto LAB_00467ff8;
LAB_00467fc8:
      if (puVar7 + (ulong)*(uint *)(puVar5 + 0x20) * 3 <= puVar6) goto LAB_00467ff8;
      *puVar6 = *(undefined8 *)(puVar5 + 0x10);
      *(undefined8 **)(puVar5 + 0x10) = puVar6;
    }
    puVar6 = *(undefined8 **)puVar5;
    *(int *)(puVar5 + 0x24) = *(int *)(puVar5 + 0x24) + -1;
    puVar2 = (undefined4 *)PTR_DAT_02712e28;
  } while( true );
}


