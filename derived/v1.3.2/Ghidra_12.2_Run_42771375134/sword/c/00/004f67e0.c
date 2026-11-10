/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f67e0; name: FUN_004f67e0
 */


undefined8 FUN_004f67e0(long *param_1,long *param_2,float *param_3,uint param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  *(uint *)(param_1 + 0x32) = param_4;
  fVar6 = *param_3;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8);
  *param_1 = (long)puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (int)(fVar6 * (float)param_4) + 3U & 0xfffffffc;
    *puVar2 = 0;
    *(uint *)(param_1 + 1) = uVar1;
    *(undefined8 *)((long)param_1 + 0xc) = 0x100000000;
    if (uVar1 != 0) {
      uVar3 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)uVar1 << 2);
      *(undefined8 *)*param_1 = uVar3;
      if (*(long *)*param_1 == 0) {
        return 0x34;
      }
      lVar5 = 1;
      while ((uint)lVar5 < *(uint *)(param_1 + 2)) {
        uVar3 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)*(uint *)(param_1 + 1) << 2);
        lVar4 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        *(undefined8 *)(*param_1 + lVar4) = uVar3;
        if (*(long *)(*param_1 + lVar4) == 0) {
          return 0x34;
        }
      }
    }
    fVar6 = param_3[1];
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,8);
    param_1[3] = (long)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = (int)(fVar6 * (float)param_4) + 3U & 0xfffffffc;
      *puVar2 = 0;
      *(uint *)(param_1 + 4) = uVar1;
      *(undefined8 *)((long)param_1 + 0x24) = 0x100000000;
      if (uVar1 != 0) {
        uVar3 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)uVar1 << 2);
        *(undefined8 *)param_1[3] = uVar3;
        if (*(long *)param_1[3] == 0) {
          return 0x34;
        }
        lVar5 = 1;
        while ((uint)lVar5 < *(uint *)(param_1 + 5)) {
          uVar3 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)*(uint *)(param_1 + 4) << 2);
          lVar4 = lVar5 * 8;
          lVar5 = lVar5 + 1;
          *(undefined8 *)(param_1[3] + lVar4) = uVar3;
          if (*(long *)(param_1[3] + lVar4) == 0) {
            return 0x34;
          }
        }
      }
      return 1;
    }
  }
  return 0x34;
}


