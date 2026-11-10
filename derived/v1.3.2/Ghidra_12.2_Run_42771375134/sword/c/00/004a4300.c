/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a4300; name: FUN_004a4300
 */


undefined8 FUN_004a4300(long *param_1,long param_2)

{
  long *plVar1;
  long *__dest;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  
  __dest = (long *)FUN_004a41f0(param_1,param_2 + 0x10);
  uVar2 = *(uint *)(param_1 + 1);
  plVar1 = (long *)(*param_1 + (ulong)uVar2 * 0x40);
  if (plVar1 != __dest) {
    do {
      plVar3 = __dest + 8;
      if (*__dest != *(long *)(param_2 + 0x10)) {
        return 0;
      }
      if ((int)__dest[1] != *(int *)(param_2 + 0x18)) {
        return 0;
      }
      if ((int)__dest[2] != *(int *)(param_2 + 0x20)) {
        return 0;
      }
      if ((char)__dest[3] != *(char *)(param_2 + 0x28)) {
        return 0;
      }
      if ((char)__dest[4] != *(char *)(param_2 + 0x30)) {
        return 0;
      }
      if (__dest[5] != *(long *)(param_2 + 0x38)) {
        return 0;
      }
      if (__dest[7] == param_2) {
        if (__dest < plVar1 + -8) {
          uVar4 = (long)plVar1 + (~(ulong)__dest - 0x40);
          if (((uint)uVar4 >> 6 & 1) == 0) {
            memcpy(__dest,plVar3,0x30);
            __dest[6] = __dest[0xe];
            __dest[7] = __dest[0xf];
            __dest = plVar3;
          }
          if (0x3f < uVar4) {
            do {
              memcpy(__dest,__dest + 8,0x30);
              plVar3 = __dest + 0x10;
              __dest[6] = __dest[0xe];
              __dest[7] = __dest[0xf];
              memcpy(__dest + 8,plVar3,0x30);
              __dest[0xe] = __dest[0x16];
              __dest[0xf] = __dest[0x17];
              __dest = plVar3;
            } while (plVar3 < plVar1 + -8);
          }
          uVar2 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar2 - 1;
        return 1;
      }
      __dest = plVar3;
    } while (plVar1 != plVar3);
  }
  return 0;
}


