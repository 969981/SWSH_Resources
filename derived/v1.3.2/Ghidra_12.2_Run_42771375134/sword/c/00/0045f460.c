/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045f460; name: FUN_0045f460
 */


undefined8
FUN_0045f460(long param_1,ulong param_2,uint param_3,uint param_4,void *param_5,int param_6)

{
  int *piVar1;
  undefined8 uVar2;
  void *__dest;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + (param_2 & 0xffffffff) * 0x30 + (ulong)param_3 * 0x10 + 8);
  if (*plVar6 != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *plVar6 = 0;
  }
  lVar4 = param_1 + (param_2 & 0xffffffff) * 0x30 + (ulong)param_3 * 0x10;
  puVar5 = (uint *)(lVar4 + 0x10);
  puVar5[0] = 0;
  puVar5[1] = 0;
  uVar2 = 0x1f;
  if ((param_4 != 0) && (param_5 != (void *)0x0)) {
    __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)param_4 * 0xc);
    *plVar6 = (long)__dest;
    if (__dest == (void *)0x0) {
      *puVar5 = 0;
      uVar2 = 0x34;
    }
    else {
      piVar1 = (int *)(lVar4 + 0x14);
      memcpy(__dest,param_5,(ulong)(param_4 * 0xc));
      *puVar5 = param_4;
      *piVar1 = param_6;
      if (param_3 == 0) {
        if (param_6 == 0) {
          *piVar1 = 4;
        }
        else if (param_6 == 2) {
          uVar3 = 0;
          lVar4 = 4;
          do {
            *(float *)(*plVar6 + lVar4) = *(float *)(*plVar6 + lVar4) + 1.0;
            uVar3 = uVar3 + 1;
            lVar4 = lVar4 + 0xc;
          } while (uVar3 < *puVar5);
          *piVar1 = 0;
        }
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


