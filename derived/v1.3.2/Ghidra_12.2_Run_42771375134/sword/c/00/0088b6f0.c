/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088b6f0; name: FUN_0088b6f0
 */


/* WARNING: Removing unreachable block (ram,0x0088b8a8) */

undefined8 FUN_0088b6f0(uint *param_1,undefined1 *param_2,long param_3,uint param_4,ulong param_5)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  byte bVar9;
  undefined8 *puVar10;
  long lVar11;
  
  *param_2 = 0;
  if (*(char *)((long)param_1 + 0x56) == '\0') {
    uVar4 = param_1[0x14];
    if (param_4 != 0) {
      lVar11 = *(long *)(param_1 + (param_5 & 0xffffffff) * 2 + 8);
      if (param_4 == 1) {
        lVar1 = 0;
LAB_0088b97c:
        lVar1 = lVar1 * 4;
        *(float *)(param_3 + lVar1) =
             *(float *)(param_3 + lVar1) +
             *(float *)(lVar11 + (ulong)uVar4 * 4 + lVar1) * (float)param_1[7];
      }
      else {
        lVar1 = 0;
        pfVar2 = (float *)(param_3 + 4);
        pfVar3 = (float *)(lVar11 + (ulong)uVar4 * 4 + 4);
        do {
          lVar1 = lVar1 + 2;
          pfVar2[-1] = pfVar2[-1] + pfVar3[-1] * (float)param_1[7];
          *pfVar2 = *pfVar2 + *pfVar3 * (float)param_1[7];
          pfVar2 = pfVar2 + 2;
          pfVar3 = pfVar3 + 2;
        } while ((ulong)param_4 - ((ulong)param_4 & 1) != lVar1);
        if ((param_4 & 1) != 0) goto LAB_0088b97c;
      }
      uVar4 = param_1[0x14];
    }
    param_1[0x14] = uVar4 + param_4;
    plVar7 = *(long **)(param_1 + 0x16);
    *(undefined1 *)((long)param_1 + 0x55) = 0;
    if (plVar7 != (long *)0x0) goto LAB_0088b708;
LAB_0088b9b0:
    bVar9 = 0;
    if (*param_1 <= param_1[0x14]) goto LAB_0088b9c4;
  }
  else {
    plVar7 = *(long **)(param_1 + 0x16);
    *(undefined1 *)((long)param_1 + 0x55) = 0;
    if (plVar7 == (long *)0x0) goto LAB_0088b9b0;
LAB_0088b708:
    puVar5 = (undefined8 *)*plVar7;
    if (puVar5 == (undefined8 *)plVar7[1]) goto LAB_0088b9b0;
    if (param_4 == 0) {
      do {
        puVar10 = (undefined8 *)*puVar5;
        if ((*(char *)(puVar10 + 2) == '\0') || (*(char *)((long)puVar10 + 0x11) == '\0')) {
          bVar9 = 1;
          if ((*(int *)(puVar10 + 1) == 0) &&
             (*(undefined1 *)(puVar10 + 2) = 1, *(uint *)*puVar10 <= *(uint *)((long)puVar10 + 0xc))
             ) {
            bVar9 = 0;
            *(undefined1 *)((long)puVar10 + 0x11) = 1;
          }
        }
        else {
          bVar9 = 0;
        }
        bVar9 = *(byte *)((long)param_1 + 0x55) | bVar9;
        *(byte *)((long)param_1 + 0x55) = bVar9;
        puVar5 = puVar5 + 1;
      } while (puVar5 != *(undefined8 **)(*(long *)(param_1 + 0x16) + 8));
    }
    else {
      uVar8 = (ulong)param_4;
      do {
        puVar10 = (undefined8 *)*puVar5;
        lVar11 = *(long *)(param_1 + (param_5 & 0xffffffff) * 2 + 8);
        if ((*(char *)(puVar10 + 2) == '\0') || (*(char *)((long)puVar10 + 0x11) == '\0')) {
          uVar4 = *(uint *)(puVar10 + 1);
          if (*(uint *)(puVar10 + 1) <= param_4) {
            uVar4 = param_4;
          }
          *(uint *)(puVar10 + 1) = uVar4 - param_4;
          if (uVar4 - param_4 == 0) {
            uVar4 = *(uint *)((long)puVar10 + 0xc);
            *(undefined1 *)(puVar10 + 2) = 1;
            if (uVar8 - 1 < 3) {
              lVar1 = 0;
            }
            else {
              lVar1 = 0;
              pfVar2 = (float *)(lVar11 + (ulong)uVar4 * 4 + 8);
              pfVar3 = (float *)(param_3 + 8);
              do {
                lVar1 = lVar1 + 4;
                pfVar3[-2] = pfVar3[-2] + pfVar2[-2] * *(float *)((long)puVar10 + 0x14);
                pfVar3[-1] = pfVar3[-1] + pfVar2[-1] * *(float *)((long)puVar10 + 0x14);
                *pfVar3 = *pfVar3 + *pfVar2 * *(float *)((long)puVar10 + 0x14);
                pfVar3[1] = pfVar3[1] + pfVar2[1] * *(float *)((long)puVar10 + 0x14);
                pfVar2 = pfVar2 + 4;
                pfVar3 = pfVar3 + 4;
              } while (uVar8 - (uVar8 & 3) != lVar1);
            }
            if ((param_4 & 3) != 0) {
              pfVar2 = (float *)(param_3 + lVar1 * 4);
              pfVar3 = (float *)(lVar11 + (lVar1 + (ulong)uVar4) * 4);
              lVar11 = -(uVar8 & 3);
              do {
                lVar11 = lVar11 + 1;
                *pfVar2 = *pfVar2 + *pfVar3 * *(float *)((long)puVar10 + 0x14);
                pfVar2 = pfVar2 + 1;
                pfVar3 = pfVar3 + 1;
              } while (lVar11 != 0);
            }
            uVar4 = *(int *)((long)puVar10 + 0xc) + param_4;
            *(uint *)((long)puVar10 + 0xc) = uVar4;
            if (*(uint *)*puVar10 <= uVar4) {
              bVar9 = 0;
              *(undefined1 *)((long)puVar10 + 0x11) = 1;
              goto LAB_0088b85c;
            }
          }
          bVar9 = 1;
        }
        else {
          bVar9 = 0;
        }
LAB_0088b85c:
        bVar9 = *(byte *)((long)param_1 + 0x55) | bVar9;
        *(byte *)((long)param_1 + 0x55) = bVar9;
        puVar5 = puVar5 + 1;
      } while (puVar5 != *(undefined8 **)(*(long *)(param_1 + 0x16) + 8));
    }
    if (*param_1 <= param_1[0x14]) goto LAB_0088b9c4;
  }
  if (*(char *)((long)param_1 + 0x56) == '\0') {
    return 1;
  }
LAB_0088b9c4:
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)((long)param_1 + 0x56) = 1;
  if (bVar9 == 0) {
    *param_2 = 1;
    plVar7 = *(long **)(param_1 + 0x16);
    *(undefined1 *)((long)param_1 + 0x56) = 0;
    if ((plVar7 != (long *)0x0) && (plVar6 = (long *)*plVar7, (long *)*plVar7 != (long *)plVar7[1]))
    {
      do {
        plVar7 = plVar6 + 1;
        lVar11 = *plVar6;
        *(undefined4 *)(lVar11 + 0xc) = 0;
        *(undefined2 *)(lVar11 + 0x10) = 0;
        plVar6 = plVar7;
      } while (plVar7 != *(long **)(*(long *)(param_1 + 0x16) + 8));
    }
  }
  return 1;
}


