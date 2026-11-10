/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cffa0; name: FUN_003cffa0
 */


void FUN_003cffa0(long *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  
  lVar3 = *param_1;
  uVar2 = *(uint *)(lVar3 + 0x1108);
  if (((uVar2 & 6) != 0) && (iVar6 = *(int *)(lVar3 + 0x40), iVar6 != 0)) {
    iVar1 = (uVar2 & 4 | uVar2 >> 1 & 1) << 3;
    plVar8 = *(long **)(lVar3 + 0x38);
    do {
      while( true ) {
        lVar3 = *plVar8;
        iVar6 = iVar6 + -1;
        if ((*(byte *)(lVar3 + 0x25) >> 4 & 1) != 0) break;
        FUN_003fb400(lVar3,iVar1);
        plVar8 = plVar8 + 1;
        if (iVar6 == 0) goto LAB_003d001c;
      }
      *(byte *)(lVar3 + 0x26) = *(byte *)(lVar3 + 0x26) | (byte)iVar1;
      plVar8 = plVar8 + 1;
    } while (iVar6 != 0);
  }
LAB_003d001c:
  uVar7 = (ulong)*(uint *)((long)param_1 + 0x94);
  if (*(uint *)((long)param_1 + 0x94) != 0) {
    plVar8 = (long *)param_1[0xd];
    do {
      while( true ) {
        lVar5 = *plVar8;
        lVar3 = lVar5;
        if (((*(byte *)(lVar5 + 0x25) & 1) != 0) && ((*(byte *)(lVar5 + 0x26) & 1) != 0)) {
          lVar3 = FUN_003ced30(param_1,lVar5,0,0,param_2,param_3 & 1);
        }
        if (lVar5 == lVar3) break;
        plVar8 = plVar8 + 1;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_003d00bc;
      }
      if (*(char *)(lVar5 + 0x24) == '\x04') {
        FUN_003c65a0(lVar5);
      }
      else if (*(char *)(lVar5 + 0x24) == '\0') {
        FUN_003fb400(lVar5,0);
      }
      FUN_003c6e50(lVar5,0);
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
LAB_003d00bc:
  uVar2 = *(uint *)((long)param_1 + 0x84);
  if ((uVar2 == 0) || (*(int *)((long)param_1 + 0x94) == 0)) {
    return;
  }
  uVar7 = 0;
  do {
    uVar4 = *(uint *)(param_1[0xf] + uVar7 * 4);
    if (uVar4 != 0xffffffff) {
      do {
        uVar4 = *(uint *)(param_1[0xe] + (ulong)uVar4 * 4);
      } while (uVar4 != 0xffffffff);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != uVar2);
                    /* WARNING: Subroutine does not return */
  memset((void *)param_1[0xf],-1,(ulong)(uVar2 << 2));
}


