/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00629330; name: FUN_00629330
 */


void FUN_00629330(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar2 = (*(code *)param_1[0x81])();
  uVar7 = *param_2;
  if (uVar7 != 0) {
    uVar8 = 1;
    do {
      while( true ) {
        lVar6 = param_1[7];
        if (lVar6 < 2) {
          if (*(char *)((long)param_1 + 0x3c9) != '\0') {
            *(undefined4 *)(param_1 + 3) = 0x81;
          }
          param_1[7] = 0;
          goto LAB_00629494;
        }
        param_1[7] = lVar6 + -2;
        uVar3 = *(ulong *)(param_1[6] + lVar6 * 8 + -8);
        if (((uint)uVar3 & 0xffff) < (uint)*(ushort *)((long)param_1 + 0x54)) break;
        if (*(char *)((long)param_1 + 0x3c9) != '\0') {
          *(undefined4 *)(param_1 + 3) = 0x86;
        }
LAB_00629470:
        uVar8 = uVar8 + 1;
        if (uVar7 < uVar8) goto LAB_00629494;
      }
      uVar4 = *(ulong *)(param_1[6] + (lVar6 + -2) * 8);
      uVar5 = uVar4 >> 4 & 0xf;
      uVar1 = uVar5;
      if ((char)param_1[0x53] == 'q') {
        uVar1 = uVar5 | 0x10;
      }
      uVar5 = uVar5 | 0x20;
      if ((char)param_1[0x53] != 'r') {
        uVar5 = uVar1;
      }
      if (lVar2 != uVar5 + *(ushort *)(param_1 + 0x4c)) goto LAB_00629470;
      uVar4 = uVar4 & 0xf;
      lVar6 = -8;
      if (7 < uVar4) {
        lVar6 = -7;
      }
      if (((*(int *)(*(long *)(*param_1 + 0xb0) + 0x78) == 0x28) &&
          (*(char *)((long)param_1 + 0x42b) != '\0')) &&
         (((*(char *)((long)param_1 + 0x42c) != '\0' && (*(char *)((long)param_1 + 0x42d) != '\0'))
          || ((((char)param_1[0x79] == '\0' || ((short)param_1[0x45] == 0)) &&
              ((*(byte *)(param_1[0xe] + (uVar3 & 0xffff)) >> 4 & 1) == 0)))))) goto LAB_00629470;
      (*(code *)param_1[0x7f])
                (param_1,param_1 + 9,uVar3,
                 lVar6 + uVar4 << ((ulong)(6 - *(ushort *)((long)param_1 + 0x262)) & 0x3f));
      uVar8 = uVar8 + 1;
    } while (uVar8 <= uVar7);
  }
LAB_00629494:
  param_1[8] = param_1[7];
  return;
}


