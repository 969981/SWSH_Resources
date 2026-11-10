/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005dc290; name: FUN_005dc290
 */


undefined8 FUN_005dc290(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((int)param_2[0x17] != 1) {
    return 0;
  }
  uVar2 = *(ulong *)(param_1 + 0xd0);
  uVar1 = *(ulong *)(param_1 + 0xd8);
  if (uVar1 <= uVar2) {
    lVar3 = uVar1 * 2;
    if (lVar3 == 0) {
      lVar3 = 1;
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar3 = *(long *)(param_1 + 0x100) + uVar1;
    }
    uVar2 = FUN_005dc5c0(param_1 + 0xc0,lVar3,1);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      goto LAB_005dc320;
    }
    uVar2 = *(ulong *)(param_1 + 0xd0);
  }
  *(long **)(*(long *)(param_1 + 0xe8) + uVar2 * 8) = param_2;
  lVar3 = *(long *)(param_1 + 0xd0) + 1;
  *(long *)(param_1 + 0xd0) = lVar3;
  *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
  *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xe8) + lVar3 * 8;
LAB_005dc320:
  (**(code **)(*param_2 + 0x10))(param_2);
  return 1;
}


