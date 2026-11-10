/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f6610; name: FUN_003f6610
 */


void FUN_003f6610(void *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  void *__src;
  void *__dest;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)((long)param_1 + 0x510);
    pvVar2 = (void *)0x0;
  }
  else if (((uint)(param_2 * 0x28) < 0x501) && (*(char *)((long)param_1 + 0x500) == '\0')) {
    *(undefined1 *)((long)param_1 + 0x500) = 1;
    uVar1 = *(uint *)((long)param_1 + 0x510);
    pvVar2 = param_1;
  }
  else {
    pvVar2 = (void *)FUN_00401b30(param_1,param_2 * 0x28,
                                  "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar1 = *(uint *)((long)param_1 + 0x510);
  }
  if (uVar1 != 0) {
    __src = *(void **)((long)param_1 + 0x508);
    __dest = pvVar2;
    do {
      memcpy(__dest,__src,0x24);
      *(undefined1 *)((long)__dest + 0x24) = *(undefined1 *)((long)__src + 0x24);
      __dest = (void *)((long)__dest + 0x28);
      __src = (void *)((long)__src + 0x28);
    } while (__dest < (void *)((long)pvVar2 + (ulong)uVar1 * 0x28));
  }
  if (-1 < *(int *)((long)param_1 + 0x514)) {
    if (param_1 == *(void **)((long)param_1 + 0x508)) {
      *(undefined1 *)((long)param_1 + 0x500) = 0;
    }
    else {
      FUN_00401ce0(param_1);
    }
  }
  *(void **)((long)param_1 + 0x508) = pvVar2;
  *(int *)((long)param_1 + 0x514) = param_2;
  return;
}


