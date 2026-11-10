/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d4b80; name: FUN_007d4b80
 */


void FUN_007d4b80(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *__dest;
  int local_24;
  
  if ((((*(long *)(param_1 + 0x38) != 0) && (lVar6 = *(long *)(param_1 + 0xb0), lVar6 != 0)) &&
      (*(long *)(param_1 + 0x110) != 0)) &&
     ((*(long *)(param_1 + 0xd0) != 0 && (*(long *)(param_1 + 0xf0) != 0)))) {
    FUN_007cddc0(lVar6);
    uVar4 = FUN_007ce5a0(lVar6);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x1b8) != 0) {
        __dest = *(void **)(param_1 + 0x1b0);
        do {
          while (uVar4 = FUN_007d53a0(param_1,__dest), (uVar4 & 1) != 0) {
            lVar6 = *(long *)(param_1 + 0x1b8);
            __n = (*(long *)(param_1 + 0x1b0) + lVar6 * 0x30) - ((long)__dest + 0x30);
            if (__n != 0) {
              memmove(__dest,(void *)((long)__dest + 0x30),__n);
              lVar6 = *(long *)(param_1 + 0x1b8);
            }
            *(long *)(param_1 + 0x1b8) = lVar6 + -1;
            if ((void *)(*(long *)(param_1 + 0x1b0) + (lVar6 + -1) * 0x30) == __dest)
            goto LAB_007d4c44;
          }
          __dest = (void *)((long)__dest + 0x30);
        } while ((void *)(*(long *)(param_1 + 0x1b0) + *(long *)(param_1 + 0x1b8) * 0x30) != __dest)
        ;
      }
LAB_007d4c44:
      uVar4 = FUN_007d2e20(*(undefined8 *)(param_1 + 0xf0));
      if (((uVar4 & 1) == 0) &&
         (uVar4 = FUN_007da180(*(undefined8 *)(param_1 + 0xd0)), (uVar4 & 1) == 0)) {
        uVar4 = FUN_01940760(*(undefined8 *)PTR_DAT_02716a30);
        if ((uVar4 & 1) != 0) {
          FUN_007d33b0(*(undefined8 *)(param_1 + 0xf0),*(undefined2 *)(param_1 + 0xac));
        }
        FUN_007da3d0(*(undefined8 *)(param_1 + 0xd0),param_1 + 0xa8);
        FUN_007d3980(*(undefined8 *)(param_1 + 0xf0),*(undefined2 *)(param_1 + 0xac));
        return;
      }
      local_24 = FUN_007d7b40(*(undefined8 *)(param_1 + 0x110));
      if ((local_24 != *(int *)(param_1 + 0xa8)) &&
         (uVar4 = FUN_007da3d0(*(undefined8 *)(param_1 + 0xd0),&local_24), (uVar4 & 1) != 0)) {
        *(int *)(param_1 + 0xa8) = local_24;
        if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0xa0) + 8))();
        }
      }
      uVar3 = FUN_007d3260(*(undefined8 *)(param_1 + 0xf0));
      if (((uint)*(ushort *)(param_1 + 0xac) != (uVar3 & 0xffff)) &&
         (uVar4 = FUN_007d3980(*(undefined8 *)(param_1 + 0xf0),uVar3), (uVar4 & 1) != 0)) {
        *(short *)(param_1 + 0xac) = (short)uVar3;
        if (*(undefined8 **)(param_1 + 0xa0) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(param_1 + 0xa0))();
        }
      }
      puVar2 = *(undefined8 **)(param_1 + 0x48);
      for (puVar1 = *(undefined8 **)(param_1 + 0x40); puVar1 != puVar2; puVar1 = puVar1 + 1) {
        plVar5 = (long *)*puVar1;
        if ((((plVar5 != (long *)0x0) && ((char)plVar5[0xc] != '\0')) &&
            ((((long *)plVar5[0x10] != (long *)0x0 &&
              (uVar4 = (**(code **)(*(long *)plVar5[0x10] + 8))(), (uVar4 & 1) != 0)) ||
             ((char)plVar5[0xe] != '\0')))) &&
           (uVar4 = (**(code **)(*plVar5 + 0x40))(plVar5), (uVar4 & 1) != 0)) {
          *(undefined1 *)(plVar5 + 0xc) = 0;
        }
      }
    }
  }
  return;
}


