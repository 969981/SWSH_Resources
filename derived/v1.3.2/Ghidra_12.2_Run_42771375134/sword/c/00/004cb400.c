/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cb400; name: FUN_004cb400
 */


void FUN_004cb400(float param_1,long *param_2,long *param_3,float *param_4,long param_5,long param_6
                 ,undefined2 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  
  uVar2 = *(uint *)(param_3 + 1);
  uVar1 = *(uint *)(param_2 + 1) - (*(uint *)(param_2 + 1) >> 0xf & 1) & 0xff;
  if (uVar1 == 0) {
LAB_004cb55c:
    cVar3 = *(char *)((long)param_2 + 9);
  }
  else {
    uVar10 = uVar2 - (uVar2 >> 0xf & 1) & 0xff;
    if (uVar10 == 0) {
      uVar10 = 0;
      do {
        FUN_004d1410(param_8,param_2,uVar10);
        uVar10 = uVar10 + 1;
      } while (uVar1 != uVar10);
      goto LAB_004cb55c;
    }
    uVar12 = 0;
    lVar5 = (ulong)((uVar2 & 0xff) + 3 & 0x1fc) * 4;
    lVar8 = param_5;
    lVar7 = param_6;
    do {
      FUN_004d1410(param_8,param_2,uVar12 & 0xffffffff);
      uVar4 = *(ushort *)(param_2 + 2);
      lVar6 = *param_2;
      lVar11 = 0;
      uVar9 = (ulong)uVar10;
      do {
        fVar13 = *param_4 * *(float *)(lVar8 + lVar11);
        FUN_004cb940(fVar13,(param_4[1] * *(float *)(lVar7 + lVar11) - fVar13) * param_1,
                     lVar6 + uVar12 * uVar4 * 4,*param_3 + lVar11 * (ulong)*(ushort *)(param_3 + 2),
                     param_7);
        lVar11 = lVar11 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      lVar7 = lVar7 + lVar5;
      lVar8 = lVar8 + lVar5;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar1);
    cVar3 = *(char *)((long)param_2 + 9);
  }
  if ((-1 < cVar3) || (-1 < *(char *)((long)param_3 + 9))) goto LAB_004cb610;
  FUN_004d1410(param_8,param_2,(ulong)uVar1);
  uVar10 = *(uint *)(param_3 + 1);
  uVar12 = (ulong)((uVar10 & 0xff) - 1);
  lVar8 = uVar12 * 4;
  lVar7 = (ulong)(uVar1 * ((uVar2 & 0xff) + 3 & 0x1fc)) * 4;
  fVar13 = *param_4 * *(float *)(param_5 + lVar7 + lVar8);
  if ((*(uint *)(param_2 + 1) >> 0xf & 1) == 0) {
    lVar5 = 0;
    if ((uVar10 >> 0xf & 1) != 0) goto LAB_004cb5d0;
LAB_004cb604:
    lVar11 = 0;
  }
  else {
    lVar5 = *param_2 +
            (ulong)((*(uint *)(param_2 + 1) & 0xff) - 1) * (ulong)*(ushort *)(param_2 + 2) * 4;
    if ((uVar10 >> 0xf & 1) == 0) goto LAB_004cb604;
LAB_004cb5d0:
    lVar11 = *param_3 + uVar12 * *(ushort *)(param_3 + 2) * 4;
  }
  FUN_004cb940(fVar13,(param_4[1] * *(float *)(param_6 + lVar7 + lVar8) - fVar13) * param_1,lVar5,
               lVar11,param_7);
LAB_004cb610:
  *(undefined2 *)((long)param_3 + 0x12) = param_7;
  return;
}


