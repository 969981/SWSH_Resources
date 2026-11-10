/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e7980; name: FUN_004e7980
 */


void FUN_004e7980(int *param_1,int *param_2,long param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  char *__s;
  size_t sVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  
  do {
    while( true ) {
      if (param_1 == param_2) {
        return;
      }
      iVar9 = *param_1;
      if (iVar9 != 0) break;
      iVar9 = *(int *)(param_3 + 0x90);
      uVar10 = param_1[4];
      if (uVar10 == 0) goto LAB_004e7a78;
LAB_004e79d4:
      iVar11 = 0;
      lVar6 = (ulong)uVar10 * 0x48;
      plVar7 = (long *)(*(long *)(param_1 + 2) + 8);
      do {
        lVar6 = lVar6 + -0x48;
        iVar11 = iVar11 + (uint)(*plVar7 == *(long *)(param_3 + 0x30) &&
                                *plVar7 == *(long *)(*(long *)(param_3 + 0xd8) + 0x30));
        plVar7 = plVar7 + 9;
      } while (lVar6 != 0);
      lVar6 = FUN_004f4930(param_3,iVar9);
      if (iVar11 == 0) goto LAB_004e7a88;
      if ((lVar6 != 0) || (lVar6 = FUN_004f49b0(param_3,iVar9), lVar6 != 0)) {
        if ((param_4 & 1) == 0) {
          uVar10 = *(uint *)(lVar6 + 4);
          uVar3 = FUN_004e7bb0(lVar6,uVar10 + iVar11);
          if ((uVar3 & 1) == 0) {
            return;
          }
          uVar5 = param_1[4];
        }
        else {
          *(int *)(lVar6 + 4) = iVar11;
          uVar3 = FUN_004e7bb0(lVar6,iVar11);
          if ((uVar3 & 1) == 0) {
            return;
          }
          uVar10 = 0;
          uVar5 = param_1[4];
        }
        if (uVar5 != 0) {
          lVar12 = 0;
          uVar3 = 0;
          do {
            puVar1 = (undefined4 *)(*(long *)(param_1 + 2) + lVar12);
            if (*(long *)(puVar1 + 2) == *(long *)(param_3 + 0x20)) {
              lVar8 = (ulong)uVar10 * 0x40;
              *(undefined4 *)(*(long *)(lVar6 + 0x10) + lVar8 + 0x10) = *puVar1;
              lVar13 = *(long *)(lVar6 + 0x10) + lVar8;
              *(undefined4 *)(lVar13 + 0x24) = puVar1[8];
              *(undefined8 *)(lVar13 + 0x1c) = *(undefined8 *)(puVar1 + 6);
              *(undefined8 *)(lVar13 + 0x14) = *(undefined8 *)(puVar1 + 4);
              lVar13 = *(long *)(lVar6 + 0x10) + lVar8;
              *(undefined4 *)(lVar13 + 0x38) = puVar1[0xd];
              *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)(puVar1 + 0xb);
              *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(puVar1 + 9);
              lVar13 = *(long *)(lVar6 + 0x10);
              __s = *(char **)(puVar1 + 0xe);
              *(char **)(lVar13 + lVar8 + 0x48) = __s;
              uVar2 = 0;
              if (__s != (char *)0x0) {
                sVar4 = strlen(__s);
                uVar2 = (undefined4)sVar4;
              }
              *(undefined4 *)(lVar13 + (ulong)uVar10 * 0x40 + 0x40) = uVar2;
              uVar5 = param_1[4];
              uVar10 = uVar10 + 1;
            }
            uVar3 = uVar3 + 1;
            lVar12 = lVar12 + 0x48;
          } while (uVar3 < uVar5);
        }
      }
LAB_004e79b8:
      param_1 = param_1 + 6;
    }
    uVar10 = param_1[4];
    if (uVar10 != 0) goto LAB_004e79d4;
LAB_004e7a78:
    lVar6 = FUN_004f4930(param_3,iVar9);
LAB_004e7a88:
    if (((param_4 & 1) == 0) && ((lVar6 == 0 || (*(int *)(lVar6 + 4) != 0)))) goto LAB_004e79b8;
    FUN_004f4b00(param_3,iVar9);
    param_1 = param_1 + 6;
  } while( true );
}


