/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00634920; name: FUN_00634920
 */


undefined8 FUN_00634920(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [16];
  
  FUN_006966f0(auStack_30,param_1 + 0x18,1);
  uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  uVar3 = *(ulong *)(param_1 + 0x158);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = uVar2 / uVar3;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0xd0) + uVar1 * 8) + 0x38) +
                    (uVar2 - uVar1 * uVar3) * 0x28 + 8);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
  }
  FUN_00696730(auStack_30);
  return uVar5;
}


