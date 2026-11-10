/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b9fd0; name: FUN_003b9fd0
 */


void FUN_003b9fd0(long param_1)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  float *pfVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  byte local_38 [8];
  
  FUN_003b17c0(local_38,*(undefined8 *)(param_1 + 0x20));
  if ((local_38[0] >> 3 & 1) == 0) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      if (*(int *)(param_1 + 0x18) < 0) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
        (**(code **)(**(long **)(*(long *)(lVar5 + 0x720) + 0x6e8) + 0xa8))(&local_68);
        FUN_003cde40(*(undefined8 *)(lVar5 + 0x1048),param_1,0,&local_68,
                     *(uint *)(lVar5 + 0x110c) >> 4 & 1);
        FUN_003c6bd0(param_1);
      }
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x28) == '\0') {
      lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x808);
      FUN_003b19a0(&local_68,*(undefined8 *)(param_1 + 0x20));
      pfVar3 = (float *)(*(long *)(lVar5 + 8) +
                        ((ulong)*(uint *)(param_1 + 0x18) & 0x1fffffff) * 0x18);
      *pfVar3 = local_68;
      pfVar3[1] = local_64;
      pfVar3[2] = local_60;
      pfVar3[3] = local_5c;
      pfVar3[4] = local_58;
      pfVar3[5] = local_54;
      *(undefined1 *)(lVar5 + 0x18) = 1;
      FUN_003c6b10(0,param_1,6,0);
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
    FUN_003b19a0(&local_68,*(undefined8 *)(param_1 + 0x20));
    fVar6 = (float)FUN_003b1ad0(*(undefined8 *)(param_1 + 0x20));
    if (local_68 <= local_5c) {
      local_60 = local_60 - fVar6;
      local_5c = fVar6 + local_5c;
      local_64 = local_64 - fVar6;
      local_58 = fVar6 + local_58;
      local_68 = local_68 - fVar6;
      local_54 = fVar6 + local_54;
    }
    lVar4 = *(long *)(lVar5 + 0x808);
    pfVar3 = (float *)(*(long *)(lVar4 + 8) + ((ulong)*(uint *)(param_1 + 0x18) & 0x1fffffff) * 0x18
                      );
    *pfVar3 = local_68;
    pfVar3[1] = local_64;
    pfVar3[2] = local_60;
    pfVar3[3] = local_5c;
    pfVar3[4] = local_58;
    pfVar3[5] = local_54;
    *(undefined1 *)(lVar4 + 0x18) = 1;
    lVar5 = *(long *)(lVar5 + 0x728);
    uVar1 = *(uint *)(param_1 + 0x18) & 0x1fffffff;
    uVar2 = uVar1 + 0x20 >> 5;
    if ((*(uint *)(lVar5 + 0x78) & 0x7fffffff) < uVar2) {
      __dest = (void *)(**(code **)(**(long **)(lVar5 + 0x80) + 0x10))
                                 (*(long **)(lVar5 + 0x80),uVar2 << 2,
                                  "./../../Common/src\\CmBitMap.h",0x1b7);
      if (((*(void **)(lVar5 + 0x70) != (void *)0x0) &&
          (memcpy(__dest,*(void **)(lVar5 + 0x70),(ulong)(uint)(*(int *)(lVar5 + 0x78) << 2)),
          -1 < *(int *)(lVar5 + 0x78))) && (*(long *)(lVar5 + 0x70) != 0)) {
        (**(code **)(**(long **)(lVar5 + 0x80) + 0x18))();
      }
                    /* WARNING: Subroutine does not return */
      memset((void *)((long)__dest + ((ulong)*(uint *)(lVar5 + 0x78) & 0x7fffffff) * 4),0,
             (ulong)((uVar2 - *(uint *)(lVar5 + 0x78)) * 4));
    }
    lVar4 = (ulong)(uVar1 >> 5) * 4;
    *(uint *)(*(long *)(lVar5 + 0x70) + lVar4) =
         *(uint *)(*(long *)(lVar5 + 0x70) + lVar4) | 1 << (ulong)(*(uint *)(param_1 + 0x18) & 0x1f)
    ;
  }
  return;
}


