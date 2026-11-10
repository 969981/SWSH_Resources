/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c4350; name: FUN_004c4350
 */


void FUN_004c4350(long param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (((*(byte *)(param_1 + 0x70) & 1) != 0) ||
     (puVar2 = (undefined4 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x10),
     puVar2 == (undefined4 *)0x0)) {
    return;
  }
  uVar1 = *param_2;
  *(undefined8 *)(puVar2 + 2) = 0;
  *puVar2 = uVar1;
  puVar2[1] = param_3;
  plVar3 = (long *)(param_1 + 0x68);
  if (*plVar3 == 0) {
    *(undefined8 *)(puVar2 + 2) = 0;
    *plVar3 = (long)puVar2;
  }
  else {
    lVar5 = *plVar3;
    lVar6 = 0;
    do {
      lVar4 = lVar5;
      lVar5 = lVar4;
      if (param_3 < *(uint *)(lVar4 + 4)) goto LAB_004c43cc;
      lVar5 = *(long *)(lVar4 + 8);
      lVar6 = lVar4;
    } while (lVar5 != 0);
    lVar4 = 0;
LAB_004c43cc:
    *(long *)(puVar2 + 2) = lVar5;
    if (lVar6 != 0) {
      plVar3 = (long *)(lVar6 + 8);
    }
    *plVar3 = (long)puVar2;
    if (lVar4 != 0) {
      return;
    }
  }
  *(undefined4 **)(param_1 + 0x60) = puVar2;
  return;
}


