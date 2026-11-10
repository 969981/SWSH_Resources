/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ae590; name: FUN_011ae590
 */


undefined8 FUN_011ae590(long param_1,ulong *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  do {
    while (pbVar1 = (byte *)*param_2, (byte *)param_2[1] <= pbVar1) {
      uVar2 = 0;
LAB_011ae644:
      uVar2 = FUN_0080d8c0(param_2,uVar2);
      *(uint *)(param_2 + 4) = uVar2;
      if (uVar2 - 1 < 0x7f) goto LAB_011ae5d4;
LAB_011ae668:
      if (uVar2 == 0) {
        return 1;
      }
      if ((uVar2 & 7) == 4) {
        return 1;
      }
      uVar3 = FUN_008148c0(param_2);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
    uVar2 = (uint)*pbVar1;
    if ((char)*pbVar1 < '\x01') goto LAB_011ae644;
    *(uint *)(param_2 + 4) = uVar2;
    *param_2 = (ulong)(pbVar1 + 1);
LAB_011ae5d4:
    if (uVar2 != 8) goto LAB_011ae668;
    pbVar1 = (byte *)*param_2;
    if ((pbVar1 < (byte *)param_2[1]) && (-1 < (char)*pbVar1)) {
      uVar3 = (ulong)*pbVar1;
      *param_2 = (ulong)(pbVar1 + 1);
    }
    else {
      auVar4 = FUN_0080d3e0(param_2);
      uVar3 = auVar4._0_8_;
      if ((auVar4._8_8_ & 1) == 0) {
        return 0;
      }
    }
    *(bool *)(param_1 + 0x11) = uVar3 != 0;
    if ((*param_2 == param_2[1]) &&
       ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined1 *)((long)param_2 + 0x24) = 1;
      return 1;
    }
  } while( true );
}


