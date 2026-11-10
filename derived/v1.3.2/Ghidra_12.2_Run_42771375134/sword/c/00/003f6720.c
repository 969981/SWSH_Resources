/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f6720; name: FUN_003f6720
 */


void * FUN_003f6720(void *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  void *__src;
  void *pvVar5;
  
  iVar2 = *(uint *)((long)param_1 + 0x514) << 1;
  if ((*(uint *)((long)param_1 + 0x514) & 0x7fffffff) == 0) {
    iVar2 = 1;
  }
  if (iVar2 == 0) {
    uVar1 = *(uint *)((long)param_1 + 0x510);
    pvVar3 = (void *)0x0;
  }
  else if ((uint)(iVar2 * 0x28) < 0x501 && *(char *)((long)param_1 + 0x500) == '\0') {
    *(undefined1 *)((long)param_1 + 0x500) = 1;
    uVar1 = *(uint *)((long)param_1 + 0x510);
    pvVar3 = param_1;
  }
  else {
    pvVar3 = (void *)FUN_00401b30(param_1,iVar2 * 0x28,
                                  "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar1 = *(uint *)((long)param_1 + 0x510);
  }
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    __src = *(void **)((long)param_1 + 0x508);
    pvVar5 = pvVar3;
    do {
      memcpy(pvVar5,__src,0x24);
      *(undefined1 *)((long)pvVar5 + 0x24) = *(undefined1 *)((long)__src + 0x24);
      pvVar5 = (void *)((long)pvVar5 + 0x28);
      __src = (void *)((long)__src + 0x28);
    } while (pvVar5 < (void *)((long)pvVar3 + (ulong)uVar1 * 0x28));
    uVar4 = (ulong)*(uint *)((long)param_1 + 0x510);
  }
  pvVar5 = (void *)((long)pvVar3 + uVar4 * 0x28);
  memcpy(pvVar5,param_2,0x24);
  *(undefined1 *)((long)pvVar5 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  if (-1 < *(int *)((long)param_1 + 0x514)) {
    if (param_1 == *(void **)((long)param_1 + 0x508)) {
      *(undefined1 *)((long)param_1 + 0x500) = 0;
    }
    else {
      FUN_00401ce0(param_1);
    }
  }
  uVar1 = *(uint *)((long)param_1 + 0x510);
  *(void **)((long)param_1 + 0x508) = pvVar3;
  *(int *)((long)param_1 + 0x514) = iVar2;
  *(uint *)((long)param_1 + 0x510) = uVar1 + 1;
  return (void *)((long)pvVar3 + (ulong)uVar1 * 0x28);
}


