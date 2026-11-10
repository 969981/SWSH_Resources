/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e3180; name: FUN_003e3180
 */


void FUN_003e3180(long param_1,long *param_2)

{
  uint uVar1;
  void *__s;
  uint uVar2;
  long lVar3;
  undefined1 auStack_88 [40];
  
  *(undefined4 *)(param_1 + 0x18a0) = 1;
  *(long **)(param_1 + 0x1898) = param_2;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x20))(param_2);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(*(long *)(param_1 + 0x1898) + 0x10);
  }
  *(undefined4 *)(param_1 + 0x1868) = 1;
  *(long *)(param_1 + 0x1860) = param_1 + 0x1880;
  (**(code **)(*(long *)(param_1 + 0x1880) + 0x20))(param_1 + 0x1880);
  *(undefined8 *)(param_1 + 0x1858) = *(undefined8 *)(*(long *)(param_1 + 0x1860) + 0x10);
  *(undefined4 *)(param_1 + 0x1830) = 1;
  *(long *)(param_1 + 0x1828) = param_1 + 0x1848;
  (**(code **)(*(long *)(param_1 + 0x1848) + 0x20))(param_1 + 0x1848);
  *(undefined8 *)(param_1 + 0x1820) = *(undefined8 *)(*(long *)(param_1 + 0x1828) + 0x10);
  FUN_00111ab0(*(long *)(param_1 + 0x720) + 0x28);
  (**(code **)(**(long **)(*(long *)(param_1 + 0x720) + 0x6e8) + 0xa8))(auStack_88);
  (**(code **)(**(long **)(*(long *)(param_1 + 0x720) + 0x6e8) + 0x88))();
  lVar3 = *(long *)(param_1 + 0x728);
  uVar1 = *(int *)(*(long *)(param_1 + 0x1128) + 8) + 0x1fU >> 5;
  uVar2 = *(uint *)(lVar3 + 0x78);
  if ((uVar2 & 0x7fffffff) < uVar1) {
    if ((-1 < (int)uVar2) && (*(long *)(lVar3 + 0x70) != 0)) {
      (**(code **)(**(long **)(lVar3 + 0x80) + 0x18))();
    }
    *(uint *)(lVar3 + 0x78) = uVar1;
    __s = (void *)(**(code **)(**(long **)(lVar3 + 0x80) + 0x10))
                            (*(long **)(lVar3 + 0x80),uVar1 << 2,"./../../Common/src\\CmBitMap.h",
                             0x1ce);
    uVar2 = *(uint *)(lVar3 + 0x78);
    *(void **)(lVar3 + 0x70) = __s;
  }
  else {
    __s = *(void **)(lVar3 + 0x70);
  }
                    /* WARNING: Subroutine does not return */
  memset(__s,0,(ulong)(uVar2 << 2));
}


