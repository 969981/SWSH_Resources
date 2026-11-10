/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008880c0; name: FUN_008880c0
 */


undefined2 FUN_008880c0(long param_1,undefined2 param_2)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined2 uVar5;
  undefined1 auStack_30 [16];
  
  FUN_008885c0(auStack_30,param_2);
  uVar3 = FUN_00888de0(auStack_30);
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x160);
    uVar1 = *(ushort *)(lVar4 + 2);
    uVar2 = FUN_00888630(auStack_30,0x17);
    uVar5 = *(undefined2 *)(lVar4 + (ulong)uVar1 * 2 + (ulong)(uVar2 & 0xff) * 4 + 0x46);
  }
  FUN_00888620(auStack_30);
  return uVar5;
}


