/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062b530; name: FUN_0062b530
 */


long FUN_0062b530(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int local_54;
  
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar10 = (ulong)param_3;
  local_54 = 0;
  if (uVar10 <= param_2) {
    lVar6 = FUN_006029c0(uVar9,2,0,uVar10,0,&local_54);
    if (local_54 != 0) {
      return 0;
    }
    uVar11 = 0;
    do {
      if (param_3 <= (uint)uVar11) {
        return lVar6;
      }
      uVar5 = FUN_006083d0(param_1);
      uVar2 = uVar5 & 0x3f;
      if ((uVar5 >> 7 & 1) != 0) {
        uVar10 = (uVar11 & 0xffffffff) - uVar10;
        uVar8 = (ulong)~(uVar5 & 0xff) | 0xffffffffffffffc0;
        if (uVar8 <= uVar10) {
          uVar8 = uVar10;
        }
                    /* WARNING: Subroutine does not return */
        memset((void *)(lVar6 + (uVar11 & 0xffffffff) * 2),0,uVar8 * -2);
      }
      uVar11 = uVar11 & 0xffffffff;
      lVar1 = lVar6 + uVar11 * 2;
      lVar12 = 0;
      if (((uVar5 & 0xff) >> 6 & 1) == 0) {
        do {
          cVar3 = FUN_006083d0(param_1);
          *(short *)(lVar1 + lVar12 * 2) = (short)cVar3;
          lVar7 = lVar12 + 1;
          if (uVar10 <= uVar11 + lVar12 + 1) break;
          uVar5 = (uint)lVar12;
          lVar12 = lVar7;
        } while (uVar5 < uVar2);
      }
      else {
        do {
          uVar4 = FUN_00608400(param_1);
          lVar7 = lVar12 + 1;
          *(undefined2 *)(lVar1 + lVar12 * 2) = uVar4;
          if (uVar10 <= uVar11 + lVar12 + 1) break;
          uVar5 = (uint)lVar12;
          lVar12 = lVar7;
        } while (uVar5 < uVar2);
      }
      uVar11 = uVar11 + lVar7;
    } while (uVar2 < (uint)lVar7);
    FUN_006028c0(uVar9,lVar6);
  }
  return 0;
}


