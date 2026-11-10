/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005edea0; name: FUN_005edea0
 */


undefined8 FUN_005edea0(long param_1,long param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  size_t __n;
  char local_40 [16];
  
  uVar4 = (ulong)(*(int *)(param_2 + 0xc) * 2 + 8);
  if (*(ulong *)(param_1 + 0x20) < uVar4) {
    FUN_005c5e00(param_1,uVar4,1);
  }
  FUN_005c5910(local_40,0x10,&DAT_01d28657,*(undefined4 *)(param_2 + 8));
  if (local_40[0] != '\0') {
    __n = 0;
    do {
      pcVar1 = (char *)(((ulong)local_40 | 1) + __n);
      __n = __n + 1;
    } while (*pcVar1 != '\0');
    lVar5 = *(long *)(param_1 + 0x10);
    uVar4 = lVar5 + __n;
    if (*(ulong *)(param_1 + 0x20) <= uVar4) {
      uVar6 = *(ulong *)(param_1 + 0x20) * 2;
      uVar7 = uVar4 + 1;
      if (uVar4 + 1 <= uVar6) {
        uVar7 = uVar6;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar7 = *(long *)(param_1 + 0x18) + lVar5 + __n + 1;
      }
      FUN_005c5e00(param_1,uVar7,1);
      lVar5 = *(long *)(param_1 + 0x10);
      uVar4 = lVar5 + __n;
    }
    memcpy((void *)(*(long *)(param_1 + 8) + lVar5),local_40,__n);
    *(size_t *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + __n;
    *(undefined1 *)(*(long *)(param_1 + 8) + uVar4) = 0;
  }
  if (0 < *(int *)(param_2 + 0xc)) {
    uVar2 = FUN_005c34c0((long)*(int *)(param_2 + 0xc),*(undefined8 *)(param_2 + 0x10));
    uVar3 = FUN_005c3500((long)*(int *)(param_2 + 0xc),*(undefined8 *)(param_2 + 0x10));
    lVar5 = *(long *)(param_1 + 0x10);
    uVar4 = lVar5 + 1;
    if (*(ulong *)(param_1 + 0x20) <= uVar4) {
      uVar4 = lVar5 + 2;
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar7 = *(ulong *)(param_1 + 0x20) * 2;
        if (uVar4 <= uVar7) {
          uVar4 = uVar7;
        }
      }
      else {
        uVar4 = *(long *)(param_1 + 0x18) + uVar4;
      }
      FUN_005c5e00(param_1,uVar4,1);
      lVar5 = *(long *)(param_1 + 0x10);
      uVar4 = lVar5 + 1;
    }
    *(undefined1 *)(*(long *)(param_1 + 8) + lVar5) = 0x5f;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
    *(undefined1 *)(*(long *)(param_1 + 8) + uVar4) = 0;
    FUN_005ee050(param_1,"%x_%x",uVar2,uVar3);
  }
  return 1;
}


