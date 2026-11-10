/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00600670; name: FUN_00600670
 */


undefined8 FUN_00600670(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(long *)(param_2 + 0x48) == 0) {
    puVar1 = PTR_DAT_02713e78;
    if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
      puVar1 = *(undefined **)(param_2 + 8);
    }
    uVar2 = FUN_0060b2c0(*(undefined8 *)(param_1 + 0x18),param_1 + 0x60,puVar1,
                         *(undefined4 *)(param_2 + 0x30));
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  else {
    uVar2 = FUN_0060bac0();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  FUN_00600770(param_1,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38));
  FUN_00600f70(param_1 + 0x98,(long)*(int *)(param_2 + 0x44));
  FUN_005c80d0(param_1 + 0x20,param_2);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x38);
  lVar3 = *(long *)(param_1 + 0x60);
  *(byte *)(param_1 + 0x58) = *(byte *)(lVar3 + 0x18) & 1;
  *(byte *)(param_1 + 0x59) = *(byte *)(lVar3 + 0x18) >> 1 & 1;
  *(byte *)(param_1 + 0x5a) = *(byte *)(lVar3 + 0x10) >> 2 & 1;
  *(byte *)(param_1 + 0x5b) = *(byte *)(lVar3 + 0x10) >> 6 & 1;
  *(byte *)(param_1 + 0x5c) = *(byte *)(lVar3 + 0x10) >> 5 & 1;
  return 1;
}


