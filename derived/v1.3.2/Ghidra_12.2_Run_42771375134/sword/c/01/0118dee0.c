/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0118dee0; name: FUN_0118dee0
 */


undefined8 FUN_0118dee0(long param_1,ulong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
LAB_0118def4:
  do {
    while (pbVar1 = (byte *)*param_2, (byte *)param_2[1] <= pbVar1) {
      uVar3 = 0;
LAB_0118dfa4:
      uVar3 = FUN_0080d8c0(param_2,uVar3);
      *(uint *)(param_2 + 4) = uVar3;
      if (uVar3 - 1 < 0x7f) goto LAB_0118df24;
LAB_0118dfc8:
      if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
        return 1;
      }
      uVar4 = FUN_008148c0(param_2);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
    }
    uVar3 = (uint)*pbVar1;
    if ((char)*pbVar1 < '\x01') goto LAB_0118dfa4;
    *(uint *)(param_2 + 4) = uVar3;
    *param_2 = (ulong)(pbVar1 + 1);
LAB_0118df24:
    if (uVar3 != 8) goto LAB_0118dfc8;
    if (((byte *)*param_2 < (byte *)param_2[1]) && (bVar2 = *(byte *)*param_2, -1 < (char)bVar2)) {
      *(ulong *)(param_1 + 0x18) = (ulong)bVar2;
      uVar4 = *param_2;
      *param_2 = uVar4 + 1;
      if (uVar4 + 1 != param_2[1]) goto LAB_0118def4;
    }
    else {
      auVar5 = FUN_0080d3e0(param_2);
      *(long *)(param_1 + 0x18) = auVar5._0_8_;
      if ((auVar5._8_8_ & 1) == 0) {
        return 0;
      }
      if (*param_2 != param_2[1]) goto LAB_0118def4;
    }
    if ((*(int *)((long)param_2 + 0x2c) != 0) || ((int)param_2[3] == (int)param_2[5])) {
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined1 *)((long)param_2 + 0x24) = 1;
      return 1;
    }
  } while( true );
}


