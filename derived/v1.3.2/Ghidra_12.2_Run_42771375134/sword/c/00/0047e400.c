/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047e400; name: FUN_0047e400
 */


void FUN_0047e400(long param_1,byte param_2,undefined8 param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  size_t __n;
  
  FUN_00484d20();
  puVar2 = PTR_DAT_02712a90;
  if (param_5 == 0 && param_4 == 0) {
    pbVar4 = *(byte **)(param_1 + 0xa0);
    if (pbVar4 != (byte *)0x0) {
      uVar6 = 0;
      lVar7 = -((ulong)(*pbVar4 + 4) & 0x1fc) - (long)pbVar4;
      do {
        if (pbVar4[uVar6 + 1] == param_2) {
          if (lVar7 == 0) {
            return;
          }
          goto LAB_0047e440;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + -8;
      } while (uVar6 < *pbVar4);
    }
  }
  else {
    pbVar4 = *(byte **)(param_1 + 0xa0);
    if (pbVar4 == (byte *)0x0) {
      __n = 0;
    }
    else {
LAB_0047e440:
      __n = (size_t)*pbVar4;
      uVar6 = 0;
      pbVar5 = pbVar4 + ((ulong)(*pbVar4 + 4) & 0x1fc);
      do {
        if (pbVar4[uVar6 + 1] == param_2) {
          if (pbVar5 != (byte *)0x0) goto LAB_0047e550;
          break;
        }
        uVar6 = uVar6 + 1;
        pbVar5 = pbVar5 + 8;
      } while (uVar6 < __n);
    }
    plVar8 = (long *)(param_1 + 0xa0);
    iVar9 = (int)__n;
    uVar1 = iVar9 + 5U & 0x1fc;
    lVar7 = __n + 1;
    puVar3 = (undefined1 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar1 + (int)lVar7 * 8);
    if (puVar3 != (undefined1 *)0x0) {
      if (*plVar8 != 0) {
        memcpy(puVar3 + 1,(void *)(*plVar8 + 1),__n);
        memcpy(puVar3 + uVar1,(void *)(*plVar8 + (ulong)(iVar9 + 4U & 0x1fc)),
               (ulong)(uint)(iVar9 << 3));
        FUN_00404870(*(undefined4 *)puVar2,*plVar8);
      }
      pbVar5 = puVar3 + __n * 8 + (ulong)uVar1;
      puVar3[lVar7] = param_2;
      *puVar3 = (char)lVar7;
      *plVar8 = (long)puVar3;
      if (pbVar5 != (byte *)0x0) {
LAB_0047e550:
        *(int *)pbVar5 = param_4;
        *(int *)(pbVar5 + 4) = param_5;
      }
    }
  }
  return;
}


