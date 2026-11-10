/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c5010; name: FUN_005c5010
 */


undefined8 FUN_005c5010(byte *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  byte bVar10;
  long lVar11;
  
  if (param_1 == (byte *)0x0) {
    plVar1 = param_2 + 1;
    if (((*(byte *)(param_2 + 5) & 1) == 0) && (*plVar1 != 0)) {
      plVar3 = (long *)*param_2;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
      }
      *plVar1 = 0;
    }
    *plVar1 = 0;
    param_2[2] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    return 0;
  }
  if ((long)param_3 < 0) {
    bVar10 = *param_1;
    if (bVar10 != 0) {
      param_3 = 0;
      lVar5 = 0;
      do {
        lVar9 = 3;
        if (0xef < bVar10) {
          lVar9 = 4;
        }
        lVar11 = 2;
        if (0xdf < bVar10) {
          lVar11 = lVar9;
        }
        lVar9 = 2;
        if (0xc3 < bVar10) {
          lVar9 = lVar11;
        }
        lVar11 = 1;
        if (((int)(char)bVar10 & 0x80000000U) != 0) {
          lVar11 = lVar9;
        }
        lVar5 = lVar5 + lVar11;
        param_3 = param_3 + 1;
        bVar10 = param_1[lVar5];
      } while (bVar10 != 0);
      goto LAB_005c5088;
    }
    param_3 = 0;
    uVar6 = param_2[4];
    uVar2 = 1;
    if (uVar6 != 0) goto LAB_005c50ac;
  }
  else {
LAB_005c5088:
    uVar6 = param_2[4];
    uVar2 = param_3 + 1;
    if (uVar2 <= uVar6) goto LAB_005c50ac;
  }
  FUN_005c5f60(param_2,uVar2,1);
  uVar6 = param_2[4];
LAB_005c50ac:
  if (((param_3 < uVar6) || (uVar2 <= uVar6)) ||
     (uVar2 = FUN_005c5f60(param_2,uVar2,1), (uVar2 & 1) != 0)) {
    *(undefined4 *)(param_2[1] + param_3 * 4) = 0;
    param_2[2] = param_3;
    bVar10 = *param_1;
  }
  else {
    bVar10 = *param_1;
  }
  if (bVar10 != 0) {
    uVar8 = (uint)bVar10;
    puVar7 = (uint *)param_2[1];
    iVar4 = 0;
    lVar5 = 0;
    do {
      if ((char)uVar8 < '\0') {
        if (uVar8 < 0xe0) {
          uVar8 = (uVar8 & 0x1f) << 6;
          lVar11 = 1;
          lVar9 = 2;
LAB_005c51b4:
          *puVar7 = uVar8 | param_1[lVar5 + lVar11] & 0x3f;
          goto joined_r0x005c51d0;
        }
        if (uVar8 < 0xf0) {
          lVar11 = 2;
          uVar8 = (uVar8 & 0xf) << 0xc | (param_1[lVar5 + 1] & 0x3f) << 6;
          lVar9 = 3;
          goto LAB_005c51b4;
        }
        lVar9 = 4;
      }
      else {
        lVar9 = 1;
        *puVar7 = uVar8;
joined_r0x005c51d0:
        iVar4 = iVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      if ((long)param_3 <= (long)iVar4) {
        return 1;
      }
      lVar5 = lVar5 + lVar9;
      uVar8 = (uint)param_1[lVar5];
    } while (uVar8 != 0);
  }
  return 1;
}


