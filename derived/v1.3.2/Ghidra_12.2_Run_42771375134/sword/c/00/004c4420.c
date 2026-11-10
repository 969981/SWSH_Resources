/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c4420; name: FUN_004c4420
 */


void FUN_004c4420(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    return;
  }
  FUN_004c2cc0(param_1);
  puVar2 = PTR_DAT_02712a90;
  if (param_3 != 0) {
    lVar3 = *(long *)(param_1 + 0x68);
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        while (lVar4 = lVar3, param_3 <= *(uint *)(lVar4 + 4)) {
          *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) - param_3;
          lVar3 = *(long *)(lVar4 + 8);
          lVar5 = lVar4;
          if (*(long *)(lVar4 + 8) == 0) goto LAB_004c44f0;
        }
        lVar3 = *(long *)(lVar4 + 8);
        plVar1 = (long *)(param_1 + 0x68);
        if (*(long *)(param_1 + 0x68) != lVar4) {
          plVar1 = (long *)(lVar5 + 8);
        }
        *plVar1 = lVar3;
        if (*(long *)(param_1 + 0x60) == lVar4) {
          *(long *)(param_1 + 0x60) = lVar5;
        }
        FUN_004c2b30(param_1,param_2,lVar4,*(undefined4 *)(lVar4 + 4),0,0,0);
        FUN_00404870(*(undefined4 *)puVar2,lVar4);
      } while (lVar3 != 0);
    }
  }
LAB_004c44f0:
  FUN_004c2ce0(param_1);
  return;
}


