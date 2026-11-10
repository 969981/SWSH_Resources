/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0118c340; name: FUN_0118c340
 */


undefined8 FUN_0118c340(long param_1,ulong *param_2)

{
  long *plVar1;
  byte *pbVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_02716d10;
  plVar1 = (long *)(param_1 + 0x18);
  do {
    while (pbVar2 = (byte *)*param_2, (byte *)param_2[1] <= pbVar2) {
      uVar4 = 0;
LAB_0118c3f0:
      uVar4 = FUN_0080d8c0(param_2,uVar4);
      *(uint *)(param_2 + 4) = uVar4;
      if (uVar4 - 1 < 0x7f) goto LAB_0118c390;
LAB_0118c414:
      if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
        return 1;
      }
      uVar5 = FUN_008148c0(param_2);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
    }
    uVar4 = (uint)*pbVar2;
    if ((char)*pbVar2 < '\x01') goto LAB_0118c3f0;
    *(uint *)(param_2 + 4) = uVar4;
    *param_2 = (ulong)(pbVar2 + 1);
LAB_0118c390:
    if (uVar4 != 10) goto LAB_0118c414;
    lVar6 = *plVar1;
    if (lVar6 == *(long *)puVar3) {
      FUN_009b58d0(plVar1,*(long *)puVar3);
      lVar6 = *plVar1;
    }
    uVar5 = FUN_008160d0(param_2,lVar6);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if ((*param_2 == param_2[1]) &&
       ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined1 *)((long)param_2 + 0x24) = 1;
      return 1;
    }
  } while( true );
}


