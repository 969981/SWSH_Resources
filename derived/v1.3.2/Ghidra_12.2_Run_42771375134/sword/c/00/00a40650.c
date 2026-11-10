/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a40650; name: FUN_00a40650
 */


void FUN_00a40650(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 == 2) {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    uVar3 = 1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return;
      }
      uVar4 = 1;
      FUN_016b7990(*(undefined8 *)(param_1 + 0xa8),&DAT_02a52d10,1,0);
      goto LAB_00a406c8;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    uVar3 = 0;
  }
  FUN_00a41380(uVar2,uVar3);
  (**(code **)(**(long **)(*(long *)(param_1 + 0x80) + 0xa0) + 0x50))();
  uVar4 = 0;
LAB_00a406c8:
  *(undefined1 *)(param_1 + 0xa0) = uVar4;
  return;
}


