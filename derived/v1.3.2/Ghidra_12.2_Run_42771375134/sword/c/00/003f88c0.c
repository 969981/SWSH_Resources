/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f88c0; name: FUN_003f88c0
 */


void FUN_003f88c0(long param_1,undefined2 *param_2,ushort param_3)

{
  long *plVar1;
  void *__dest;
  long lVar2;
  size_t __n;
  ushort *puVar3;
  
  *(undefined2 *)(param_1 + 0x42) = *param_2;
  if (*(int *)(param_1 + 0x48) == 6) {
    puVar3 = (ushort *)(param_1 + 0x78);
    if (param_3 <= *puVar3) {
      __dest = *(void **)(param_1 + 0x70);
      goto LAB_003f89f8;
    }
    lVar2 = *(long *)(param_1 + 0x70);
    if ((lVar2 != 0) && (*(char *)(param_1 + 0x41) != '\0')) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
      *puVar3 = 0;
    }
    __n = (ulong)param_3 << 1;
    plVar1 = (long *)FUN_00400d30();
    __dest = (void *)(**(code **)(*plVar1 + 0x10))
                               (plVar1,__n,"NonTrackedAlloc",
                                "./../../GeomUtils/src\\GuGeometryUnion.h",0x67);
    *(void **)(param_1 + 0x70) = __dest;
    *(ushort *)(param_1 + 0x78) = param_3;
  }
  else {
    if (*(int *)(param_1 + 0x48) != 5) {
      return;
    }
    puVar3 = (ushort *)(param_1 + 0x90);
    if (param_3 <= *puVar3) {
      __dest = *(void **)(param_1 + 0x88);
LAB_003f89f8:
      __n = (ulong)param_3 << 1;
      goto LAB_003f8a00;
    }
    lVar2 = *(long *)(param_1 + 0x88);
    if ((lVar2 != 0) && (*(char *)(param_1 + 0x41) != '\0')) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
      *puVar3 = 0;
    }
    __n = (ulong)param_3 << 1;
    plVar1 = (long *)FUN_00400d30();
    __dest = (void *)(**(code **)(*plVar1 + 0x10))
                               (plVar1,__n,"NonTrackedAlloc",
                                "./../../GeomUtils/src\\GuGeometryUnion.h",0x67);
    *(void **)(param_1 + 0x88) = __dest;
    *(ushort *)(param_1 + 0x90) = param_3;
  }
  *(undefined1 *)(param_1 + 0x41) = 1;
LAB_003f8a00:
  memcpy(__dest,param_2,__n);
  *puVar3 = param_3;
  return;
}


