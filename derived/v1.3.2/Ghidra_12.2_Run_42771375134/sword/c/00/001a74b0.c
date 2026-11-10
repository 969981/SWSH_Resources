/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001a74b0; name: FUN_001a74b0
 */


void FUN_001a74b0(long param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  
  *(undefined4 *)(param_1 + 0x248) = 1;
  *(long **)(param_1 + 0x240) = param_3;
  lVar1 = param_1 + 0x228;
  (**(code **)(*param_3 + 0x20))(param_3);
  lVar5 = *(long *)(param_1 + 0x60);
  plVar4 = (long *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(*(long *)(param_1 + 0x240) + 0x10);
  uVar3 = *(uint *)(param_2 + 4);
  uVar7 = *(uint *)(lVar5 + 0x48) >> 3;
  lVar6 = 0;
  uVar12 = 0;
  if (uVar7 < 0x81) {
    uVar7 = 0x80;
  }
  do {
    lVar8 = param_1 + lVar6 * 0x38;
    if (lVar6 == 7) {
      uVar7 = 0xffffffff;
    }
    *(undefined4 *)(lVar8 + 0x88) = 0x7e7fffff;
    *(undefined4 *)(lVar8 + 0x8c) = 0x7e7fffff;
    *(undefined4 *)(lVar8 + 0x90) = 0x7e7fffff;
    *(undefined8 *)(lVar8 + 0x94) = 0xfe7ffffffe7fffff;
    *(undefined4 *)(lVar8 + 0x9c) = 0xfe7fffff;
    plVar9 = plVar4;
    if (uVar7 != 0) {
      uVar10 = 0;
      do {
        if ((long *)(param_2 + (ulong)uVar3) == plVar9) break;
        lVar8 = *plVar9;
        plVar9 = (long *)((long)plVar9 + (ulong)*(uint *)(plVar9 + 1) * 0x20 + 0xc);
        uVar10 = *(int *)(*(long *)(lVar8 + 0x38) + 8) + uVar10;
      } while (uVar10 < uVar7);
      if (uVar10 != 0) {
        lVar8 = param_1 + lVar6 * 0x38;
        uVar12 = uVar12 + 1;
        *(long **)(lVar8 + 0x78) = plVar4;
        *(long **)(lVar8 + 0x80) = plVar9;
      }
    }
    plVar4 = plVar9;
    lVar6 = lVar6 + 1;
    if (lVar6 == 8) {
      if (uVar12 != 0) {
        puVar2 = PTR_DAT_02711000 + 0x10;
        uVar7 = 1;
        while( true ) {
          puVar11 = *(undefined8 **)(*(long *)(lVar5 + 8) + 0xb0);
          FUN_003ff570(*puVar11);
                    /* try { // try from 001a75e8 to 001a75fb has its CatchHandler @ 001a7684 */
          plVar4 = (long *)FUN_001a6400(puVar11,0x38,0x10);
                    /* try { // try from 001a7600 to 001a7603 has its CatchHandler @ 001a7680 */
          FUN_003ff5a0(*puVar11);
          plVar4[1] = 0;
          plVar4[2] = 0;
          *(undefined4 *)(plVar4 + 4) = 0;
          *plVar4 = (long)puVar2;
          plVar4[5] = param_1;
          *(uint *)(plVar4 + 6) = uVar7 - 1;
          *(undefined4 *)(plVar4 + 4) = 1;
          plVar4[3] = lVar1;
          (**(code **)(*(long *)(param_1 + 0x228) + 0x20))(lVar1);
          plVar4[2] = *(long *)(plVar4[3] + 0x10);
          (**(code **)(*plVar4 + 0x28))(plVar4);
          if (uVar12 <= uVar7) break;
          lVar5 = *(long *)(param_1 + 0x60);
          uVar7 = uVar7 + 1;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x001a767c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x238) + 0xa0))(*(long **)(param_1 + 0x238),lVar1);
      return;
    }
  } while( true );
}


