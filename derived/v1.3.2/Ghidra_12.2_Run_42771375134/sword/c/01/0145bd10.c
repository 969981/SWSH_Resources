/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0145bd10; name: FUN_0145bd10
 */


void FUN_0145bd10(long param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long local_38;
  
  lVar2 = FUN_0152d900(*(undefined8 *)(param_1 + 0x428),*(undefined4 *)(param_1 + 0x414));
  pbVar3 = (byte *)FUN_0152d910(*(undefined8 *)(param_1 + 0x428),*(undefined1 *)(lVar2 + 2));
  bVar1 = *pbVar3;
  uVar4 = (ulong)bVar1;
  *(uint *)(param_1 + 0x410) = (uint)bVar1;
  if (bVar1 != 0) {
    lVar5 = 0;
    iVar7 = -1;
    plVar6 = (long *)(param_1 + 800);
    do {
      FUN_0152da80(&local_38,*(undefined8 *)(param_1 + 0x428),*(undefined1 *)(lVar2 + 2),
                   (int)uVar4 + iVar7,*(undefined8 *)(param_1 + 8));
      if (*plVar6 != 0) {
        (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
        *plVar6 = 0;
      }
      lVar5 = lVar5 + 1;
      iVar7 = iVar7 + -1;
      *plVar6 = local_38;
      uVar4 = (ulong)*(int *)(param_1 + 0x410);
      plVar6 = plVar6 + 1;
    } while (lVar5 < (long)uVar4);
  }
  return;
}


