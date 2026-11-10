/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dc680; name: FUN_003dc680
 */


void FUN_003dc680(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  ulong uVar13;
  undefined1 auStack_48 [8];
  undefined1 auStack_38 [8];
  
  if (*(undefined8 **)(param_1 + 0x8a0) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x8a0))();
  }
  lVar9 = *(long *)(param_1 + 0x1048);
  *(undefined4 *)(param_1 + 0x960) = 0;
  *(int *)(param_1 + 0x7c0) = *(int *)(param_1 + 0x7c0) + 1;
  if (lVar9 != 0) {
    FUN_003cbfd0(lVar9);
                    /* try { // try from 003dc6d0 to 003dc6e3 has its CatchHandler @ 003dcd48 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  lVar9 = *(long *)(param_1 + 0x1050);
  *(undefined8 *)(param_1 + 0x1048) = 0;
  if (lVar9 != 0) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  puVar11 = *(undefined8 **)(param_1 + 0x1130);
  *(undefined8 *)(param_1 + 0x1050) = 0;
  if (puVar11 != (undefined8 *)0x0) {
    lVar9 = puVar11[10];
    piVar12 = *(int **)(param_1 + 0x1140);
    (**(code **)*puVar11)(puVar11);
    if ((char)piVar12[8] == '\0') {
      iVar5 = piVar12[6];
    }
    else {
      FUN_003f1c40(*(undefined8 *)(piVar12 + 4),piVar12[6],auStack_38,auStack_48,0x20);
      iVar5 = piVar12[6];
    }
    iVar5 = iVar5 + -1;
    if (-1 < iVar5) {
      iVar7 = 0;
      do {
        uVar2 = iVar5 + iVar7 >> 1;
        puVar8 = *(undefined8 **)(*(long *)(piVar12 + 4) + (ulong)uVar2 * 0x18);
        puVar1 = (undefined8 *)((long)puVar8 + (ulong)(uint)(*piVar12 * piVar12[1]));
        if ((puVar8 <= puVar11 && puVar11 <= puVar1) && (puVar11 < puVar8 || puVar1 != puVar11)) {
          lVar10 = *(long *)(piVar12 + 4) + (ulong)uVar2 * 0x18;
          *puVar11 = *(undefined8 *)(lVar10 + 8);
          *(undefined8 **)(lVar10 + 8) = puVar11;
          if ((char)piVar12[8] != '\0') {
            piVar12[2] = uVar2;
          }
          *(undefined1 *)(piVar12 + 8) = 0;
          thunk_FUN_003ba2c0(lVar9);
          if (lVar9 == 0) goto LAB_003dc80c;
          goto LAB_003dc7f8;
        }
        if (puVar8 < puVar11) {
          iVar7 = uVar2 + 1;
        }
        else {
          iVar5 = uVar2 - 1;
        }
      } while (iVar7 <= iVar5);
    }
    thunk_FUN_003ba2c0(lVar9);
    if (lVar9 != 0) {
LAB_003dc7f8:
                    /* try { // try from 003dc7f8 to 003dc80b has its CatchHandler @ 003dcd04 */
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
    }
  }
