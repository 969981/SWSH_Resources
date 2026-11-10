/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005dc340; name: FUN_005dc340
 */


undefined8 FUN_005dc340(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((int)param_2[0x17] != 2) {
    return 0;
  }
  uVar2 = *(ulong *)(param_1 + 0x120);
  uVar1 = *(ulong *)(param_1 + 0x128);
  if (uVar1 <= uVar2) {
    lVar3 = uVar1 * 2;
    if (lVar3 == 0) {
      lVar3 = 1;
    }
    if (*(long *)(param_1 + 0x150) != 0) {
      lVar3 = *(long *)(param_1 + 0x150) + uVar1;
    }
    uVar2 = FUN_005dc5c0(param_1 + 0x110,lVar3,1);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      goto LAB_005dc3d0;
    }
    uVar2 = *(ulong *)(param_1 + 0x120);
  }
  *(long **)(*(long *)(param_1 + 0x138) + uVar2 * 8) = param_2;
  lVar3 = *(long *)(param_1 + 0x120) + 1;
  *(long *)(param_1 + 0x120) = lVar3;
  *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x138);
  *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x138) + lVar3 * 8;
LAB_005dc3d0:
  (**(code **)(*param_2 + 0x10))(param_2);
  return 1;
}


