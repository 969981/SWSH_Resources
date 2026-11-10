/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b06f0; name: FUN_011b06f0
 */


undefined8 FUN_011b06f0(long param_1,ulong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
LAB_011b0748:
  do {
    while (pbVar1 = (byte *)*param_2, (byte *)param_2[1] <= pbVar1) {
      uVar3 = 0;
LAB_011b07d4:
      uVar3 = FUN_0080d8c0(param_2,uVar3);
      *(uint *)(param_2 + 4) = uVar3;
      if (uVar3 - 1 < 0x7f) goto LAB_011b0778;
LAB_011b07f8:
      if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
        return 1;
      }
      uVar5 = FUN_008148c0(param_2);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
    }
    uVar3 = (uint)*pbVar1;
    if ((char)*pbVar1 < '\x01') goto LAB_011b07d4;
    *(uint *)(param_2 + 4) = uVar3;
    *param_2 = (ulong)(pbVar1 + 1);
LAB_011b0778:
    if (uVar3 != 8) goto LAB_011b07f8;
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar2 = *(byte *)*param_2;
      uVar3 = (uint)bVar2;
      if ((char)bVar2 < '\0') goto LAB_011b0728;
      *(uint *)(param_1 + 0x14) = uVar3;
      uVar5 = *param_2;
      *param_2 = uVar5 + 1;
      if (uVar5 + 1 != param_2[1]) goto LAB_011b0748;
    }
    else {
      uVar3 = 0;
LAB_011b0728:
      lVar4 = FUN_0080d5d0(param_2,uVar3);
      *(int *)(param_1 + 0x14) = (int)lVar4;
      if (lVar4 < 0) {
        return 0;
      }
      if (*param_2 != param_2[1]) goto LAB_011b0748;
    }
    if ((*(int *)((long)param_2 + 0x2c) != 0) || ((int)param_2[3] == (int)param_2[5])) {
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined1 *)((long)param_2 + 0x24) = 1;
      return 1;
    }
  } while( true );
}