LAB_003dc80c:
  FUN_003dcd50(param_1);
  lVar9 = *(long *)(param_1 + 0x720);
  if (lVar9 != 0) {
    if (*(long **)(lVar9 + 0x6f0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar9 + 0x6f0) + 0x10))();
      lVar9 = *(long *)(param_1 + 0x720);
      *(undefined8 *)(lVar9 + 0x6f0) = 0;
    }
    if (*(long **)(lVar9 + 0x6e8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar9 + 0x6e8) + 0x10))();
      *(undefined8 *)(*(long *)(param_1 + 0x720) + 0x6e8) = 0;
    }
  }
  lVar9 = *(long *)(param_1 + 0x800);
  if (lVar9 != 0) {
    FUN_003dcfb0(lVar9);
                    /* try { // try from 003dc864 to 003dc877 has its CatchHandler @ 003dcd44 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  lVar9 = *(long *)(param_1 + 0x820);
  *(undefined8 *)(param_1 + 0x800) = 0;
  if (lVar9 != 0) {
    FUN_003dd080(lVar9);
                    /* try { // try from 003dc88c to 003dc89f has its CatchHandler @ 003dcd40 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  puVar11 = *(undefined8 **)(param_1 + 0x808);
  *(undefined8 *)(param_1 + 0x820) = 0;
  if (puVar11 != (undefined8 *)0x0) {
    if (((-1 < (int)*(uint *)((long)puVar11 + 0x14)) &&
        ((*(uint *)((long)puVar11 + 0x14) & 0x7fffffff) != 0)) && (puVar11[1] != 0)) {
                    /* try { // try from 003dc8d0 to 003dc8d3 has its CatchHandler @ 003dccfc */
      (**(code **)(*(long *)*puVar11 + 0x18))();
    }
                    /* try { // try from 003dc8d4 to 003dc8e7 has its CatchHandler @ 003dcd3c */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,puVar11);
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x10f8);
  *(undefined8 *)(param_1 + 0x808) = 0;
  if (*(uint *)(param_1 + 0x10f8) != 0) {
    lVar9 = 0;
    uVar13 = 0;
    do {
      lVar10 = *(long *)(*(long *)(param_1 + 0x10f0) + lVar9);
      if (lVar10 == 0) {
        puVar11 = (undefined8 *)(*(long *)(param_1 + 0x10f0) + uVar13 * 8);
      }
      else {
        FUN_003dd190(lVar10);
                    /* try { // try from 003dc910 to 003dc923 has its CatchHandler @ 003dcd4c */
        plVar3 = (long *)FUN_00400d30();
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar10);
        uVar6 = (ulong)*(uint *)(param_1 + 0x10f8);
        puVar11 = (undefined8 *)(*(long *)(param_1 + 0x10f0) + lVar9);
      }
      uVar13 = uVar13 + 1;
      lVar9 = lVar9 + 8;
      *puVar11 = 0;
    } while (uVar13 < uVar6);
  }
  lVar9 = *(long *)(param_1 + 0x1160);
  if (lVar9 != 0) {
    FUN_003dd270(lVar9);
                    /* try { // try from 003dc95c to 003dc96f has its CatchHandler @ 003dcd38 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  lVar9 = *(long *)(param_1 + 0x1150);
  if (lVar9 != 0) {
    FUN_003dd350(lVar9);
                    /* try { // try from 003dc980 to 003dc993 has its CatchHandler @ 003dcd34 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  lVar9 = *(long *)(param_1 + 0x1168);
  if (lVar9 != 0) {
    FUN_003dd430(lVar9);
                    /* try { // try from 003dc9a4 to 003dc9b7 has its CatchHandler @ 003dcd30 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  lVar9 = *(long *)(param_1 + 0x1140);
  if (lVar9 != 0) {
    FUN_003f2300(lVar9);
                    /* try { // try from 003dc9c8 to 003dc9db has its CatchHandler @ 003dcd2c */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  lVar9 = *(long *)(param_1 + 0x1138);
  if (lVar9 != 0) {
    FUN_003f2300(lVar9);
                    /* try { // try from 003dc9ec to 003dc9ff has its CatchHandler @ 003dcd28 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  lVar9 = *(long *)(param_1 + 0x1148);
  if (lVar9 != 0) {
    FUN_003f2300(lVar9);
                    /* try { // try from 003dca10 to 003dca23 has its CatchHandler @ 003dcd24 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  lVar9 = *(long *)(param_1 + 0x1158);
  if (lVar9 != 0) {
    FUN_003dd510(lVar9);
                    /* try { // try from 003dca34 to 003dca47 has its CatchHandler @ 003dcd20 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  if (*(long **)(param_1 + 0x928) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x928) + 8))();
  }
  if (*(long **)(param_1 + 0x930) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x930) + 8))();
  }
  if (*(long **)(param_1 + 0x950) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x950) + 8))();
  }
  plVar3 = *(long **)(param_1 + 0x858);
  if (((int)*(uint *)((long)plVar3 + 0xc) < 0) ||
     ((*(uint *)((long)plVar3 + 0xc) & 0x7fffffff) == 0)) {
LAB_003dcab8:
    if (plVar3 != (long *)0x0) goto LAB_003dcabc;
  }
  else {
    lVar9 = *plVar3;
    if (lVar9 != 0) {
                    /* try { // try from 003dcaa0 to 003dcab3 has its CatchHandler @ 003dcd00 */
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
      plVar3 = *(long **)(param_1 + 0x858);
      goto LAB_003dcab8;
    }
LAB_003dcabc:
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,plVar3);
  }
  lVar9 = *(long *)(param_1 + 0x1128);
  if (lVar9 != 0) {
    FUN_003dd5f0(lVar9);
                    /* try { // try from 003dcae0 to 003dcaf3 has its CatchHandler @ 003dcd1c */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  lVar9 = *(long *)(param_1 + 0x1120);
  if (lVar9 != 0) {
    FUN_003dd5f0(lVar9);
                    /* try { // try from 003dcb04 to 003dcb17 has its CatchHandler @ 003dcd18 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  lVar9 = *(long *)(param_1 + 0x1118);
  if (lVar9 != 0) {
    FUN_003dd5f0(lVar9);
                    /* try { // try from 003dcb28 to 003dcb3b has its CatchHandler @ 003dcd14 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  lVar9 = *(long *)(param_1 + 0x1110);
  if (lVar9 != 0) {
    FUN_003dd5f0(lVar9);
                    /* try { // try from 003dcb4c to 003dcb5f has its CatchHandler @ 003dcd10 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  lVar9 = *(long *)(param_1 + 0x1100);
  if (lVar9 != 0) {
                    /* try { // try from 003dcb68 to 003dcb7b has its CatchHandler @ 003dcd0c */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  FUN_001308f0(*(undefined8 *)(param_1 + 0x728));
  (**(code **)(**(long **)(param_1 + 0x730) + 0x50))();
  (**(code **)(**(long **)(param_1 + 0x768) + 0x10))();
  lVar9 = *(long *)(param_1 + 0x768);
  if (lVar9 != 0) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  (**(code **)**(undefined8 **)(param_1 + 0x760))();
  lVar9 = *(long *)(param_1 + 0x760);
  if (lVar9 != 0) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  (**(code **)**(undefined8 **)(param_1 + 0x750))();
  FUN_001213e0(*(undefined8 *)(param_1 + 0x738));
  FUN_00113420(*(undefined8 *)(param_1 + 0x748));
  lVar9 = *(long *)(param_1 + 0x748);
  if (lVar9 != 0) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
  }
  if (*(long **)(param_1 + 0x1ed0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1ed0) + 0x60))();
  }
  lVar9 = *(long *)(param_1 + 0x720);
  if (lVar9 != 0) {
    FUN_0011d270(lVar9);
                    /* try { // try from 003dcc4c to 003dcc5f has its CatchHandler @ 003dcd08 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
    *(undefined8 *)(param_1 + 0x720) = 0;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x810);
  if (((int)*(uint *)((long)puVar11 + 0x14) < 0) ||
     ((*(uint *)((long)puVar11 + 0x14) & 0x7fffffff) == 0)) {
LAB_003dcc94:
    if (puVar11 == (undefined8 *)0x0) goto LAB_003dccac;
  }
  else if (puVar11[1] != 0) {
                    /* try { // try from 003dcc8c to 003dcc8f has its CatchHandler @ 003dccf8 */
    (**(code **)(*(long *)*puVar11 + 0x18))();
    puVar11 = *(undefined8 **)(param_1 + 0x810);
    goto LAB_003dcc94;
  }
  plVar3 = (long *)FUN_00400d30();
  (**(code **)(*plVar3 + 0x18))(plVar3,puVar11);
LAB_003dccac:
  if (*(undefined8 **)(param_1 + 0x758) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x758))();
    lVar9 = *(long *)(param_1 + 0x758);
    if (lVar9 != 0) {
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar9);
    }
    *(undefined8 *)(param_1 + 0x758) = 0;
  }
  return;
}


