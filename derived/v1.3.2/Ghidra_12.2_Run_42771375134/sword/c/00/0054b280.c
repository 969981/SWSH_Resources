/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054b280; name: FUN_0054b280
 */


ulong FUN_0054b280(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x2f1) == '\0') {
    uVar4 = *(long *)(param_1 + 0x330) - (long)*(long **)(param_1 + 0x328);
    if ((int)(uVar4 >> 3) != 0) {
      uVar4 = uVar4 >> 3 & 0xffffffff;
      iVar2 = FUN_00552890(**(long **)(param_1 + 0x328) + 8,param_2);
      if ((param_3 & 1) == 0) {
        if (iVar2 == 0) {
          uVar7 = 1;
          uVar5 = 0xffffffff;
          do {
            if (uVar4 <= uVar7) goto LAB_0054b3d0;
            iVar2 = FUN_00552890(*(long *)(*(long *)(param_1 + 0x328) + uVar7 * 8) + 8,param_2);
            uVar7 = uVar7 + 1;
          } while (iVar2 == 0);
          uVar5 = (ulong)((int)uVar7 - 1);
          goto LAB_0054b3d0;
        }
      }
      else if (iVar2 == 0) {
        uVar7 = 0;
        do {
          iVar2 = FUN_00552890(*(long *)(*(long *)(param_1 + 0x328) + uVar7 * 8) + 0x30,param_2);
          if (iVar2 != 0) {
            uVar5 = uVar7 & 0xffffffff;
            break;
          }
          uVar5 = uVar7 + 1;
          if (uVar4 <= uVar5) {
            uVar5 = 0xffffffff;
            break;
          }
          iVar2 = FUN_00552890(*(long *)(*(long *)(param_1 + 0x328) + uVar7 * 8 + 8) + 8,param_2);
          uVar7 = uVar5;
        } while (iVar2 == 0);
        goto LAB_0054b3d0;
      }
      uVar5 = 0;
      goto LAB_0054b3d0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x328);
    if (lVar3 != *(long *)(param_1 + 0x330)) {
      iVar2 = (int)((ulong)(*(long *)(param_1 + 0x330) - lVar3) >> 3);
      iVar6 = iVar2 + -1;
      if (-1 < iVar6) {
        iVar2 = iVar6;
      }
      uVar5 = (ulong)(uint)(iVar2 >> 1);
      iVar2 = FUN_00552840(*(long *)(lVar3 + (long)(iVar2 >> 1) * 8) + 8,param_2,0xffffffff);
      if (iVar2 != 0) {
        iVar8 = 0;
        do {
          if (iVar6 <= iVar8) {
            uVar5 = 0xffffffff;
            break;
          }
          iVar1 = (int)uVar5 + -1;
          if (iVar2 < 1) {
            iVar8 = (int)uVar5 + 1;
            iVar1 = iVar6;
          }
          iVar6 = iVar1;
          iVar2 = iVar6 + iVar8;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar5 = (ulong)(uint)(iVar2 >> 1);
          iVar2 = FUN_00552840(*(long *)(*(long *)(param_1 + 0x328) + (long)(iVar2 >> 1) * 8) + 8,
                               param_2,0xffffffff);
        } while (iVar2 != 0);
      }
      goto LAB_0054b3d0;
    }
  }
  uVar5 = 0xffffffff;
LAB_0054b3d0:
  return uVar5 & 0xffffffff;
}


