/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006934a0; name: FUN_006934a0
 */


undefined8 FUN_006934a0(long param_1,int param_2)

{
  uint uVar1;
  void *__dest;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  __dest = *(void **)(lVar4 + 0x40);
  if (__dest == (void *)0x0) {
    __dest = (void *)(**(code **)(param_1 + 0x40))
                               (*(undefined8 *)(param_1 + 0x50),
                                1 << (ulong)(*(uint *)(lVar4 + 0x30) & 0x1f),1);
    *(void **)(lVar4 + 0x40) = __dest;
    if (__dest == (void *)0x0) {
      return 1;
    }
  }
  uVar2 = *(uint *)(lVar4 + 0x34);
  if (uVar2 == 0) {
    uVar2 = 1 << (ulong)(*(uint *)(lVar4 + 0x30) & 0x1f);
    *(uint *)(lVar4 + 0x34) = uVar2;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    uVar3 = param_2 - *(int *)(param_1 + 0x20);
    if (uVar2 <= uVar3) goto LAB_00693578;
  }
  else {
    uVar3 = param_2 - *(int *)(param_1 + 0x20);
    if (uVar2 <= uVar3) {
LAB_00693578:
      memcpy(__dest,(void *)(*(long *)(param_1 + 0x18) - (ulong)uVar2),(ulong)uVar2);
      *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar4 + 0x34);
      *(undefined4 *)(lVar4 + 0x3c) = 0;
      return 0;
    }
  }
  uVar2 = uVar2 - *(uint *)(lVar4 + 0x3c);
  uVar1 = uVar3;
  if (uVar2 <= uVar3) {
    uVar1 = uVar2;
  }
  memcpy((void *)((long)__dest + (ulong)*(uint *)(lVar4 + 0x3c)),
         (void *)(*(long *)(param_1 + 0x18) - (ulong)uVar3),(ulong)uVar1);
  uVar3 = uVar3 - uVar1;
  if (uVar3 == 0) {
    uVar2 = *(int *)(lVar4 + 0x3c) + uVar1;
    uVar3 = 0;
    if (uVar2 != *(uint *)(lVar4 + 0x34)) {
      uVar3 = uVar2;
    }
    *(uint *)(lVar4 + 0x3c) = uVar3;
    if (*(uint *)(lVar4 + 0x38) < *(uint *)(lVar4 + 0x34)) {
      *(uint *)(lVar4 + 0x38) = *(uint *)(lVar4 + 0x38) + uVar1;
    }
  }
  else {
    memcpy(*(void **)(lVar4 + 0x40),(void *)(*(long *)(param_1 + 0x18) - (ulong)uVar3),(ulong)uVar3)
    ;
    *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar4 + 0x34);
    *(uint *)(lVar4 + 0x3c) = uVar3;
  }
  return 0;
}


