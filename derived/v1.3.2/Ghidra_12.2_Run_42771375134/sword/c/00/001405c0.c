/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001405c0; name: FUN_001405c0
 */


void FUN_001405c0(undefined8 param_1,uint *param_2,uint param_3,undefined8 param_4,
                 undefined8 *param_5,uint *param_6,uint *param_7,undefined8 *param_8,uint *param_9,
                 uint *param_10,uint *param_11,long param_12)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  
  if (param_3 == 0) {
    *param_11 = *param_9;
  }
  else {
    uVar12 = (ulong)param_3;
    uVar10 = uVar12;
    puVar11 = param_2;
    do {
      while( true ) {
        uVar8 = (ulong)*puVar11;
        puVar1 = (uint *)(*(long *)(param_12 + 0x20) + uVar8 * 8);
        bVar4 = *(byte *)(*(long *)(param_12 + 0x28) + uVar8);
        if ((bVar4 >> 1 & 1) != 0) break;
        *(byte *)(*(long *)(param_12 + 0x28) + uVar8) = bVar4 & 0xfe;
        if ((*(byte *)(*(long *)(param_12 + 0x28) + ((long)puVar1 - *(long *)(param_12 + 0x20) >> 3)
                      ) >> 2 & 1) != 0) {
          uVar6 = *param_6;
          if (uVar6 == *param_7) {
            pvVar5 = (void *)FUN_003c3120(param_4,uVar6 << 4,1);
            memcpy(pvVar5,(void *)*param_5,(ulong)(*param_7 << 3));
            FUN_00111d30(param_4,*param_5);
            *param_5 = pvVar5;
            *param_7 = *param_7 << 1;
            uVar6 = *param_6;
          }
          else {
            pvVar5 = (void *)*param_5;
          }
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          uVar7 = uVar3;
          if (uVar3 <= uVar2) {
            uVar7 = uVar2;
            uVar2 = uVar3;
          }
          *param_6 = uVar6 + 1;
          *(ulong *)((long)pvVar5 + (ulong)uVar6 * 8) = CONCAT44(uVar7,uVar2);
          lVar9 = (long)puVar1 - *(long *)(param_12 + 0x20) >> 3;
          *(byte *)(*(long *)(param_12 + 0x28) + lVar9) =
               *(byte *)(*(long *)(param_12 + 0x28) + lVar9) & 0xfb;
        }
LAB_00140770:
        puVar11 = puVar11 + 1;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_001407b0;
      }
      if ((bVar4 >> 2 & 1) != 0) goto LAB_00140770;
      uVar6 = *param_9;
      if (uVar6 == *param_10) {
        pvVar5 = (void *)FUN_003c3120(param_4,uVar6 << 4,1);
        memcpy(pvVar5,(void *)*param_8,(ulong)(*param_10 << 3));
        FUN_00111d30(param_4,*param_8);
        *param_8 = pvVar5;
        *param_10 = *param_10 << 1;
        uVar6 = *param_9;
      }
      else {
        pvVar5 = (void *)*param_8;
      }
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      uVar7 = uVar3;
      if (uVar3 <= uVar2) {
        uVar7 = uVar2;
        uVar2 = uVar3;
      }
      *param_9 = uVar6 + 1;
      *(ulong *)((long)pvVar5 + (ulong)uVar6 * 8) = CONCAT44(uVar7,uVar2);
      puVar11 = puVar11 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
LAB_001407b0:
    *param_11 = *param_9;
    if (param_3 != 0) {
      do {
        uVar6 = *param_2;
        if ((~*(byte *)(*(long *)(param_12 + 0x28) + (ulong)uVar6) & 6) == 0) {
          uVar7 = *param_11;
          lVar9 = *(long *)(param_12 + 0x20);
          if (uVar7 == *param_10) {
            pvVar5 = (void *)FUN_003c3120(param_4,uVar7 << 4,1);
            memcpy(pvVar5,(void *)*param_8,(ulong)(*param_10 << 3));
            FUN_00111d30(param_4,*param_8);
            *param_8 = pvVar5;
            *param_10 = *param_10 << 1;
            uVar7 = *param_11;
          }
          else {
            pvVar5 = (void *)*param_8;
          }
          puVar11 = (uint *)(lVar9 + (ulong)uVar6 * 8);
          uVar2 = *puVar11;
          uVar3 = puVar11[1];
          uVar6 = uVar3;
          if (uVar3 <= uVar2) {
            uVar6 = uVar2;
            uVar2 = uVar3;
          }
          *param_11 = uVar7 + 1;
          *(ulong *)((long)pvVar5 + (ulong)uVar7 * 8) = CONCAT44(uVar6,uVar2);
        }
        param_2 = param_2 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  return;
}


