/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00206270; name: FUN_00206270
 */


undefined8 FUN_00206270(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined2 local_44 [2];
  
  uVar3 = *(uint *)(param_1 + 1) >> 0x1e;
  if ((uVar3 != 3) && ((uVar3 != 2 || (*(char *)(*param_1 + 0x1fb9) == '\0')))) {
    uVar4 = FUN_001e4b50(param_1,param_2,param_3);
    return uVar4;
  }
  lVar7 = param_1[2];
  if (lVar7 == 0) {
    lVar7 = FUN_001d1a00(*param_1,*(uint *)(param_1 + 1) >> 0x18 & 0xf);
    param_1[2] = lVar7;
    if ((param_3 & 0xffff) == 1) goto LAB_002062d0;
LAB_0020633c:
    lVar8 = *param_1;
    uVar3 = *(uint *)(lVar8 + 0x2028);
    local_44[0] = 0;
    FUN_001fea50(lVar8 + 0x2020,uVar3 + (param_3 & 0xffff),local_44);
    lVar8 = *(long *)(lVar8 + 0x2020);
    *(uint *)(lVar7 + 0x88) = uVar3;
    *(short *)(lVar7 + 0x8c) = (short)param_3;
    if ((param_3 & 0xffff) == 0) goto LAB_002063c4;
    lVar8 = lVar8 + (ulong)uVar3 * 2;
    uVar6 = (ulong)(param_3 & 0xffff);
    uVar5 = uVar6 & 1;
    if ((param_3 & 0xffff) == 1) goto LAB_002062ec;
LAB_00206380:
    lVar7 = 0;
    do {
      plVar1 = (long *)(param_2 + lVar7 * 8);
      puVar2 = (undefined2 *)(lVar8 + lVar7 * 2);
      lVar7 = lVar7 + 2;
      *puVar2 = (short)*(undefined4 *)(*plVar1 + 0x48);
      puVar2[1] = (short)*(undefined4 *)(plVar1[1] + 0x48);
    } while (uVar6 - uVar5 != lVar7);
  }
  else {
    if ((param_3 & 0xffff) != 1) goto LAB_0020633c;
LAB_002062d0:
    lVar8 = lVar7 + 0x88;
    *(undefined2 *)(lVar7 + 0x8c) = 1;
    uVar6 = (ulong)(param_3 & 0xffff);
    uVar5 = uVar6 & 1;
    if ((param_3 & 0xffff) != 1) goto LAB_00206380;
LAB_002062ec:
    lVar7 = 0;
  }
  if (uVar5 != 0) {
    *(short *)(lVar8 + lVar7 * 2) = (short)*(undefined4 *)(*(long *)(param_2 + lVar7 * 8) + 0x48);
  }
LAB_002063c4:
  FUN_001d1850(*param_1,param_1);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 2;
  return 1;
}


