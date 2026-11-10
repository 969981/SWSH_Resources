/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004329f0; name: FUN_004329f0
 */


undefined8
FUN_004329f0(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,void *param_6,uint param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined2 uVar5;
  void *__dest;
  long lVar6;
  
  if (param_7 == 0) {
    uVar5 = FUN_00435940();
    puVar4 = PTR_DAT_02712de0;
    lVar6 = FUN_004361b0(*(undefined8 *)PTR_DAT_02712de0,0x33,uVar5);
    *(undefined4 *)(lVar6 + 4) = param_1;
    *(undefined8 *)(lVar6 + 8) = param_2;
    *(undefined4 *)(lVar6 + 0x10) = param_3;
    *(undefined4 *)(lVar6 + 0x14) = param_4;
    *(undefined4 *)(lVar6 + 0x18) = param_5;
    *(undefined8 *)(lVar6 + 0x1c) = 0;
    *(undefined4 *)(lVar6 + 0x24) = 0;
    piVar1 = (int *)(*(long *)puVar4 + 0x94);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,(ulong)param_7);
    if (__dest == (void *)0x0) {
      return 0x34;
    }
    uVar5 = FUN_00435940();
    lVar6 = FUN_004361b0(*(undefined8 *)PTR_DAT_02712de0,0x33,uVar5);
    memcpy(__dest,param_6,(ulong)param_7);
    *(undefined4 *)(lVar6 + 4) = param_1;
    *(undefined8 *)(lVar6 + 8) = param_2;
    *(undefined4 *)(lVar6 + 0x10) = param_3;
    *(undefined4 *)(lVar6 + 0x14) = param_4;
    *(undefined4 *)(lVar6 + 0x18) = param_5;
    *(void **)(lVar6 + 0x1c) = __dest;
    *(uint *)(lVar6 + 0x24) = param_7;
    piVar1 = (int *)(*(long *)PTR_DAT_02712de0 + 0x94);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return 1;
}


