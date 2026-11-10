/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00902b80; name: FUN_00902b80
 */


undefined8 FUN_00902b80(long param_1,undefined4 *param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  
  bVar2 = *(byte *)(param_1 + 0x348);
  lVar5 = 0;
  bVar6 = 0;
  uVar4 = (ulong)~(uint)bVar2 & 1;
  if (bVar2 != 0) {
    do {
      lVar1 = param_1 + lVar5;
      lVar5 = lVar5 + 2;
      bVar6 = *(char *)(lVar1 + 0x2af) + *(char *)(lVar1 + 0x2ae) + bVar6;
    } while (((ulong)bVar2 + 1) - uVar4 != lVar5);
  }
  if ((int)uVar4 != 0) {
    bVar6 = *(char *)(param_1 + lVar5 + 0x2ae) + bVar6;
  }
  uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
  uVar3 = FUN_008df900(uVar3,*(undefined1 *)(param_1 + 0x2a6),*(undefined1 *)(param_1 + 0x348));
  lVar5 = param_1 + (ulong)*(byte *)(param_1 + 0x348);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(ulong *)(param_1 + 0x88) =
       param_1 + ((ulong)*(byte *)(param_1 + 0x348) + (ulong)bVar6) * 8 + 0x410;
  *(long *)(param_1 + 0x90) = lVar5 + 0x2ae;
  *(undefined1 *)(lVar5 + 0x2ae) = 0;
  FUN_009186c0();
  uVar4 = FUN_00902050(param_1,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x88));
  if ((uVar4 & 1) == 0) {
    *param_2 = 2;
  }
  else {
    *(undefined **)(param_1 + 0x560) = PTR_LAB_02717d20;
    *(undefined8 *)(param_1 + 0x568) = 0;
    *(undefined4 *)(param_1 + 0x570) = 0;
  }
  return 0;
}


