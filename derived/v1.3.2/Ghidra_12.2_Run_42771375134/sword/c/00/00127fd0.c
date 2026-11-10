/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00127fd0; name: FUN_00127fd0
 */


void FUN_00127fd0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (param_2 == 0) {
    puVar4 = (undefined8 *)0x0;
    uVar3 = *(uint *)(param_1 + 2);
  }
  else {
    puVar4 = (undefined8 *)
             (**(code **)(*(long *)*param_1 + 0x10))
                       ((long *)*param_1,(ulong)param_2 << 5,
                        "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar3 = *(uint *)(param_1 + 2);
  }
  if (uVar3 != 0) {
    puVar1 = puVar4 + (ulong)uVar3 * 4;
    puVar2 = puVar1;
    if (puVar1 <= puVar4 + 4) {
      puVar2 = puVar4 + 4;
    }
    puVar5 = (undefined8 *)param_1[1];
    uVar3 = ((uint)((long)puVar2 + ~(ulong)puVar4 >> 5) & 0x7ffffff) + 1;
    puVar8 = puVar4;
    if ((uVar3 & 7) != 0) {
      lVar9 = -((ulong)uVar3 & 7);
      puVar6 = puVar5;
      puVar7 = puVar4;
      do {
        puVar7[3] = puVar6[3];
        puVar7[2] = puVar6[2];
        puVar7[1] = puVar6[1];
        puVar5 = puVar6 + 4;
        lVar9 = lVar9 + 1;
        puVar8 = puVar7 + 4;
        *puVar7 = *puVar6;
        puVar6 = puVar5;
        puVar7 = puVar8;
      } while (lVar9 != 0);
    }
    if (0xdf < (long)puVar2 + ~(ulong)puVar4) {
      do {
        puVar8[3] = puVar5[3];
        puVar8[2] = puVar5[2];
        puVar8[1] = puVar5[1];
        *puVar8 = *puVar5;
        puVar8[7] = puVar5[7];
        puVar8[6] = puVar5[6];
        puVar8[5] = puVar5[5];
        puVar8[4] = puVar5[4];
        puVar8[0xb] = puVar5[0xb];
        puVar8[10] = puVar5[10];
        puVar8[9] = puVar5[9];
        puVar8[8] = puVar5[8];
        puVar8[0xc] = puVar5[0xc];
        puVar8[0xd] = puVar5[0xd];
        puVar8[0xe] = puVar5[0xe];
        puVar8[0xf] = puVar5[0xf];
        puVar8[0x13] = puVar5[0x13];
        puVar8[0x12] = puVar5[0x12];
        puVar8[0x11] = puVar5[0x11];
        puVar8[0x10] = puVar5[0x10];
        puVar8[0x16] = puVar5[0x16];
        puVar8[0x15] = puVar5[0x15];
        puVar8[0x14] = puVar5[0x14];
        puVar8[0x17] = puVar5[0x17];
        puVar8[0x1a] = puVar5[0x1a];
        puVar8[0x19] = puVar5[0x19];
        puVar8[0x18] = puVar5[0x18];
        puVar8[0x1b] = puVar5[0x1b];
        puVar8[0x1f] = puVar5[0x1f];
        puVar8[0x1e] = puVar5[0x1e];
        puVar8[0x1d] = puVar5[0x1d];
        puVar8[0x1c] = puVar5[0x1c];
        puVar8 = puVar8 + 0x20;
        puVar5 = puVar5 + 0x20;
      } while (puVar8 < puVar1);
    }
  }
  if ((-1 < *(int *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*(long *)*param_1 + 0x18))();
  }
  param_1[1] = puVar4;
  *(uint *)((long)param_1 + 0x14) = param_2;
  return;
}


