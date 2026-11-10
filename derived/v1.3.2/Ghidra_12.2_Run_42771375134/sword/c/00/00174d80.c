/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00174d80; name: FUN_00174d80
 */


void FUN_00174d80(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  if ((*(uint *)((long)*(long **)(param_1 + 0x30) + 0xc) & 0x7fffffff) != 0) {
    lVar13 = **(long **)(param_1 + 0x30);
    lVar14 = *(long *)(lVar13 + 0x2dd8);
    iVar9 = 0;
    iVar10 = 0;
    lVar11 = 0;
    uVar12 = 0;
    do {
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x2e8);
      FUN_003ff570(*puVar8);
                    /* try { // try from 00174ddc to 00174def has its CatchHandler @ 00174ed0 */
      plVar2 = (long *)FUN_001a6400(puVar8,0x58,0x10);
                    /* try { // try from 00174df4 to 00174df7 has its CatchHandler @ 00174ecc */
      FUN_003ff5a0(*puVar8);
      lVar1 = *(long *)(param_1 + 0x28);
      lVar5 = *(long *)(param_1 + 0x40);
      uVar6 = *(uint *)(*(long *)(param_1 + 0x30) + 0xc);
      lVar7 = *(long *)(lVar1 + 0x300);
      plVar2[2] = 0;
      plVar2[3] = 0;
      *(undefined4 *)(plVar2 + 4) = 0;
      puVar4 = PTR_DAT_02710f08;
      plVar2[7] = lVar14;
      plVar2[9] = lVar1;
      *(int *)(plVar2 + 10) = iVar10;
      puVar4 = puVar4 + 0x10;
      uVar6 = iVar9 + (uVar6 & 0x7fffffff);
      *plVar2 = (long)puVar4;
      plVar2[1] = lVar7;
      plVar2[5] = lVar13;
      plVar2[6] = lVar5 + lVar11;
      if (7 < uVar6) {
        uVar6 = 8;
      }
      *(uint *)(plVar2 + 8) = uVar6;
      plVar3 = *(long **)(param_1 + 0x18);
      *(undefined4 *)(plVar2 + 4) = 1;
      plVar2[3] = (long)plVar3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
        plVar2[2] = *(long *)(plVar2[3] + 0x10);
        puVar4 = (undefined *)*plVar2;
      }
      (**(code **)(puVar4 + 0x28))(plVar2);
      uVar12 = uVar12 + 8;
      lVar11 = lVar11 + 0x40;
      lVar14 = lVar14 + 0x280;
      iVar10 = iVar10 + 0x200;
      iVar9 = iVar9 + -8;
    } while (uVar12 < ((ulong)*(uint *)(*(long *)(param_1 + 0x30) + 0xc) & 0x7fffffff));
  }
  return;
}


