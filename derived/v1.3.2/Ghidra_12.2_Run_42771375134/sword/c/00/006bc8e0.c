/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bc8e0; name: FUN_006bc8e0
 */


void FUN_006bc8e0(long param_1,long param_2)

{
  long *__src;
  size_t __n;
  long *plVar1;
  long *__dest;
  long lVar2;
  undefined8 uVar3;
  long local_28;
  
  if (param_2 != 0) {
    plVar1 = *(long **)(param_1 + 0x60);
    __dest = *(long **)(param_1 + 0x68);
    local_28 = param_2;
    if ((plVar1 != __dest) && (*plVar1 != param_2)) {
      do {
        plVar1 = plVar1 + 1;
        if (__dest == plVar1) {
          __src = __dest + 1;
          __n = (long)__dest - (long)__src;
          lVar2 = (long)__n >> 3;
          if (__n != 0) goto LAB_006bc940;
          goto LAB_006bc948;
        }
      } while (*plVar1 != param_2);
    }
    __src = plVar1 + 1;
    __n = (long)__dest - (long)__src;
    lVar2 = (long)__n >> 3;
    __dest = plVar1;
    if (__n != 0) {
LAB_006bc940:
      memmove(__dest,__src,__n);
    }
LAB_006bc948:
    *(long **)(param_1 + 0x68) = __dest + lVar2;
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 == *(long **)(param_1 + 0x40)) {
      FUN_006bd220(param_1 + 0x30,&local_28);
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *plVar1 = local_28;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  }
  return;
}


