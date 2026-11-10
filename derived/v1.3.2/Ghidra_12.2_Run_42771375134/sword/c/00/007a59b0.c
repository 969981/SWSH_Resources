/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a59b0; name: FUN_007a59b0
 */


undefined8 FUN_007a59b0(long param_1,ulong *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
LAB_007a59c4:
  do {
    while (pbVar1 = (byte *)*param_2, (byte *)param_2[1] <= pbVar1) {
      uVar2 = 0;
LAB_007a5a34:
      uVar2 = FUN_0080d8c0(param_2,uVar2);
      *(uint *)(param_2 + 4) = uVar2;
      if (uVar2 - 1 < 0x7f) goto LAB_007a59f4;
LAB_007a5a58:
      if ((uVar2 == 0) || ((uVar2 & 7) == 4)) {
        return 1;
      }
      uVar3 = FUN_008148c0(param_2);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
    uVar2 = (uint)*pbVar1;
    if ((char)*pbVar1 < '\x01') goto LAB_007a5a34;
    *(uint *)(param_2 + 4) = uVar2;
    *param_2 = (ulong)(pbVar1 + 1);
LAB_007a59f4:
    if (uVar2 != 8) goto LAB_007a5a58;
    pbVar1 = (byte *)*param_2;
    if (pbVar1 < (byte *)param_2[1]) {
      uVar2 = (uint)*pbVar1;
      if ((char)*pbVar1 < '\0') goto LAB_007a5a80;
      *param_2 = (ulong)(pbVar1 + 1);
      *(uint *)(param_1 + 0x14) = uVar2;
      if (*param_2 != param_2[1]) goto LAB_007a59c4;
    }
    else {
      uVar2 = 0;
LAB_007a5a80:
      lVar4 = FUN_0080d5d0(param_2,uVar2);
      if (lVar4 < 0) {
        return 0;
      }
      *(int *)(param_1 + 0x14) = (int)lVar4;
      if (*param_2 != param_2[1]) goto LAB_007a59c4;
    }
    if ((*(int *)((long)param_2 + 0x2c) != 0) || ((int)param_2[3] == (int)param_2[5])) {
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined1 *)((long)param_2 + 0x24) = 1;
      return 1;
    }
  } while( true );
}


