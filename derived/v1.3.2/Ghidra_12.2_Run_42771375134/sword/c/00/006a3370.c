/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a3370; name: FUN_006a3370
 */


void FUN_006a3370(undefined8 param_1,undefined8 param_2,ulong *param_3,int *param_4)

{
  uint *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ushort *puVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 local_40 [16];
  
  auVar3._8_8_ = local_40._8_8_;
  auVar3._0_8_ = local_40._0_8_;
  auVar6._8_8_ = local_40._8_8_;
  auVar6._0_8_ = local_40._0_8_;
  *param_3 = *param_3 & 0xfffffffffffffff8;
  puVar4 = (ushort *)((long)param_4 - (long)*param_4);
  if (6 < *puVar4) {
    uVar5 = 0;
    if ((ulong)puVar4[3] != 0) {
      uVar5 = (ulong)*(byte *)((long)param_4 + (ulong)puVar4[3]);
    }
    if (((8 < *puVar4) && (local_40 = auVar6, (ulong)puVar4[4] != 0)) &&
       (puVar1 = (uint *)((long)param_4 + (ulong)puVar4[4]), lVar2 = (long)puVar1 + (ulong)*puVar1,
       local_40 = auVar3, lVar2 != 0)) {
      local_40 = (**(code **)(PTR_PTR_02715058 + uVar5 * 8))(param_1,lVar2);
      FUN_0075e300(param_2,local_40);
      *param_3 = *param_3 | 1;
      puVar4 = (ushort *)((long)param_4 - (long)*param_4);
    }
    if (10 < *puVar4) {
      uVar5 = 0;
      if ((ulong)puVar4[5] != 0) {
        uVar5 = (ulong)*(byte *)((long)param_4 + (ulong)puVar4[5]);
      }
      if (((0xc < *puVar4) && ((ulong)puVar4[6] != 0)) &&
         (puVar1 = (uint *)((long)param_4 + (ulong)puVar4[6]), lVar2 = (long)puVar1 + (ulong)*puVar1
         , lVar2 != 0)) {
        auVar6 = (**(code **)(PTR_PTR_02715050 + uVar5 * 8))(param_1,lVar2);
        local_40 = auVar6;
        FUN_0075e320(param_2,local_40);
        *param_3 = *param_3 | 2;
        puVar4 = (ushort *)((long)param_4 - (long)*param_4);
      }
      if (0xe < *puVar4) {
        uVar5 = 0;
        if ((ulong)puVar4[7] != 0) {
          uVar5 = (ulong)*(byte *)((long)param_4 + (ulong)puVar4[7]);
        }
        if (((0x10 < *puVar4) && ((ulong)puVar4[8] != 0)) &&
           (puVar1 = (uint *)((long)param_4 + (ulong)puVar4[8]),
           lVar2 = (long)puVar1 + (ulong)*puVar1, lVar2 != 0)) {
          auVar6 = (**(code **)(PTR_PTR_02715058 + uVar5 * 8))(param_1,lVar2);
          local_40 = auVar6;
          FUN_0075e340(param_2,local_40);
          *param_3 = *param_3 | 4;
        }
      }
    }
  }
  return;
}


