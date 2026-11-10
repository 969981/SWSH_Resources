/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00159450; name: FUN_00159450
 */


void FUN_00159450(ulong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  uVar6 = 0;
  if (param_2 <= param_3) {
    uVar6 = (uint)((ulong)((long)param_3 - (long)param_2) >> 4);
  }
  *(uint *)(param_1 + 1) = uVar6;
  *(uint *)((long)param_1 + 0xc) = uVar6;
  if (uVar6 == 0) {
    *param_1 = 0;
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    puVar4 = (undefined8 *)
             (**(code **)(*plVar3 + 0x10))
                       (plVar3,(ulong)uVar6 << 4,"NonTrackedAlloc",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    *param_1 = (ulong)puVar4;
    if ((uint)param_1[1] != 0) {
      puVar1 = puVar4 + (ulong)(uint)param_1[1] * 2;
      puVar2 = puVar1;
      if (puVar1 <= puVar4 + 2) {
        puVar2 = puVar4 + 2;
      }
      uVar7 = ~(ulong)puVar4;
      uVar6 = ((uint)((long)puVar2 + uVar7 >> 4) & 0xfffffff) + 1;
      if ((uVar6 & 7) != 0) {
        lVar8 = -((ulong)uVar6 & 7);
        puVar5 = puVar4;
        puVar9 = param_2;
        do {
          puVar5[1] = puVar9[1];
          lVar8 = lVar8 + 1;
          param_2 = puVar9 + 2;
          puVar4 = puVar5 + 2;
          *puVar5 = *puVar9;
          puVar5 = puVar4;
          puVar9 = param_2;
        } while (lVar8 != 0);
      }
      if (0x6f < (long)puVar2 + uVar7) {
        do {
          puVar4[1] = param_2[1];
          *puVar4 = *param_2;
          puVar4[3] = param_2[3];
          puVar4[2] = param_2[2];
          puVar4[5] = param_2[5];
          puVar4[4] = param_2[4];
          puVar4[7] = param_2[7];
          puVar4[6] = param_2[6];
          puVar4[9] = param_2[9];
          puVar4[8] = param_2[8];
          puVar4[0xb] = param_2[0xb];
          puVar4[10] = param_2[10];
          puVar4[0xc] = param_2[0xc];
          puVar4[0xd] = param_2[0xd];
          puVar4[0xe] = param_2[0xe];
          puVar4[0xf] = param_2[0xf];
          puVar4 = puVar4 + 0x10;
          param_2 = param_2 + 0x10;
        } while (puVar4 < puVar1);
      }
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


