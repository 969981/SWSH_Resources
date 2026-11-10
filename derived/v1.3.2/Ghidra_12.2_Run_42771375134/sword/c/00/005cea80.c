/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cea80; name: FUN_005cea80
 */


void FUN_005cea80(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_40 [16];
  
  FUN_006966f0(auStack_40,param_1 + 0x228,1);
  lVar3 = FUN_005ee900();
  iVar2 = FUN_005ee910();
  uVar4 = *(ulong *)(param_1 + 0x268);
  uVar5 = *(ulong *)(param_1 + 0x270);
  if (uVar5 <= uVar4) {
    lVar6 = uVar5 * 2;
    if (lVar6 == 0) {
      lVar6 = 1;
    }
    if (*(long *)(param_1 + 0x298) != 0) {
      lVar6 = *(long *)(param_1 + 0x298) + uVar5;
    }
    uVar4 = FUN_005d0a60(param_1 + 600,lVar6,1);
    if ((uVar4 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x268) = 0;
      *(undefined8 *)(param_1 + 0x290) = 0;
      *(undefined8 *)(param_1 + 0x288) = 0;
      goto LAB_005ceb38;
    }
    uVar4 = *(ulong *)(param_1 + 0x268);
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x280) + uVar4 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = lVar3 + iVar2;
  lVar3 = *(long *)(param_1 + 0x268) + 1;
  *(long *)(param_1 + 0x268) = lVar3;
  *(long *)(param_1 + 0x288) = *(long *)(param_1 + 0x280);
  *(long *)(param_1 + 0x290) = *(long *)(param_1 + 0x280) + lVar3 * 0x10;
LAB_005ceb38:
  FUN_00696730(auStack_40);
  return;
}


