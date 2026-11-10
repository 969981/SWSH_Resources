/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102b4e0; name: FUN_0102b4e0
 */


void FUN_0102b4e0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if ((*(char *)(param_1 + 0x54) != '\0') &&
     (uVar1 = *(int *)(param_1 + 0x70) + 1, *(uint *)(param_1 + 0x70) = uVar1, 0x13 < uVar1)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    lVar4 = nn::os::GetSystemTick();
    if (lVar4 < *(long *)(param_1 + 0x58)) {
      lVar6 = *(long *)(param_1 + 0x58) + lVar4;
    }
    else {
      *(long *)(param_1 + 0x58) = lVar4;
      lVar6 = lVar4;
    }
    uVar5 = nn::os::ConvertToTimeSpan(lVar6 - *(long *)(param_1 + 0x68));
    uVar2 = ((long)uVar5 >> 0x20) * 0x26d694b3 + ((uVar5 & 0xffffffff) * 0x26d694b3 >> 0x20);
    lVar3 = ((long)(((long)uVar5 >> 0x20) * 0x112e0be8 + ((long)uVar2 >> 0x20) +
                   ((uVar5 & 0xffffffff) * 0x112e0be8 + (uVar2 & 0xffffffff) >> 0x20)) >> 0x1a) -
            ((long)uVar5 >> 0x3f);
    if (*(long *)(param_1 + 0x60) < lVar3) {
      FUN_01529710(*param_2,(int)lVar3 - (int)*(long *)(param_1 + 0x60));
      if (*(long *)(param_1 + 0x58) == lVar6) {
        *(long *)(param_1 + 0x60) = lVar3;
      }
      else {
        *(long *)(param_1 + 0x68) = lVar4;
        uVar5 = nn::os::ConvertToTimeSpan(lVar4);
        uVar2 = ((long)uVar5 >> 0x20) * 0x26d694b3 + ((uVar5 & 0xffffffff) * 0x26d694b3 >> 0x20);
        *(long *)(param_1 + 0x58) = lVar4;
        *(long *)(param_1 + 0x60) =
             ((long)(((long)uVar5 >> 0x20) * 0x112e0be8 + ((long)uVar2 >> 0x20) +
                    ((uVar5 & 0xffffffff) * 0x112e0be8 + (uVar2 & 0xffffffff) >> 0x20)) >> 0x1a) -
             ((long)uVar5 >> 0x3f);
      }
    }
  }
  return;
}


