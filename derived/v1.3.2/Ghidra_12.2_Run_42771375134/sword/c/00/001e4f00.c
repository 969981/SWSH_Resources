/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e4f00; name: FUN_001e4f00
 */


void FUN_001e4f00(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 local_48;
  
  puVar6 = (uint *)(param_1 + 1);
  uVar2 = *puVar6 >> 0x1e;
  if (uVar2 - 1 < 2) {
    if ((*param_1 != 0) && (*(char *)(*param_1 + 0x1fb9) != '\0')) {
      puVar5 = (uint *)param_1[2];
      if (puVar5 == (uint *)0x0) {
        puVar5 = (uint *)FUN_001d1a00(*param_1,*puVar6 >> 0x18 & 0xf);
        param_1[2] = (long)puVar5;
      }
      if ((puVar5[2] != 0xffffffff) && (uVar7 = puVar5[3], uVar7 != 0)) {
        uVar4 = 0;
        lVar3 = *(long *)(*param_1 + 0x2040) + (ulong)puVar5[2] * 8;
        do {
          if (*(long *)(lVar3 + (uVar4 & 0xffffffff) * 8) == param_2) {
            *(undefined8 *)(lVar3 + uVar4 * 8) = *(undefined8 *)(lVar3 + (ulong)(uVar7 - 1) * 8);
            puVar5[3] = uVar7 - 1;
            uVar7 = *puVar5;
            lVar3 = *param_1;
            goto joined_r0x001e5010;
          }
          uVar4 = uVar4 + 1;
        } while ((uint)uVar4 < uVar7);
      }
      uVar7 = *puVar5;
      lVar3 = *param_1;
joined_r0x001e5010:
      if (uVar7 == 0xffffffff) {
        uVar7 = *(uint *)(lVar3 + 0x2048);
        local_48 = 0;
        FUN_001e5240(lVar3 + 0x2040,uVar7 + *(int *)((long)param_1 + 0x24),&local_48);
        *puVar5 = uVar7;
      }
      uVar1 = puVar5[1];
      *(long *)(*(long *)(lVar3 + 0x2040) + (ulong)uVar7 * 8 + (ulong)uVar1 * 8) = param_2;
      puVar5[1] = uVar1 + 1;
      if (uVar2 == 1) {
        uVar2 = *puVar6;
      }
      else {
        FUN_001d1850(*param_1,param_1);
        uVar2 = *(uint *)(param_1 + 1);
      }
      uVar2 = uVar2 | 1;
      goto LAB_001e5078;
    }
  }
  else if (uVar2 == 3) {
    return;
  }
  puVar6 = (uint *)(*(long *)(PTR_DAT_02711068 + (ulong)(*(byte *)(param_2 + 0xb) & 0xf) * 8 + 0x30)
                    + param_2 + 8);
  uVar2 = *puVar6 & 0xff000000 | *(uint *)(param_1 + 4) & 0xffffff;
LAB_001e5078:
  *puVar6 = uVar2;
  return;
}


