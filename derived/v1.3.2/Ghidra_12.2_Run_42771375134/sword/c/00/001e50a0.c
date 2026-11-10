/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e50a0; name: FUN_001e50a0
 */


void FUN_001e50a0(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 local_38;
  
  uVar6 = *(uint *)(param_1 + 1) >> 0x1e;
  uVar2 = uVar6 - 1;
  if (uVar2 < 2) {
    if ((*param_1 != 0) && (*(char *)(*param_1 + 0x1fb9) != '\0')) {
      puVar5 = (uint *)param_1[2];
      if (puVar5 == (uint *)0x0) {
        puVar5 = (uint *)FUN_001d1a00(*param_1,*(uint *)(param_1 + 1) >> 0x18 & 0xf);
        param_1[2] = (long)puVar5;
        uVar6 = *puVar5;
        lVar3 = *param_1;
      }
      else {
        uVar6 = *puVar5;
        lVar3 = *param_1;
      }
      if (uVar6 != 0xffffffff) {
        uVar2 = puVar5[1];
        if (uVar2 != 0) {
          uVar4 = 0;
          lVar1 = *(long *)(lVar3 + 0x2040) + (ulong)uVar6 * 8;
          do {
            if (*(long *)(lVar1 + (uVar4 & 0xffffffff) * 8) == param_2) {
              *(undefined8 *)(lVar1 + uVar4 * 8) = *(undefined8 *)(lVar1 + (ulong)(uVar2 - 1) * 8);
              puVar5[1] = uVar2 - 1;
              return;
            }
            uVar4 = uVar4 + 1;
          } while ((uint)uVar4 < uVar2);
        }
      }
      uVar6 = puVar5[2];
      if (uVar6 == 0xffffffff) {
        uVar6 = *(uint *)(lVar3 + 0x2048);
        local_38 = 0;
        FUN_001e5240(lVar3 + 0x2040,uVar6 + *(int *)((long)param_1 + 0x24),&local_38);
        puVar5[2] = uVar6;
      }
      uVar2 = puVar5[3];
      *(long *)(*(long *)(lVar3 + 0x2040) + (ulong)uVar6 * 8 + (ulong)uVar2 * 8) = param_2;
      puVar5[3] = uVar2 + 1;
      FUN_001d1850(*param_1,param_1);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 2;
      return;
    }
  }
  else if (uVar6 == 3) {
    return;
  }
  *(uint *)(*(long *)(PTR_DAT_02711068 + (ulong)(*(byte *)(param_2 + 0xb) & 0xf) * 8 + 0x30) +
            param_2 + 8) =
       *(uint *)(*(long *)(PTR_DAT_02711068 + (ulong)(*(byte *)(param_2 + 0xb) & 0xf) * 8 + 0x30) +
                 param_2 + 8) | 0xffffff;
  if (((uVar2 < 2) && (*param_1 != 0)) && ((param_3 & 1) != 0)) {
    FUN_003ba330();
    return;
  }
  return;
}


