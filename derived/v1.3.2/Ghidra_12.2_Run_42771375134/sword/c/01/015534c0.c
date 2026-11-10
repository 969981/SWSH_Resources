/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015534c0; name: FUN_015534c0
 */


void FUN_015534c0(long param_1,uint param_2,ushort param_3,byte param_4)

{
  byte *pbVar1;
  
  if (*(ushort *)(&DAT_02173160 + (long)(int)param_2 * 2) < param_3) {
    return;
  }
  if (param_2 == 2) {
    if (0x18 < param_3) {
      pbVar1 = (byte *)(param_1 + (ulong)param_3 + 0x116);
      goto LAB_0155354c;
    }
  }
  else if (param_2 == 1) {
    if (0x18 < param_3) {
      pbVar1 = (byte *)(param_1 + (ulong)param_3 + 0x114);
      goto LAB_0155354c;
    }
  }
  else if ((param_2 == 0) && (0x54 < param_3)) {
    if (param_3 < 0x60) {
      pbVar1 = (byte *)(param_1 + (ulong)param_3 + 0xcd);
    }
    else {
      pbVar1 = (byte *)(param_1 + (ulong)param_3 + 0xd8);
    }
    goto LAB_0155354c;
  }
  pbVar1 = (byte *)(*(long *)(param_1 + (ulong)(param_2 & 0xffff) * 8 + 0x150) + (ulong)param_3);
LAB_0155354c:
  *pbVar1 = param_4 & 1;
  return;
}


