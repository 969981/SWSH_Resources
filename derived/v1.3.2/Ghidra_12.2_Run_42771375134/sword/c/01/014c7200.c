/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c7200; name: FUN_014c7200
 */


uint FUN_014c7200(long param_1,uint param_2,uint param_3)

{
  short *psVar1;
  long lVar2;
  undefined2 *puVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  short *psVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar6 = FUN_014c73a0(param_1,param_3);
  uVar7 = uVar6 >> 0x12 & 7;
  uVar11 = 0;
  if (uVar7 != 2) {
    uVar11 = uVar7;
  }
  if (param_2 < 7) {
    uVar7 = uVar6 & 3;
    switch(param_2) {
    case 1:
      return uVar11;
    case 2:
      return uVar7 + uVar11 * 2;
    case 3:
      uVar6 = 3;
      if (uVar11 != 1) {
        uVar6 = uVar7;
      }
      return uVar6;
    case 4:
      puVar8 = (undefined2 *)
               FUN_0077d470(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_3 * 0x18));
      uVar11 = 1;
      uVar10 = FUN_014ba2e0(*puVar8,1);
      bVar5 = (uVar10 & 1) == 0;
      lVar2 = 2;
      if (bVar5) {
        lVar2 = 0;
      }
      uVar4 = *(ushort *)((long)puVar8 + lVar2);
      puVar3 = puVar8 + 1;
      if (bVar5) {
        puVar3 = puVar8;
      }
      if ((0xff < uVar4) ||
         ((*(uint *)(&DAT_01d4da20 + (ulong)(uVar4 >> 5) * 4) & 1 << (ulong)(uVar4 & 0x1f)) == 0)) {
        if ((uVar4 | 0x20) == 0x79) {
          uVar4 = puVar3[1];
          if (0xff < uVar4) {
            return 1;
          }
          if ((*(uint *)(&DAT_01d4da20 + (ulong)(uVar4 >> 5) * 4) & 1 << (ulong)(uVar4 & 0x1f)) == 0
             ) {
            return 1;
          }
        }
        uVar11 = 0;
      }
      return uVar11;
    case 5:
      if ((uVar6 & 0x200000) != 0) {
        uVar11 = 2;
      }
      return uVar11;
    case 6:
      psVar9 = (short *)FUN_0077d470(*(undefined8 *)
                                      (*(long *)(param_1 + 0x1a0) + (ulong)param_3 * 0x18));
      if (*psVar9 == 0) {
        return 1;
      }
      do {
        uVar10 = FUN_0077d930(psVar9,&DAT_02158bf0);
        if (((uVar10 & 1) != 0) || (uVar10 = FUN_0077d930(psVar9,&DAT_02158ab0), (uVar10 & 1) != 0))
        goto LAB_014c7364;
        if (*psVar9 != 0x30) {
          return 1;
        }
        psVar1 = psVar9 + 1;
        uVar7 = 1;
        psVar9 = psVar9 + 1;
      } while (*psVar1 != 0);
    }
  }
  else {
LAB_014c7364:
    uVar7 = 0;
  }
  return uVar7;
}


