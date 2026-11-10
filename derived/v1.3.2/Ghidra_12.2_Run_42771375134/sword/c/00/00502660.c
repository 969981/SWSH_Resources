/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00502660; name: FUN_00502660
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00502660(long param_1,undefined8 *param_2,byte param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  byte local_24 [4];
  
  local_24[0] = param_3 & 1;
  plVar11 = (long *)param_2[1];
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11;
    do {
      plVar12 = (long *)*plVar12;
      param_2[1] = plVar12;
      if ((long *)*param_2 == plVar11) {
        *param_2 = 0;
        bVar6 = *(byte *)((long)plVar11 + 0x14);
        if ((bVar6 & 7) != 0) goto LAB_005026b4;
LAB_005026ec:
        *(byte *)((long)plVar11 + 0x14) = bVar6 & 0xf8 | 2;
        lVar7 = *(long *)plVar11[1];
        uVar3 = *(uint *)((long *)plVar11[1] + 3);
        uVar4 = *(uint *)(param_1 + 0x8c);
        uVar1 = lVar7 + (ulong)*(uint *)(plVar11 + 2);
        iVar2 = uVar3 - *(uint *)(plVar11 + 2);
        if (uVar1 < uVar4 && (ulong)uVar4 < lVar7 + (ulong)uVar3) {
          iVar2 = uVar4 - (int)uVar1;
        }
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) - iVar2;
        *(undefined4 *)(plVar11 + 2) = *(undefined4 *)(plVar11[1] + 0x18);
        if (*(long *)(param_1 + 0xd0) == 0) {
          *(long **)(param_1 + 0xd0) = plVar11;
          *plVar11 = 0;
        }
        else {
          *plVar11 = *(long *)(param_1 + 0xd0);
          *(long **)(param_1 + 0xd0) = plVar11;
        }
      }
      else {
        bVar6 = *(byte *)((long)plVar11 + 0x14);
        if ((bVar6 & 7) == 0) goto LAB_005026ec;
LAB_005026b4:
        FUN_004fdf30(param_1,plVar11,0);
        FUN_004ffeb0(*(undefined8 *)(param_1 + 0x50));
      }
      if (plVar12 == (long *)0x0) break;
      plVar11 = (long *)param_2[1];
      if (plVar11 != plVar12) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    } while( true );
  }
  plVar11 = *(long **)(param_1 + 200);
  if ((plVar11 != (long *)0x0) && (bVar6 = *(byte *)((long)plVar11 + 0x14), (bVar6 & 7) != 0)) {
    do {
      if ((bVar6 & 7) == 2) {
        plVar12 = *(long **)(param_1 + 0xd0);
        if (plVar12 != (long *)0x0) {
          plVar8 = (long *)0x0;
          plVar10 = plVar12;
          do {
            plVar9 = (long *)*plVar10;
            if (plVar11 == plVar10) {
              if (plVar11 == plVar12) {
                *(long **)(param_1 + 0xd0) = plVar9;
              }
              else {
                *plVar8 = (long)plVar9;
              }
              break;
            }
            plVar8 = plVar10;
            plVar10 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
      else if (*plVar11 == 0) {
        *(undefined8 *)(param_1 + 0xc0) = 0;
        *(undefined8 *)(param_1 + 200) = 0;
      }
      else {
        *(long *)(param_1 + 200) = *plVar11;
      }
      FUN_004fdf30(param_1,plVar11,1);
      FUN_004ffeb0(*(undefined8 *)(param_1 + 0x50));
      plVar11 = *(long **)(param_1 + 200);
    } while ((plVar11 != (long *)0x0) && (bVar6 = *(byte *)((long)plVar11 + 0x14), (bVar6 & 7) != 0)
            );
  }
  if (*(long **)(param_1 + 0xd0) != (long *)0x0) {
    bVar5 = true;
    plVar11 = *(long **)(param_1 + 0xd0);
    do {
      plVar12 = (long *)*plVar11;
      FUN_005036a0(plVar11,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x608),bVar5,local_24);
      bVar5 = local_24[0] == 0;
      plVar11 = plVar12;
    } while (plVar12 != (long *)0x0);
  }
  return;
}


