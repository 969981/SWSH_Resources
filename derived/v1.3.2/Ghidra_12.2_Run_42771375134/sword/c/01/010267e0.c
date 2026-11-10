/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010267e0; name: FUN_010267e0
 */


int FUN_010267e0(int *param_1)

{
  SystemEventType *pSVar1;
  size_t __n;
  ulong uVar2;
  long lVar3;
  void *__dest;
  PalmaOperationInfo aPStack_2d8 [328];
  ulong local_190 [42];
  undefined1 local_38 [8];
  
  if (*param_1 != -1) {
    pSVar1 = (SystemEventType *)(param_1 + 0x4c);
    uVar2 = nn::os::TryWaitSystemEvent(pSVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = nn::hid::GetPalmaOperationInfo(aPStack_2d8,(PalmaConnectionHandle *)(param_1 + 0x58));
      if ((uVar2 & 0x3fffff) == 0x19ccca) {
        if (*param_1 != -1) {
          nn::os::DestroySystemEvent(pSVar1);
                    /* WARNING: Subroutine does not return */
          memset(local_190,0,0x148);
        }
      }
      else if (*param_1 != -1) {
        nn::os::ClearSystemEvent(pSVar1);
      }
      lVar3 = *(long *)(param_1 + 0x46);
      if (lVar3 != 0) {
        __dest = *(void **)(param_1 + 0x44);
        if (*(code **)(param_1 + 4) == (code *)0x0) {
          __n = lVar3 * 0x118 - 0x118;
        }
        else {
          local_190[0] = (ulong)*(uint *)((long)__dest + 4);
          local_38[0] = 1;
          (**(code **)(param_1 + 4))(param_1 + 0xc,local_190,local_38,aPStack_2d8);
          lVar3 = *(long *)(param_1 + 0x46);
          __n = (*(long *)(param_1 + 0x44) + lVar3 * 0x118) - ((long)__dest + 0x118);
        }
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 0x118),__n);
          lVar3 = *(long *)(param_1 + 0x46);
        }
        *(long *)(param_1 + 0x46) = lVar3 + -1;
        *param_1 = 2;
      }
    }
  }
  FUN_01026550(param_1);
  return param_1[0x46];
}


