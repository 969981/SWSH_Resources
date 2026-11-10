/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e4820; name: FUN_003e4820
 */


void FUN_003e4820(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  
  lVar7 = *(long *)(param_1 + 0x748);
  iVar9 = *(int *)(lVar7 + 0x130);
  if (iVar9 != 0) {
    puVar10 = *(uint **)(lVar7 + 0x128);
    lVar2 = FUN_003c3120(*(undefined8 *)(param_1 + 0x720),iVar9 << 3,1);
    *(long *)(param_1 + 0x1ee0) = lVar2;
    if (lVar2 == 0) {
      plVar3 = (long *)FUN_00400880();
      plVar3 = (long *)(**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x003e4bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))
                (plVar3,0x10,
                 "List for collecting constraint projection roots could not be allocated. No projection will take place."
                 ,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                 ,0xe17);
      return;
    }
    uVar11 = 0;
    do {
      iVar9 = iVar9 + -1;
      if (*(long *)(*(long *)(*(long *)(lVar7 + 200) + (ulong)(*puVar10 >> 6) * 0x20 + 0x18) + 0x68)
          != 0) {
        lVar2 = FUN_003c1610();
        bVar1 = *(byte *)(lVar2 + 0x58);
        if (((bVar1 >> 1 & 1) == 0) && (*(long *)(lVar2 + 0x28) != 0)) {
          *(long *)(*(long *)(param_1 + 0x1ee0) + uVar11 * 8) = lVar2;
          uVar11 = (ulong)((int)uVar11 + 1);
          *(byte *)(lVar2 + 0x58) = bVar1 | 2;
        }
      }
      puVar10 = puVar10 + 1;
    } while (iVar9 != 0);
    if ((int)uVar11 != 0) {
      uVar14 = 0;
      uVar12 = 0;
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x720) + 0x7b0);
      uVar4 = 0;
      puVar5 = PTR_DAT_02712970 + 0x10;
      if (param_2 == (long *)0x0) {
        do {
          while( true ) {
            bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x1ee0) + uVar14 * 8) + 0x58);
            if ((bVar1 >> 6 & 1) != 0) break;
            uVar13 = 0x28;
            if (((bVar1 >> 5 & 1) == 0) && (uVar13 = 10, (bVar1 >> 4 & 1) == 0)) {
              uVar13 = bVar1 >> 2 & 2;
            }
            uVar4 = uVar13 + uVar4;
            if (uVar4 < 0x100) goto LAB_003e4aa4;
LAB_003e4a18:
            FUN_003ff570(*puVar8);
                    /* try { // try from 003e4a20 to 003e4a33 has its CatchHandler @ 003e4bec */
            plVar3 = (long *)FUN_001a6400(puVar8,0x48,0x10);
                    /* try { // try from 003e4a38 to 003e4a3b has its CatchHandler @ 003e4be8 */
            FUN_003ff5a0(*puVar8);
            lVar7 = *(long *)(param_1 + 0x720);
            lVar2 = *(long *)(param_1 + 0x1ee0);
            uVar14 = uVar14 + 1;
            plVar3[1] = *(long *)(lVar7 + 0xa60);
            plVar3[2] = 0;
            *(undefined4 *)(plVar3 + 4) = 0;
            plVar3[7] = param_1 + 0x838;
            plVar3[8] = lVar7;
            *(uint *)(plVar3 + 6) = (uint)uVar14 - (uint)uVar12;
            plVar3[5] = lVar2 + uVar12 * 8;
            *plVar3 = (long)puVar5;
            *(undefined4 *)(plVar3 + 4) = 1;
            plVar3[3] = 0;
            FUN_00192470(plVar3);
            uVar4 = 0;
            uVar12 = uVar14 & 0xffffffff;
            uVar13 = (uint)uVar14;
            if (uVar11 <= uVar14) goto LAB_003e4ab0;
          }
          uVar4 = uVar4 + 0x80;
          if (0xff < uVar4) goto LAB_003e4a18;
