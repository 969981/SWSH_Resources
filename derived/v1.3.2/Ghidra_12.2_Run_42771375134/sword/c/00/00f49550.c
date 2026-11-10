/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f49550; name: FUN_00f49550
 */


undefined2 FUN_00f49550(undefined8 param_1,int *param_2,uint param_3,undefined2 *param_4)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  ulong uVar4;
  ushort *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ushort local_1d0 [200];
  
  puVar5 = (ushort *)((long)param_2 - (long)*param_2);
  uVar2 = *(uint *)((long)((long)param_2 + (ulong)puVar5[7]) +
                   (ulong)*(uint *)((long)param_2 + (ulong)puVar5[7]));
  uVar4 = (ulong)uVar2;
  if (param_3 <= uVar2) {
    uVar9 = (ulong)param_3;
    if (*puVar5 < 0xd) {
      uVar6 = 0;
      if (param_3 < 0x80000000) goto LAB_00f495dc;
    }
    else {
      uVar6 = 0;
      if ((ulong)puVar5[6] != 0) {
        uVar6 = (ulong)*(ushort *)((long)param_2 + (ulong)puVar5[6]);
      }
      if ((int)uVar6 <= (int)param_3) {
LAB_00f495dc:
        if (uVar2 != 0) {
          if (uVar4 - 1 < 3) {
            lVar7 = 0;
          }
          else {
            lVar7 = 0;
            puVar5 = local_1d0 + 2;
            do {
              uVar3 = (ushort)lVar7;
              puVar5[-2] = uVar3;
              puVar5[-1] = uVar3 + 1;
              lVar7 = lVar7 + 4;
              *puVar5 = uVar3 + 2;
              puVar5[1] = uVar3 + 3;
              puVar5 = puVar5 + 4;
            } while (uVar4 - (uVar4 & 3) != lVar7);
          }
          if ((uVar2 & 3) != 0) {
            lVar8 = -(uVar4 & 3);
            do {
              local_1d0[lVar7] = (ushort)lVar7;
              lVar7 = lVar7 + 1;
              lVar8 = lVar8 + 1;
            } while (lVar8 != 0);
          }
        }
        FUN_00f49330(param_1,local_1d0 + uVar6,uVar2 - (int)uVar6);
        lVar7 = -(long)*param_2;
        if (0 < (int)param_3) {
          do {
            puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + lVar7 + 0xe));
            uVar9 = uVar9 - 1;
            *param_4 = *(undefined2 *)
                        ((long)puVar1 + (ulong)local_1d0[(int)uVar9] * 2 + (ulong)*puVar1 + 4);
            lVar7 = -(long)*param_2;
            param_4 = param_4 + 1;
          } while (uVar9 != 0);
        }
        if ((*(ushort *)((long)param_2 + lVar7) < 0xb) ||
           (uVar4 = (ulong)((ushort *)((long)param_2 + lVar7))[5], uVar4 == 0)) {
          return 0;
        }
        return *(undefined2 *)((long)param_2 + uVar4);
      }
    }
  }
  return 0xfe;
}


