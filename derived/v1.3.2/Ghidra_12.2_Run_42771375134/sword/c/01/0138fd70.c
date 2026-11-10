/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138fd70; name: FUN_0138fd70
 */


uint FUN_0138fd70(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x440) == 0) {
    uVar1 = 0;
    lVar5 = *(long *)(param_1 + 0x448);
    uVar3 = 0;
    if (lVar5 == 0) {
      uVar2 = 0;
      goto LAB_0138fdb0;
    }
  }
  else {
    FUN_01387780(*(long *)(param_1 + 0x440),auStack_28);
    uVar1 = FUN_01388c10();
    lVar5 = *(long *)(param_1 + 0x448);
    uVar2 = 0;
    uVar3 = uVar1;
    if (lVar5 == 0) goto LAB_0138fdb0;
  }
  uVar1 = uVar3;
  FUN_01387780(lVar5,auStack_28);
  uVar2 = FUN_01388c10();
LAB_0138fdb0:
  uVar3 = 0;
  if (*(long *)(param_1 + 0x450) != 0) {
    FUN_01387780(*(long *)(param_1 + 0x450),auStack_28);
    uVar3 = FUN_01388c10();
  }
  uVar4 = 0;
  if (*(long *)(param_1 + 0x458) != 0) {
    FUN_01387780(*(long *)(param_1 + 0x458),auStack_28);
    uVar4 = FUN_01388c10();
  }
  return uVar1 & uVar2 & uVar3 & uVar4 & 1;
}


