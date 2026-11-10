/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cf8a0; name: FUN_003cf8a0
 */


void FUN_003cf8a0(long *param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  
  lVar9 = *param_1;
  uVar10 = *(uint *)(lVar9 + 0x6c);
  if (uVar10 != 0) {
    uVar12 = (ulong)(uVar10 * 8);
    lVar11 = *(long *)(lVar9 + 0x48);
    lVar5 = FUN_003c3120(*(undefined8 *)(lVar9 + 0x720),uVar10 * 8 + (uVar10 >> 6) * 0x58 + 0x58,1);
    if (lVar5 == 0) {
      plVar6 = (long *)FUN_00400880();
      plVar6 = (long *)(**(code **)(*plVar6 + 8))();
                    /* WARNING: Could not recover jumptable at 0x003cfa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))
                (plVar6,0x10,
                 "Temporary memory for trigger pair processing could not be allocated. Trigger overlap tests will not take place."
                 ,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScNPhaseCore.cpp"
                 ,0x717);
      return;
    }
    plVar6 = (long *)(**(code **)(**(long **)(lVar9 + 0x1ed0) + 0x10))();
    uVar4 = (**(code **)(*plVar6 + 8))();
    bVar1 = 0x40 < uVar10;
    param_1[0x2a1] = lVar5;
    if (bVar1 && 1 < uVar4) {
      *(undefined4 *)(param_1 + 0x29e) = 1;
      param_1[0x29d] = (long)param_2;
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x20))(param_2);
        param_1[0x29c] = *(long *)(param_1[0x29d] + 0x10);
      }
      plVar6 = param_1 + 0x29a;
      puVar2 = PTR_DAT_027127a0 + 0x10;
      do {
        plVar3 = (long *)(lVar5 + uVar12);
        plVar3[1] = *(long *)(lVar9 + 0x18);
        plVar3[2] = 0;
        *(undefined4 *)(plVar3 + 4) = 0;
        uVar8 = uVar10;
        if (0x3f < uVar10) {
          uVar8 = 0x40;
        }
        *plVar3 = (long)puVar2;
        plVar3[5] = lVar11;
        *(uint *)(plVar3 + 6) = uVar8;
        plVar3[7] = (long)(param_1 + 0x2a2);
        plVar3[8] = lVar5;
        plVar3[9] = (long)(param_1 + 0x2a3);
        plVar3[10] = lVar9;
        *(undefined4 *)(plVar3 + 4) = 1;
        uVar10 = uVar10 - uVar8;
        plVar3[3] = (long)plVar6;
        (**(code **)(*plVar6 + 0x20))(plVar6);
        plVar3[2] = *(long *)(plVar3[3] + 0x10);
        (**(code **)(*plVar3 + 0x28))(plVar3);
        lVar11 = lVar11 + (ulong)uVar8 * 8;
        uVar12 = uVar12 + 0x58;
      } while (uVar10 != 0);
    }
    else {
      puVar2 = PTR_DAT_027127a0 + 0x10;
      do {
        lVar7 = *(long *)(lVar9 + 0x18);
        plVar6 = (long *)(lVar5 + uVar12);
        uVar8 = uVar10;
        if (0x3f < uVar10) {
          uVar8 = 0x40;
        }
        plVar6[2] = 0;
        plVar6[3] = 0;
        *(undefined4 *)(plVar6 + 4) = 0;
        uVar10 = uVar10 - uVar8;
        plVar6[5] = lVar11;
        plVar6[7] = (long)(param_1 + 0x2a2);
        plVar6[8] = lVar5;
        *(uint *)(plVar6 + 6) = uVar8;
        *plVar6 = (long)puVar2;
        plVar6[1] = lVar7;
        plVar6[9] = (long)(param_1 + 0x2a3);
        plVar6[10] = lVar9;
        FUN_003d6190();
        lVar11 = lVar11 + (ulong)uVar8 * 8;
        uVar12 = uVar12 + 0x58;
      } while (uVar10 != 0);
    }
    if (bVar1 && 1 < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x003cfb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[0x29c] + 0xa0))((long *)param_1[0x29c],param_1 + 0x29a);
      return;
    }
    plVar6 = (long *)param_1[0x29f];
    lVar9 = plVar6[0x2a1];
    if (lVar9 != 0) {
      if (0 < (int)plVar6[0x2a3]) {
        lVar11 = 0;
        do {
          FUN_003ddb00(*plVar6,*(undefined8 *)(lVar9 + lVar11 * 8));
          lVar11 = lVar11 + 1;
        } while (lVar11 < (int)plVar6[0x2a3]);
        lVar9 = plVar6[0x2a1];
      }
      *(undefined4 *)(plVar6 + 0x2a3) = 0;
      FUN_00111d30(*(undefined8 *)(*plVar6 + 0x720),lVar9);
      plVar6[0x2a1] = 0;
    }
  }
  return;
}


