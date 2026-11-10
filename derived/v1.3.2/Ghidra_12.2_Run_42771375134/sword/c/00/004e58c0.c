/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e58c0; name: FUN_004e58c0
 */


undefined8 FUN_004e58c0(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  size_t sVar8;
  void *__dest;
  undefined8 uVar9;
  char *__s;
  ulong __n;
  
  puVar5 = PTR_DAT_02712de0;
  uVar9 = *(undefined8 *)PTR_DAT_02712de0;
  uVar6 = FUN_00435950();
  lVar7 = FUN_004361b0(uVar9,0x36,(uVar6 & 0xffff) + 0x38);
  *(undefined8 *)(lVar7 + 0x20) = 0x42c8000000000000;
  *(undefined8 *)(lVar7 + 0x28) = 0x13f800000;
  *(undefined4 *)(lVar7 + 4) = 0;
  *(undefined8 *)(lVar7 + 8) = param_1;
  *(undefined8 *)(lVar7 + 0x10) = 0;
  *(undefined1 *)(lVar7 + 0x18) = 0;
  *(undefined8 *)(lVar7 + 0x30) = 0x3f800000ffffffff;
  bVar2 = *(byte *)(lVar7 + 0x38);
  *(byte *)(lVar7 + 0x38) = bVar2 | 1;
  __s = (char *)*param_2;
  *(char **)(lVar7 + 0x10) = __s;
  *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)((long)param_2 + 0x14);
  *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(lVar7 + 0x2c) = *(undefined4 *)((long)param_2 + 0x1c);
  *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(lVar7 + 0x34) = *(undefined4 *)((long)param_2 + 0x24);
  *(byte *)(lVar7 + 0x38) = bVar2 & 0xfe | *(byte *)(param_2 + 5) & 1;
  if (__s != (char *)0x0) {
    sVar8 = strlen(__s);
    if ((int)sVar8 == 0) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
    }
    else {
      __n = (ulong)((int)sVar8 + 1);
      __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02713640,__n);
      *(void **)(lVar7 + 0x10) = __dest;
      if (__dest != (void *)0x0) {
        memcpy(__dest,__s,__n);
        *(undefined1 *)(lVar7 + 0x18) = 1;
      }
    }
  }
  piVar1 = (int *)(*(long *)puVar5 + 0x94);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return 1;
}


