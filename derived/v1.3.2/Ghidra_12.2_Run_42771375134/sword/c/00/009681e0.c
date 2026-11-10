/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009681e0; name: FUN_009681e0
 */


void FUN_009681e0(undefined8 param_1,undefined4 *param_2,long *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  
  uVar7 = FUN_00942670(param_1,0x4000);
  if (((uVar7 & 1) != 0) && (cVar1 = FUN_009425b0(param_1,*(undefined8 *)*param_3), cVar1 == '\x01')
     ) {
LAB_00968258:
    uVar5 = 0;
    goto LAB_009682d8;
  }
  lVar11 = *param_3;
  iVar6 = *(int *)(lVar11 + 8);
  if (iVar6 == 9) goto LAB_00968258;
  if (iVar6 == 0) {
    uVar9 = 5;
    uVar2 = 2;
    uVar5 = 1;
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = (undefined1)param_3[1];
    uVar9 = 5;
    switch(iVar6) {
    default:
switchD_00968284_caseD_1:
      uVar9 = 1;
    case 3:
      plVar10 = (long *)*param_3;
      uVar5 = *(undefined4 *)((long)param_3 + 0xc);
      lVar11 = *plVar10;
      uVar3 = 0;
      if (lVar11 != 0) {
LAB_0096829c:
        uVar8 = FUN_009423e0(param_1);
        uVar3 = FUN_00929240(uVar8,lVar11,1);
        plVar10 = (long *)*param_3;
      }
      break;
    case 2:
      uVar9 = 4;
      plVar10 = (long *)*param_3;
      uVar5 = *(undefined4 *)((long)param_3 + 0xc);
      lVar11 = *plVar10;
      if (lVar11 == 0) {
        uVar3 = 0;
        break;
      }
      goto LAB_0096829c;
    case 4:
      iVar6 = FUN_00942640(param_1);
      if ((iVar6 == 0) && (*(char *)(lVar11 + 0x58) == '\x01')) goto switchD_00968284_caseD_1;
      uVar9 = 6;
      plVar10 = (long *)*param_3;
      uVar5 = *(undefined4 *)((long)param_3 + 0xc);
      lVar11 = *plVar10;
      if (lVar11 != 0) goto LAB_0096829c;
      uVar3 = 0;
      break;
    case 6:
      uVar9 = 2;
      plVar10 = (long *)*param_3;
      uVar5 = *(undefined4 *)((long)param_3 + 0xc);
      lVar11 = *plVar10;
      if (lVar11 != 0) goto LAB_0096829c;
      uVar3 = 0;
      break;
    case 7:
      uVar9 = 3;
      plVar10 = (long *)*param_3;
      uVar5 = *(undefined4 *)((long)param_3 + 0xc);
      lVar11 = *plVar10;
      if (lVar11 != 0) goto LAB_0096829c;
      uVar3 = 0;
      break;
    case 8:
      uVar9 = 0;
      plVar10 = (long *)*param_3;
      uVar5 = *(undefined4 *)((long)param_3 + 0xc);
      lVar11 = *plVar10;
      if (lVar11 != 0) goto LAB_0096829c;
      uVar3 = 0;
    }
    uVar4 = FUN_00968390(param_1,plVar10);
  }
  uVar5 = FUN_00946d60(uVar2,uVar9,uVar4,uVar5,uVar3);
LAB_009682d8:
  *param_2 = uVar5;
  return;
}


