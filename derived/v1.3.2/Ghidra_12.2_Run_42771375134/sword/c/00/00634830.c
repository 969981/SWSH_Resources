/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00634830; name: FUN_00634830
 */


undefined8 FUN_00634830(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [16];
  
  FUN_006966f0(auStack_30,param_1 + 0x18,1);
  if (param_2 < *(ulong *)(param_1 + 0x160)) {
    uVar2 = *(ulong *)(param_1 + 0x158);
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = param_2 / uVar2;
    }
    lVar3 = param_2 - uVar1 * uVar2;
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0xd0) + uVar1 * 8) + 0x38);
    if (*(char *)(lVar4 + lVar3 * 0x28 + 0x18) != '\0') {
      uVar5 = *(undefined8 *)(lVar4 + lVar3 * 0x28 + 0x20);
      goto LAB_006348a0;
    }
  }
  uVar5 = 0;
LAB_006348a0:
  FUN_00696730(auStack_30);
  return uVar5;
}


