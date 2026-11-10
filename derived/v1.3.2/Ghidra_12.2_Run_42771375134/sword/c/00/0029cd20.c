/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029cd20; name: FUN_0029cd20
 */


uint FUN_0029cd20(long param_1,long param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  FUN_003ff570(*(undefined8 *)(param_1 + 8));
  uVar2 = *(int *)(param_1 + 0xb4) - param_4;
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  if (param_3 <= uVar2) {
    uVar2 = param_3;
  }
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x88);
    uVar7 = (ulong)uVar2;
    if (uVar7 - 1 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar4 = (undefined8 *)(param_2 + 0x10);
      puVar8 = (undefined8 *)(lVar3 + (ulong)param_4 * 8 + 0x10);
      do {
        puVar4[-2] = puVar8[-2];
        puVar4[-1] = puVar8[-1];
        *puVar4 = *puVar8;
        puVar1 = puVar8 + 1;
        lVar6 = lVar6 + 4;
        puVar8 = puVar8 + 4;
        puVar4[1] = *puVar1;
        puVar4 = puVar4 + 4;
      } while (uVar7 - (uVar7 & 3) != lVar6);
    }
    if ((uVar2 & 3) != 0) {
      lVar5 = -(uVar7 & 3);
      puVar4 = (undefined8 *)(lVar3 + (lVar6 + (ulong)param_4) * 8);
      puVar8 = (undefined8 *)(param_2 + lVar6 * 8);
      do {
        lVar5 = lVar5 + 1;
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
    }
  }
                    /* try { // try from 0029cdf8 to 0029cdfb has its CatchHandler @ 0029ce10 */
  FUN_003ff5a0(*(undefined8 *)(param_1 + 8));
  return uVar2;
}


