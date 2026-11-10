/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cd2f0; name: FUN_003cd2f0
 */


void FUN_003cd2f0(undefined8 param_1,long *param_2,uint param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  
  uVar21 = 0;
  if (7 < param_3) {
    uVar16 = 1;
    plVar9 = param_2;
    do {
      lVar15 = plVar9[0xc];
      lVar4 = plVar9[0xd];
      Hint_Prefetch(lVar15,0,0,0);
      Hint_Prefetch(lVar4,0,0,0);
      lVar1 = plVar9[0xf];
      lVar5 = plVar9[0x10];
      Hint_Prefetch(lVar1,0,0,0);
      Hint_Prefetch(lVar5,0,0,0);
      lVar2 = plVar9[0x12];
      lVar6 = plVar9[0x13];
      Hint_Prefetch(lVar2,0,0,0);
      Hint_Prefetch(lVar6,0,0,0);
      lVar3 = plVar9[0x15];
      lVar7 = plVar9[0x16];
      Hint_Prefetch(lVar3,0,0,0);
      Hint_Prefetch(lVar7,0,0,0);
      FUN_003cc8e0(param_1,*plVar9,plVar9[1],param_4);
      lVar11 = *(long *)(lVar15 + 0x10);
      lVar17 = *(long *)(lVar4 + 0x10);
      Hint_Prefetch(lVar11,0,0,0);
      Hint_Prefetch(lVar11 + 0x80,0,0,0);
      Hint_Prefetch(lVar17,0,0,0);
      Hint_Prefetch(lVar17 + 0x80,0,0,0);
      lVar12 = *(long *)(lVar1 + 0x10);
      lVar18 = *(long *)(lVar5 + 0x10);
      Hint_Prefetch(lVar12,0,0,0);
      Hint_Prefetch(lVar12 + 0x80,0,0,0);
      Hint_Prefetch(lVar18,0,0,0);
      Hint_Prefetch(lVar18 + 0x80,0,0,0);
      lVar13 = *(long *)(lVar2 + 0x10);
      lVar19 = *(long *)(lVar6 + 0x10);
      Hint_Prefetch(lVar13,0,0,0);
      Hint_Prefetch(lVar13 + 0x80,0,0,0);
      Hint_Prefetch(lVar19,0,0,0);
      Hint_Prefetch(lVar19 + 0x80,0,0,0);
      lVar14 = *(long *)(lVar3 + 0x10);
      lVar20 = *(long *)(lVar7 + 0x10);
      Hint_Prefetch(lVar14,0,0,0);
      Hint_Prefetch(lVar14 + 0x80,0,0,0);
      Hint_Prefetch(lVar20,0,0,0);
      Hint_Prefetch(lVar20 + 0x80,0,0,0);
      FUN_003cc8e0(param_1,plVar9[3],plVar9[4],param_4);
      if ((*(byte *)(lVar15 + 0x1b) & 0x60) == 0) {
        Hint_Prefetch(*(long *)(lVar15 + 0x40),0,0,0);
        Hint_Prefetch(*(long *)(lVar15 + 0x40) + 0x80,0,0,0);
      }
      if ((*(byte *)(lVar4 + 0x1b) & 0x60) == 0) {
        Hint_Prefetch(*(long *)(lVar4 + 0x40),0,0,0);
        Hint_Prefetch(*(long *)(lVar4 + 0x40) + 0x80,0,0,0);
      }
      if ((*(byte *)(lVar1 + 0x1b) & 0x60) == 0) {
        Hint_Prefetch(*(long *)(lVar1 + 0x40),0,0,0);
        Hint_Prefetch(*(long *)(lVar1 + 0x40) + 0x80,0,0,0);
        if ((*(byte *)(lVar5 + 0x1b) & 0x60) != 0) goto LAB_003cd50c;
LAB_003cd360:
        Hint_Prefetch(*(long *)(lVar5 + 0x40),0,0,0);
        Hint_Prefetch(*(long *)(lVar5 + 0x40) + 0x80,0,0,0);
        if ((*(byte *)(lVar2 + 0x1b) & 0x60) != 0) goto LAB_003cd518;
LAB_003cd378:
        Hint_Prefetch(*(long *)(lVar2 + 0x40),0,0,0);
        Hint_Prefetch(*(long *)(lVar2 + 0x40) + 0x80,0,0,0);
        if ((*(byte *)(lVar6 + 0x1b) & 0x60) != 0) goto LAB_003cd524;
LAB_003cd390:
        Hint_Prefetch(*(long *)(lVar6 + 0x40),0,0,0);
        Hint_Prefetch(*(long *)(lVar6 + 0x40) + 0x80,0,0,0);
        if ((*(byte *)(lVar3 + 0x1b) & 0x60) != 0) goto LAB_003cd534;
LAB_003cd3ac:
        Hint_Prefetch(*(long *)(lVar3 + 0x40),0,0,0);
        Hint_Prefetch(*(long *)(lVar3 + 0x40) + 0x80,0,0,0);
        bVar8 = *(byte *)(lVar7 + 0x1b);
      }
      else {
        if ((*(byte *)(lVar5 + 0x1b) & 0x60) == 0) goto LAB_003cd360;
LAB_003cd50c:
        if ((*(byte *)(lVar2 + 0x1b) & 0x60) == 0) goto LAB_003cd378;
LAB_003cd518:
        if ((*(byte *)(lVar6 + 0x1b) & 0x60) == 0) goto LAB_003cd390;
LAB_003cd524:
        if ((*(byte *)(lVar3 + 0x1b) & 0x60) == 0) goto LAB_003cd3ac;
LAB_003cd534:
        bVar8 = *(byte *)(lVar7 + 0x1b);
      }
      uVar10 = (ulong)bVar8;
      if ((bVar8 & 0x60) == 0) {
        uVar10 = *(ulong *)(lVar7 + 0x40);
        Hint_Prefetch(uVar10,0,0,0);
        Hint_Prefetch(uVar10 + 0x80,0,0,0);
      }
      FUN_003cc8e0(uVar10,param_1,plVar9[6],plVar9[7],param_4);
      Hint_Prefetch(*(long *)(lVar11 + 0x50),0,0,0);
      Hint_Prefetch(*(long *)(lVar11 + 0x50) + 0x80,0,0,0);
      Hint_Prefetch(*(long *)(lVar17 + 0x50),0,0,0);
      Hint_Prefetch(*(long *)(lVar17 + 0x50) + 0x80,0,0,0);
      Hint_Prefetch(*(long *)(lVar12 + 0x50),0,0,0);
      Hint_Prefetch(*(long *)(lVar12 + 0x50) + 0x80,0,0,0);
      Hint_Prefetch(*(long *)(lVar18 + 0x50),0,0,0);
      Hint_Prefetch(*(long *)(lVar18 + 0x50) + 0x80,0,0,0);
      Hint_Prefetch(*(long *)(lVar13 + 0x50),0,0,0);
      Hint_Prefetch(*(long *)(lVar13 + 0x50) + 0x80,0,0,0);
      Hint_Prefetch(*(long *)(lVar19 + 0x50),0,0,0);
      Hint_Prefetch(*(long *)(lVar19 + 0x50) + 0x80,0,0,0);
      lVar15 = *(long *)(lVar14 + 0x50);
      Hint_Prefetch(lVar15,0,0,0);
      Hint_Prefetch(lVar15 + 0x80,0,0,0);
      Hint_Prefetch(*(long *)(lVar20 + 0x50),0,0,0);
      Hint_Prefetch(*(long *)(lVar20 + 0x50) + 0x80,0,0,0);
      FUN_003cc8e0(lVar15,param_1,plVar9[9],plVar9[10],param_4);
      uVar16 = uVar16 + 1;
      uVar21 = uVar21 + 4;
      plVar9 = plVar9 + 0xc;
    } while (uVar16 < param_3 >> 2);
  }
  if (uVar21 < param_3) {
    lVar15 = (ulong)param_3 - (ulong)uVar21;
    param_2 = param_2 + (ulong)uVar21 * 3 + 1;
    do {
      FUN_003cc8e0(param_1,param_2[-1],*param_2,param_4);
      param_2 = param_2 + 3;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}


