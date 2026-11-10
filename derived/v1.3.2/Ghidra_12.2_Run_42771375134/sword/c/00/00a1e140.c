/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1e140; name: FUN_00a1e140
 */


void FUN_00a1e140(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00a0bde0(param_2,0);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  FUN_00ffd430(uVar3,param_1 + 0x148);
  FUN_00ffd430(uVar3,param_1 + 0x150);
  FUN_00ffd620(uVar3);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x48) != 0)) {
    lVar2 = *(long *)(lVar1 + 0x40);
    lVar1 = *(long *)(lVar1 + 0x48) * 0x28;
    do {
      if (*(int *)(lVar2 + 0x10) - 1U < 3) {
        FUN_00a0bf00(param_1 + 0xc0,lVar2);
      }
      lVar2 = lVar2 + 0x28;
      lVar1 = lVar1 + -0x28;
    } while (lVar1 != 0);
  }
  lVar1 = *(long *)(param_1 + 0x158);
  if (*(long *)(param_1 + 0x108) == 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    return;
  }
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  FUN_00a1e220(param_1);
  return;
}


