/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fcf40; name: FUN_003fcf40
 */


void FUN_003fcf40(long param_1,undefined4 param_2,long *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  FUN_003fc170(param_1,&local_60);
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x48);
  lVar5 = *(long *)(*(long *)(lVar4 + 0x720) + 0xa48);
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar6 = (ulong)uVar2 & 0x1fffffff;
  puVar1 = (undefined4 *)(*(long *)(lVar5 + 8) + uVar6 * 0x20);
  *puVar1 = local_60;
  puVar1[1] = local_5c;
  puVar1[2] = local_58;
  puVar1[3] = local_54;
  puVar1[4] = local_50;
  puVar1[5] = local_4c;
  puVar1[6] = local_48;
  puVar1[7] = param_2;
  *(undefined1 *)(lVar5 + 0x1c) = 1;
  lVar4 = *(long *)(lVar4 + 0x808);
  FUN_002938e0(0,0x3f800000,*(long *)(lVar4 + 8) + uVar6 * 0x18,*(long *)(param_1 + 0x40) + 0x48,
               &local_60,0,*PTR_DAT_02710c00 == '\0');
  *(undefined1 *)(lVar4 + 0x18) = 1;
  if ((param_3 != (long *)0x0) && (*(int *)(param_1 + 0x18) < 0)) {
    uVar3 = (uint)uVar6 + 0x20 >> 5;
    if ((*(uint *)(param_3 + 1) & 0x7fffffff) < uVar3) {
      __dest = (void *)(**(code **)(*(long *)param_3[2] + 0x10))
                                 ((long *)param_3[2],uVar3 << 2,"./../../Common/src\\CmBitMap.h",
                                  0x1b7);
      if ((((void *)*param_3 != (void *)0x0) &&
          (memcpy(__dest,(void *)*param_3,(ulong)(uint)((int)param_3[1] << 2)), -1 < (int)param_3[1]
          )) && (*param_3 != 0)) {
        (**(code **)(*(long *)param_3[2] + 0x18))();
      }
                    /* WARNING: Subroutine does not return */
      memset((void *)((long)__dest + ((ulong)*(uint *)(param_3 + 1) & 0x7fffffff) * 4),0,
             (ulong)((uVar3 - *(uint *)(param_3 + 1)) * 4));
    }
    lVar4 = (ulong)((uint)uVar6 >> 5) * 4;
    *(uint *)(*param_3 + lVar4) = *(uint *)(*param_3 + lVar4) | 1 << (ulong)(uVar2 & 0x1f);
  }
  return;
}


