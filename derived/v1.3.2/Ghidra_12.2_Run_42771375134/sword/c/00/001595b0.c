/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001595b0; name: FUN_001595b0
 */


void FUN_001595b0(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  uint local_64;
  long local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 1) != 0) {
    local_50 = CONCAT44(local_50._4_4_,0xffffffff);
    local_60 = 0;
    uStack_58 = 0;
    FUN_00155ba0(&local_60,param_2,&local_50);
    local_64 = 0;
    if (*(uint *)(param_1 + 1) != 0) {
      puVar11 = (uint *)*param_1;
      puVar2 = puVar11 + (ulong)*(uint *)(param_1 + 1) * 4;
      uVar6 = 0;
      iVar10 = 0;
      do {
        while( true ) {
          uVar7 = (uint)((ulong)((long)puVar2 - (long)puVar11) >> 4);
          uVar3 = param_3;
          if (uVar7 <= param_3) {
            uVar3 = uVar7;
          }
          puVar8 = puVar2;
          if (uVar3 == 0 || puVar11 == puVar2) {
          }
          else {
            puVar1 = puVar11 + (ulong)uVar3 * 4;
            do {
              while( true ) {
                puVar9 = puVar8 + -4;
                if (((*(int *)(local_60 + (ulong)*puVar11 * 4) != iVar10) &&
                    (*(int *)(local_60 + (ulong)puVar11[1] * 4) != iVar10)) &&
                   (*(int *)(local_60 + (ulong)puVar11[2] * 4) != iVar10)) break;
                if (puVar11 == puVar9) goto LAB_00159718;
                local_48 = *(undefined8 *)(puVar11 + 2);
                local_50 = *(undefined8 *)puVar11;
                *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(puVar8 + -2);
                *(undefined8 *)puVar11 = *(undefined8 *)puVar9;
                *(undefined8 *)(puVar8 + -2) = local_48;
                *(undefined8 *)puVar9 = local_50;
                puVar8 = puVar9;
              }
              if (puVar11 == puVar8) goto LAB_00159718;
              *(int *)(local_60 + (ulong)*puVar11 * 4) = iVar10;
              *(int *)(local_60 + (ulong)puVar11[1] * 4) = iVar10;
              *(int *)(local_60 + (ulong)puVar11[2] * 4) = iVar10;
              puVar11 = puVar11 + 4;
              local_64 = local_64 + 1;
              uVar6 = local_64;
            } while ((puVar11 != puVar1) && (puVar11 != puVar8));
          }
          if (puVar11 == puVar8) break;
          iVar10 = iVar10 + 1;
          if (puVar11 == puVar2) goto LAB_00159780;
        }
LAB_00159718:
        if (param_3 < uVar6) {
          local_64 = 0;
          if (param_3 != 0) {
            local_64 = uVar6 / param_3;
          }
          local_64 = local_64 * param_3;
          puVar11 = puVar11 + (ulong)(uVar6 - local_64) * -4;
          uVar6 = local_64;
        }
        if (*(uint *)(param_1 + 3) < (*(uint *)((long)param_1 + 0x1c) & 0x7fffffff)) {
          *(uint *)(param_1[2] + (ulong)*(uint *)(param_1 + 3) * 4) = uVar6;
          *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
        }
        else {
                    /* try { // try from 00159760 to 0015976b has its CatchHandler @ 001597c8 */
          FUN_00143c60(param_1 + 2,&local_64);
        }
        uVar6 = 0;
        local_64 = 0;
        iVar10 = iVar10 + 1;
      } while (puVar11 != puVar2);
    }
LAB_00159780:
    lVar4 = local_60;
    if (((-1 < (long)uStack_58) && ((uStack_58 & 0x7fffffff00000000) != 0)) && (local_60 != 0)) {
                    /* try { // try from 00159798 to 001597ab has its CatchHandler @ 001597c4 */
      plVar5 = (long *)FUN_00400d30();
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar4);
    }
  }
  return;
}


