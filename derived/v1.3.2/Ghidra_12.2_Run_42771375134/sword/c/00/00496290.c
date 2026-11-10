/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00496290; name: FUN_00496290
 */


void FUN_00496290(long param_1,long param_2,uint param_3,byte param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(ushort *)(param_1 + 0x38) == param_3) {
    if (*(ushort *)(param_1 + 0x38) == 0) goto LAB_00496378;
  }
  else {
    if (*(long *)(param_1 + 0x20) != 0) {
      *(undefined2 *)(param_1 + 0x38) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (param_3 != 0) {
      pvVar2 = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)param_3 * 0x28);
      if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        memset(pvVar2,0,(ulong)param_3 * 0x28);
      }
      goto LAB_00496378;
    }
    if (*(short *)(param_1 + 0x38) == 0) goto LAB_00496378;
  }
  lVar3 = 0;
  uVar4 = 0;
  do {
    pvVar2 = (void *)(param_2 + lVar3);
    memcpy((void *)(*(long *)(param_1 + 0x20) + lVar3),pvVar2,0x24);
    uVar4 = uVar4 + 1;
    lVar1 = *(long *)(param_1 + 0x20) + lVar3;
    lVar3 = lVar3 + 0x28;
    *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)((long)pvVar2 + 0x24);
  } while (uVar4 < *(ushort *)(param_1 + 0x38));
LAB_00496378:
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xf8 | param_4 & 7;
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 1;
  return;
}