LAB_003e4aa4:
          uVar14 = uVar14 + 1;
          uVar13 = (uint)uVar12;
        } while (uVar14 < uVar11);
      }
      else {
        do {
          while( true ) {
            bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x1ee0) + uVar14 * 8) + 0x58);
            if ((bVar1 >> 6 & 1) != 0) break;
            uVar13 = 0x28;
            if (((bVar1 >> 5 & 1) == 0) && (uVar13 = 10, (bVar1 >> 4 & 1) == 0)) {
              uVar13 = bVar1 >> 2 & 2;
            }
            uVar4 = uVar13 + uVar4;
            if (uVar4 < 0x100) goto LAB_003e49d4;
LAB_003e4924:
            FUN_003ff570(*puVar8);
                    /* try { // try from 003e492c to 003e493f has its CatchHandler @ 003e4bf4 */
            plVar3 = (long *)FUN_001a6400(puVar8,0x48,0x10);
                    /* try { // try from 003e4944 to 003e4947 has its CatchHandler @ 003e4bf0 */
            FUN_003ff5a0(*puVar8);
            lVar2 = *(long *)(param_1 + 0x720);
            lVar7 = *(long *)(param_1 + 0x1ee0);
            uVar14 = uVar14 + 1;
            uVar13 = (uint)uVar14;
            plVar3[1] = *(long *)(lVar2 + 0xa60);
            plVar3[2] = 0;
            *(undefined4 *)(plVar3 + 4) = 0;
            plVar3[5] = lVar7 + uVar12 * 8;
            *plVar3 = (long)puVar5;
            *(uint *)(plVar3 + 6) = uVar13 - (uint)uVar12;
            plVar3[7] = param_1 + 0x838;
            plVar3[8] = lVar2;
            *(undefined4 *)(plVar3 + 4) = 1;
            plVar3[3] = (long)param_2;
            (**(code **)(*param_2 + 0x20))(param_2);
            plVar3[2] = *(long *)(plVar3[3] + 0x10);
            (**(code **)(*plVar3 + 0x28))(plVar3);
            uVar4 = 0;
            uVar12 = uVar14 & 0xffffffff;
            if (uVar11 <= uVar14) goto LAB_003e4ab0;
          }
          uVar4 = uVar4 + 0x80;
          if (0xff < uVar4) goto LAB_003e4924;
LAB_003e49d4:
          uVar14 = uVar14 + 1;
          uVar13 = (uint)uVar12;
        } while (uVar14 < uVar11);
      }
LAB_003e4ab0:
      if (uVar4 != 0) {
        FUN_003ff570(*puVar8);
                    /* try { // try from 003e4abc to 003e4acf has its CatchHandler @ 003e4bd4 */
        plVar3 = (long *)FUN_001a6400(puVar8,0x48,0x10);
                    /* try { // try from 003e4ad4 to 003e4ad7 has its CatchHandler @ 003e4bd0 */
        FUN_003ff5a0(*puVar8);
        lVar7 = *(long *)(param_1 + 0x720);
        lVar2 = *(long *)(param_1 + 0x1ee0);
        lVar6 = *(long *)(lVar7 + 0xa60);
        plVar3[2] = 0;
        *(undefined4 *)(plVar3 + 4) = 0;
        *(uint *)(plVar3 + 6) = (int)uVar11 - uVar13;
        puVar5 = PTR_DAT_02712970;
        plVar3[5] = lVar2 + (ulong)uVar13 * 8;
        plVar3[7] = param_1 + 0x838;
        plVar3[8] = lVar7;
        puVar5 = puVar5 + 0x10;
        *plVar3 = (long)puVar5;
        plVar3[1] = lVar6;
        *(undefined4 *)(plVar3 + 4) = 1;
        plVar3[3] = (long)param_2;
        if (param_2 != (long *)0x0) {
          (**(code **)(*param_2 + 0x20))(param_2);
          plVar3[2] = *(long *)(plVar3[3] + 0x10);
          puVar5 = (undefined *)*plVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x003e4b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(puVar5 + 0x28))(plVar3);
        return;
      }
    }
  }
  return;
}


